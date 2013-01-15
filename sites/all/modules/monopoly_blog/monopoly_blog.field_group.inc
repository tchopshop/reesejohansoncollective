<?php
/**
 * @file
 * monopoly_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function monopoly_blog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_body|node|blog|form';
  $field_group->group_name = 'group_blog_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_blog_main';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '12',
    'children' => array(
      0 => 'field_blog_body',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_blog_body|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_main_image|node|blog|form';
  $field_group->group_name = 'group_blog_main_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_blog_main';
  $field_group->data = array(
    'label' => 'Main Image',
    'weight' => '13',
    'children' => array(
      0 => 'field_blog_main_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_blog_main_image|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_main|node|blog|form';
  $field_group->group_name = 'group_blog_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '1',
    'children' => array(
      0 => 'group_blog_teaser',
      1 => 'group_blog_start',
      2 => 'group_blog_body',
      3 => 'group_blog_main_image',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_blog_main|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_start|node|blog|form';
  $field_group->group_name = 'group_blog_start';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_blog_main';
  $field_group->data = array(
    'label' => 'Start',
    'weight' => '10',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_type',
      2 => 'path',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_blog_start|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_teaser|node|blog|form';
  $field_group->group_name = 'group_blog_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_blog_main';
  $field_group->data = array(
    'label' => 'Teaser',
    'weight' => '11',
    'children' => array(
      0 => 'field_teaser_summary',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_blog_teaser|node|blog|form'] = $field_group;

  return $export;
}
