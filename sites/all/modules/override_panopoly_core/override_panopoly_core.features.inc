<?php
/**
 * @file
 * override_panopoly_core.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function override_panopoly_core_field_default_fields_alter(&$data) {
  if (isset($data['taxonomy_term-panopoly_categories-field_featured_image'])) {
    $data['taxonomy_term-panopoly_categories-field_featured_image']['field_instance']['display']['default']['settings']['linked_field'] = array(
      'advanced' => array(
        'class' => '',
        'rel' => '',
        'target' => '',
        'text' => '',
        'title' => '',
      ),
      'destination' => '',
      'linked' => 0,
    ); /* WAS: '' */
  }
}
