<?php

/**
 * @file
 * Functions for manipulating taxonomy_autocomplete widget to add
 * clickable/popular tags.
 */

/**
 * Util function to inject the popular tags functionality into a form element.
 *
 * @param array $element
 *   form element
 * @param array $context
 *   form element context
 */
function _popular_tags_inject(&$element, $context) {
  drupal_add_js(drupal_get_path('module', 'popular_tags') . '/popular_tags.js');
  drupal_add_css(drupal_get_path('module', 'popular_tags') . '/popular_tags.css');
  $field_name = $element['#field_name'];
  $vname = $context['field']['settings']['allowed_values'][0]['vocabulary'];
  $limit = @$context['instance']['widget']['settings']['popular_tags']['limit'];
  $showhide = @$context['instance']['widget']['settings']['popular_tags']['showhide'];
  if ($showhide) {
    $data['popular_tags'][$field_name]['limit'] = $limit;
    drupal_add_js($data, 'setting');
  }
  $terms = _popular_tags_get_terms($vname, $limit, $showhide);
  $tag_terms = '<div class="tag-terms">';
  $classes[] = 'term';
  if (!empty($limit) && !empty($showhide)) {
    $classes[] = 'popular';
  }
  $count = 0;
  foreach ($terms as $tid => $term) {
    $count++;
    if (!empty($limit) && !empty($showhide) && $count > $limit) {
      $key = array_search('popular', $classes);
      if ($key !== FALSE) {
        unset($classes[$key]);
      }
    }
    $tag_terms .= t('<a class="@classes" href="#" title="x@count">@term</a>', array(
      '@term' => $term->name,
      '@count' => $term->count,
      '@classes' => implode(' ', $classes),
    ));
  }
  $tag_terms .= '</div>';
  $html = '<div class="popular-tags">' . t('You can type your own tags, or choose from the most commonly used tags below.');
  if (!empty($limit) && !empty($showhide)) {
    $html .= '<a href="#" class="show-all-terms">' . t('Show All Terms') . '</a>';
    $html .= '<a href="#" class="show-popular-terms">' . t('Show Popular Terms') . '</a>';
  }
  $html .= $tag_terms . '</div>';
  $element['#description'] = isset($element['#description']) ? $element['#description'] . $html : $html;
}

/**
 * Util func to get the array of popular terms (key = tid, value = term name).
 *
 * @param string $vname
 *   name of the vocabulary
 * @param int $limit
 *   number of tags/terms to fetch (NULL if want default)
 * @param boolean $all
 *   flag set to TRUE if ALL tags/terms should be fetched
 *
 * @return array
 *   fetched terms
 */
function _popular_tags_get_terms($vname, $limit = NULL, $all = FALSE) {
  $sql = <<<__SQL__
SELECT td.tid 'tid', td.name 'name', COUNT(tn.tid) 'count'
FROM {taxonomy_term_data} td
INNER JOIN {taxonomy_vocabulary} tv ON (td.vid = tv.vid)
LEFT JOIN {taxonomy_index} tn ON (tn.tid = td.tid)
WHERE tv.name = :vname
GROUP BY td.tid
ORDER BY count DESC, name
__SQL__;
  $params = array();
  $params[':vname'] = $vname;
  if (!empty($limit) && !$all) {
    $query = db_query_range($sql, 0, $limit, $params);
  }
  else {
    $query = db_query($sql, $params);
  }
  $terms = $query->fetchAllAssoc('tid');
  return $terms;
}
