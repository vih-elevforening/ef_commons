<?php
/**
 * @file
 * ef_commons.features.inc
 */

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function ef_commons_default_page_manager_pages_alter(&$data) {
  if (isset($data['commons_home'])) {
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-94106ddd-1278-0954-c5ba-b59ff1b9bf49'] = (object) array(
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
        ); /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->content['new-b6e290b7-1d2b-5db4-a181-28befdcde628'] = (object) array(
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
        ); /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->panels['three_33_first'][1] = 'new-94106ddd-1278-0954-c5ba-b59ff1b9bf49'; /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context_2']->conf['display']->panels['three_33_second'] = array(
      0 => 'new-b6e290b7-1d2b-5db4-a181-28befdcde628',
    ); /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->content['new-f73584de-313c-48a7-8565-574f240ef5b3'] = (object) array(
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
        ); /* WAS: '' */
    $data['commons_home']->default_handlers['page_commons_home_panel_context']->conf['display']->panels['two_66_33_top'] = array(
      0 => 'new-f73584de-313c-48a7-8565-574f240ef5b3',
    ); /* WAS: '' */
  }
}
