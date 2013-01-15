<?php
/**
 * @file
 * override_panopoly_core.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function override_panopoly_core_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.taxonomy_term-panopoly_categories-field_featured_image.field_instance|display|default|settings|linked_field"] = array(
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
