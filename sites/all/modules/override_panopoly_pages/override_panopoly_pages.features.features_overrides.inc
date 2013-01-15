<?php
/**
 * @file
 * override_panopoly_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function override_panopoly_pages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.node-panopoly_page-body.field_instance|display|default|settings|linked_field"] = array(
    'advanced' => array(
      'class' => '',
      'rel' => '',
      'target' => '',
      'text' => '',
      'title' => '',
    ),
    'destination' => '',
    'linked' => 0,
  );
  $overrides["field.node-panopoly_page-body.field_instance|display|featured|settings|linked_field"] = array(
    'advanced' => array(
      'class' => '',
      'rel' => '',
      'target' => '',
      'text' => '',
      'title' => '',
    ),
    'destination' => '',
    'linked' => 0,
  );
  $overrides["field.node-panopoly_page-body.field_instance|display|search_result|settings|linked_field"] = array(
    'advanced' => array(
      'class' => '',
      'rel' => '',
      'target' => '',
      'text' => '',
      'title' => '',
    ),
    'destination' => '',
    'linked' => 0,
  );
  $overrides["field.node-panopoly_page-body.field_instance|display|teaser|settings|linked_field"] = array(
    'advanced' => array(
      'class' => '',
      'rel' => '',
      'target' => '',
      'text' => '',
      'title' => '',
    ),
    'destination' => '',
    'linked' => 0,
  );
  $overrides["field.node-panopoly_page-field_featured_categories.field_instance|display|default|settings|linked_field"] = array(
    'advanced' => array(
      'class' => '',
      'rel' => '',
      'target' => '',
      'text' => '',
      'title' => '',
    ),
    'destination' => '',
    'linked' => 0,
  );
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|display|default|settings|linked_field"] = array(
    'advanced' => array(
      'class' => '',
      'rel' => '',
      'target' => '',
      'text' => '',
      'title' => '',
    ),
    'destination' => '',
    'linked' => 0,
  );
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|display|featured|settings|linked_field"] = array(
    'advanced' => array(
      'class' => '',
      'rel' => '',
      'target' => '',
      'text' => '',
      'title' => '',
    ),
    'destination' => '',
    'linked' => 0,
  );
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|display|search_result|settings|linked_field"] = array(
    'advanced' => array(
      'class' => '',
      'rel' => '',
      'target' => '',
      'text' => '',
      'title' => '',
    ),
    'destination' => '',
    'linked' => 0,
  );
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|display|teaser|settings|linked_field"] = array(
    'advanced' => array(
      'class' => '',
      'rel' => '',
      'target' => '',
      'text' => '',
      'title' => '',
    ),
    'destination' => '',
    'linked' => 0,
  );
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|settings|max_resolution"] = '1400x1000';
  $overrides["field.node-panopoly_page-field_featured_status.field_instance|display|default|settings|linked_field"] = array(
    'advanced' => array(
      'class' => '',
      'rel' => '',
      'target' => '',
      'text' => '',
      'title' => '',
    ),
    'destination' => '',
    'linked' => 0,
  );

 return $overrides;
}
