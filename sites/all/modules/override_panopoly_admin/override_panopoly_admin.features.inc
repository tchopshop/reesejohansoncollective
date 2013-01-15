<?php
/**
 * @file
 * override_panopoly_admin.features.inc
 */

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function override_panopoly_admin_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_edit_panel_context'])) {
    $data['node_edit_panel_context']->conf['display']->content['new-5']->style['settings']['pane_collapsed'] = 1; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-5']->style['style'] = 'collapsible'; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-6']->style['settings']['pane_collapsed'] = 1; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-6']->style['style'] = 'collapsible'; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-7']->style['settings']['pane_collapsed'] = 1; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-7']->style['style'] = 'collapsible'; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-8']->style['settings']['pane_collapsed'] = 1; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-8']->style['style'] = 'collapsible'; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->panel_settings['style_settings']['two_66_33_bottom'] = NULL; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->panel_settings['style_settings']['two_66_33_first'] = NULL; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->panel_settings['style_settings']['two_66_33_second'] = NULL; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->panel_settings['style_settings']['two_66_33_top'] = NULL; /* WAS: '' */
  }
}
