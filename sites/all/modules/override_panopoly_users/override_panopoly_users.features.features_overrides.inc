<?php
/**
 * @file
 * override_panopoly_users.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function override_panopoly_users_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.user-user-field_user_about.field_instance|display|default|settings|linked_field"] = array(
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
  $overrides["field.user-user-field_user_picture.field_instance|display|default|settings|linked_field"] = array(
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

  // Exported overrides for: field_group
  $overrides["field_group.group_user_profile|user|user|form.data|weight"] = '2';

 return $overrides;
}
