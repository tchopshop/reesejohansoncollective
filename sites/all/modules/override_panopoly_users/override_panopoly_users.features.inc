<?php
/**
 * @file
 * override_panopoly_users.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function override_panopoly_users_field_default_fields_alter(&$data) {
  if (isset($data['user-user-field_user_about'])) {
    $data['user-user-field_user_about']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
  if (isset($data['user-user-field_user_picture'])) {
    $data['user-user-field_user_picture']['field_instance']['display']['default']['settings']['linked_field'] = array(
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

/**
 * Implements hook_field_group_info_alter().
 */
function override_panopoly_users_field_group_info_alter(&$data) {
  if (isset($data['group_user_profile|user|user|form'])) {
    $data['group_user_profile|user|user|form']->data['weight'] = '2'; /* WAS: '1' */
  }
}
