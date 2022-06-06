<?php

/**
 * @file
 * hero_tabs_and_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hero_tabs_and_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hero_tabs_and_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hero_tabs_and_slideshow_node_info() {
  $items = array(
    'hero_content' => array(
      'name' => t('Hero Content'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'random_slideshow' => array(
      'name' => t('Random slideshow'),
      'base' => 'node_content',
      'description' => t('Show random image in block on page load'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
