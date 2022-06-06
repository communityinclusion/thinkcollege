<?php

/**
 * @file
 * tc_redesign.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tc_redesign_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_main-menu';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '1',
  );
  $export['xmlsitemap_settings_menu_link_main-menu'] = $strongarm;

  return $export;
}
