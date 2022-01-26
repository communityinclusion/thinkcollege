<?php

/**
 * @file
 * tc_redesign.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function tc_redesign_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'events';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Events';
  $quicktabs->tabs = array(
    0 => array(
      'args' => '',
      'display' => 'page',
      'title' => 'Upcoming Events',
      'type' => 'view',
      'vid' => 'tc_events_page',
      'weight' => '-100',
    ),
    1 => array(
      'args' => '',
      'display' => 'page_3',
      'title' => 'Past Events',
      'type' => 'view',
      'vid' => 'tc_events_page',
      'weight' => '-99',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('Past Events');
  t('Upcoming Events');

  $export['events'] = $quicktabs;

  return $export;
}
