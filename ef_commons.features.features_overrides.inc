<?php
/**
 * @file
 * ef_commons.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ef_commons_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-94106ddd-1278-0954-c5ba-b59ff1b9bf49"] = (object) array(
      'pid' => 'new-94106ddd-1278-0954-c5ba-b59ff1b9bf49',
      'panel' => 'three_33_first',
      'type' => 'views',
      'subtype' => 'commons_events_upcoming',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_pager_settings' => 0,
        'use_pager' => 0,
        'nodes_per_page' => 5,
        'pager_id' => 0,
        'offset' => 0,
        'more_link' => 0,
        'feed_icons' => 0,
        'panel_args' => 0,
        'link_to_view' => 0,
        'args' => '',
        'url' => '',
        'display' => 'commons_events_upcoming_global_block',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '94106ddd-1278-0954-c5ba-b59ff1b9bf49',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-b6e290b7-1d2b-5db4-a181-28befdcde628"] = (object) array(
      'pid' => 'new-b6e290b7-1d2b-5db4-a181-28befdcde628',
      'panel' => 'three_33_second',
      'type' => 'views_panes',
      'subtype' => 'commons_radioactivity_groups_most_active-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'b6e290b7-1d2b-5db4-a181-28befdcde628',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|three_33_first|1"] = 'new-94106ddd-1278-0954-c5ba-b59ff1b9bf49';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|three_33_second"] = array(
    0 => 'new-b6e290b7-1d2b-5db4-a181-28befdcde628',
  );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-147961bc-a272-4215-96bd-d6814287fbc0"] = (object) array(
      'pid' => 'new-147961bc-a272-4215-96bd-d6814287fbc0',
      'panel' => 'two_66_33_second',
      'type' => 'block',
      'subtype' => 'ef_users-ef_users_profile_progress',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '147961bc-a272-4215-96bd-d6814287fbc0',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-895dfc63-a30f-f734-3185-c40c407b4af0|position"] = 3;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-b20add8c-2daf-4684-45f3-212d60c7f31e|position"] = 1;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-da301a84-b9a5-8664-cd4b-1e84d7dd9f42|position"] = 2;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-f73584de-313c-48a7-8565-574f240ef5b3"] = (object) array(
      'pid' => 'new-f73584de-313c-48a7-8565-574f240ef5b3',
      'panel' => 'two_66_33_top',
      'type' => 'join_group',
      'subtype' => 'join_group',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'f73584de-313c-48a7-8565-574f240ef5b3',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panels|two_66_33_second|0"] = 'new-147961bc-a272-4215-96bd-d6814287fbc0';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panels|two_66_33_second|1"] = 'new-b20add8c-2daf-4684-45f3-212d60c7f31e';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panels|two_66_33_second|2"] = 'new-da301a84-b9a5-8664-cd4b-1e84d7dd9f42';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panels|two_66_33_second|3"] = 'new-895dfc63-a30f-f734-3185-c40c407b4af0';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panels|two_66_33_top"] = array(
    0 => 'new-f73584de-313c-48a7-8565-574f240ef5b3',
  );
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|content|new-ab237aa5-5ae7-8fb4-e1ce-20c776a6950b"] = (object) array(
      'pid' => 'new-ab237aa5-5ae7-8fb4-e1ce-20c776a6950b',
      'panel' => 'two_66_33_second',
      'type' => 'views_panes',
      'subtype' => 'commons_radioactivity_groups_most_active-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'ab237aa5-5ae7-8fb4-e1ce-20c776a6950b',
    );
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|content|new-d8f1faeb-6eb3-4dcb-819d-2c76975ccda4"] = (object) array(
      'pid' => 'new-d8f1faeb-6eb3-4dcb-819d-2c76975ccda4',
      'panel' => 'two_66_33_second',
      'type' => 'join_group',
      'subtype' => 'join_group',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'd8f1faeb-6eb3-4dcb-819d-2c76975ccda4',
    );
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|panels|two_66_33_second"] = array(
    0 => 'new-d8f1faeb-6eb3-4dcb-819d-2c76975ccda4',
    1 => 'new-ab237aa5-5ae7-8fb4-e1ce-20c776a6950b',
  );

  // Exported overrides for: views_view
  $overrides["views_view.commons_events_upcoming.display|default|display_options|filters|type|value|event_payable"] = 'event_payable';
  $overrides["views_view.commons_events_user_upcoming_events.display|panel_pane_3"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:8:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:10:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:9:"arguments";b:0;}s:5:"title";s:10:"You follow";s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:13:"capacity_used";s:13:"capacity_used";s:13:"comment_count";s:13:"comment_count";}}s:13:"relationships";a:1:{s:16:"flag_content_rel";a:4:{s:2:"id";s:16:"flag_content_rel";s:5:"table";s:4:"node";s:5:"field";s:16:"flag_content_rel";s:4:"flag";s:19:"commons_follow_node";}}s:6:"fields";a:4:{s:11:"title_field";a:5:{s:2:"id";s:11:"title_field";s:5:"table";s:22:"field_data_title_field";s:5:"field";s:11:"title_field";s:5:"label";s:0:"";s:14:"link_to_entity";i:1;}s:13:"field_address";a:7:{s:2:"id";s:13:"field_address";s:5:"table";s:24:"field_data_field_address";s:5:"field";s:13:"field_address";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:7:"country";s:8:"settings";a:2:{s:19:"use_widget_handlers";i:1;s:15:"format_handlers";a:1:{s:7:"address";s:7:"address";}}}s:13:"capacity_used";a:7:{s:2:"id";s:13:"capacity_used";s:5:"table";s:4:"node";s:5:"field";s:13:"capacity_used";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:43:"<strong>[capacity_used]</strong> attendees,";}s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";}s:13:"comment_count";a:7:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:41:"<strong>[comment_count]</strong> comments";}s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_3";s:13:"display_title";s:17:"You follow - pane";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');

 return $overrides;
}
