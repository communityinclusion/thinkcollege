<?php

/**
 * @file
 * program_record.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function program_record_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-program-record-scrollspy.
  $menus['menu-program-record-scrollspy'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'title' => 'Program record (ScrollSpy)',
    'description' => 'This menu is used on Program Record "full content" display for integration with ScrollSpy.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Program record (ScrollSpy)');
  t('This menu is used on Program Record "full content" display for integration with ScrollSpy.');

  return $menus;
}
