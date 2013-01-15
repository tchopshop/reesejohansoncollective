<?php
/**
 * @file
 * monopoly_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function monopoly_blog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function monopoly_blog_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function monopoly_blog_image_default_styles() {
  $styles = array();

  // Exported image style: blog.
  $styles['blog'] = array(
    'name' => 'blog',
    'effects' => array(
      3 => array(
        'label' => 'Focus Crop',
        'help' => 'Crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_crop_effect',
        'form callback' => 'imagefield_focus_crop_form',
        'summary theme' => 'imagefield_focus_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'crop_rect only',
        ),
        'weight' => '-10',
      ),
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '380',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '-9',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function monopoly_blog_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog or Press Release'),
      'base' => 'node_content',
      'description' => t('Add a blog entry or press release to your site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
