<?php
/**
 * @file
 * override_panopoly_admin.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function override_panopoly_admin_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-5|style|settings|pane_collapsed"] = 1;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-5|style|style"] = 'collapsible';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-6|style|settings|pane_collapsed"] = 1;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-6|style|style"] = 'collapsible';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-7|style|settings|pane_collapsed"] = 1;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-7|style|style"] = 'collapsible';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-8|style|settings|pane_collapsed"] = 1;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-8|style|style"] = 'collapsible';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panel_settings|style_settings|two_66_33_bottom"] = NULL;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panel_settings|style_settings|two_66_33_first"] = NULL;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panel_settings|style_settings|two_66_33_second"] = NULL;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panel_settings|style_settings|two_66_33_top"] = NULL;

 return $overrides;
}
