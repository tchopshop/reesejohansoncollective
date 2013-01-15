<?php
/**
 * @file
 * panopoly_news_demo.inc
 */

/**
 * Awesome Roman names
 */
function panopoly_news_demo_terms() {
  $export = array();

  $terms = array(
    'Roman History',
    'Ancient Ruins',
    'The Glory of Rome',
  );

  foreach($terms as $term_name) {
    $term = new stdClass();
    $term->name = $term_name;
    $export[] = $term;
  }

  return $export;
}
