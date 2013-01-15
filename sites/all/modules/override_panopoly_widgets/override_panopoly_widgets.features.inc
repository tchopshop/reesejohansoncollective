<?php
/**
 * @file
 * override_panopoly_widgets.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function override_panopoly_widgets_field_default_fields_alter(&$data) {
  if (isset($data['fieldable_panels_pane-basic_file-field_basic_file_file'])) {
    $data['fieldable_panels_pane-basic_file-field_basic_file_file']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
  if (isset($data['fieldable_panels_pane-basic_file-field_basic_file_text'])) {
    $data['fieldable_panels_pane-basic_file-field_basic_file_text']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
  if (isset($data['fieldable_panels_pane-image-field_basic_image_caption'])) {
    $data['fieldable_panels_pane-image-field_basic_image_caption']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
  if (isset($data['fieldable_panels_pane-image-field_basic_image_image'])) {
    $data['fieldable_panels_pane-image-field_basic_image_image']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
  if (isset($data['fieldable_panels_pane-map-field_map_address'])) {
    $data['fieldable_panels_pane-map-field_map_address']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
  if (isset($data['fieldable_panels_pane-map-field_map_information'])) {
    $data['fieldable_panels_pane-map-field_map_information']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
  if (isset($data['fieldable_panels_pane-quick_links-field_quick_links_links'])) {
    $data['fieldable_panels_pane-quick_links-field_quick_links_links']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
  if (isset($data['fieldable_panels_pane-spotlight-field_basic_spotlight_items'])) {
    $data['fieldable_panels_pane-spotlight-field_basic_spotlight_items']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
  if (isset($data['fieldable_panels_pane-table-field_basic_table_table'])) {
    $data['fieldable_panels_pane-table-field_basic_table_table']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
  if (isset($data['fieldable_panels_pane-text-field_basic_text_text'])) {
    $data['fieldable_panels_pane-text-field_basic_text_text']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
  if (isset($data['fieldable_panels_pane-video-field_video_file'])) {
    $data['fieldable_panels_pane-video-field_video_file']['field_instance']['display']['default']['settings']['linked_field'] = array(
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
