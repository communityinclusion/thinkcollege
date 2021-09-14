<?php

/**
 * @file
 * restructure_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function restructure_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-temporary-main-menu.
  $menus['menu-temporary-main-menu'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'title' => 'Temporary main menu',
    'description' => 'This has the links to the old www.thinkcollege.net site.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Temporary main menu');
  t('This has the links to the old www.thinkcollege.net site.');

  return $menus;
}
