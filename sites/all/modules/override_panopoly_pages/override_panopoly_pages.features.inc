<?php
/**
 * @file
 * override_panopoly_pages.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function override_panopoly_pages_field_default_fields_alter(&$data) {
  if (isset($data['node-panopoly_page-body'])) {
    $data['node-panopoly_page-body']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
    $data['node-panopoly_page-body']['field_instance']['display']['featured']['settings']['linked_field'] = array(
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
    $data['node-panopoly_page-body']['field_instance']['display']['search_result']['settings']['linked_field'] = array(
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
    $data['node-panopoly_page-body']['field_instance']['display']['teaser']['settings']['linked_field'] = array(
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
  if (isset($data['node-panopoly_page-field_featured_categories'])) {
    $data['node-panopoly_page-field_featured_categories']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
  if (isset($data['node-panopoly_page-field_featured_image'])) {
    $data['node-panopoly_page-field_featured_image']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
    $data['node-panopoly_page-field_featured_image']['field_instance']['display']['featured']['settings']['linked_field'] = array(
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
    $data['node-panopoly_page-field_featured_image']['field_instance']['display']['search_result']['settings']['linked_field'] = array(
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
    $data['node-panopoly_page-field_featured_image']['field_instance']['display']['teaser']['settings']['linked_field'] = array(
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
    $data['node-panopoly_page-field_featured_image']['field_instance']['settings']['max_resolution'] = '1400x1000'; /* WAS: '' */
  }
  if (isset($data['node-panopoly_page-field_featured_status'])) {
    $data['node-panopoly_page-field_featured_status']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
