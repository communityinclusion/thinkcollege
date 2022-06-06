<?php

/**
 * @file
 * june_2022_updates.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function june_2022_updates_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function june_2022_updates_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function june_2022_updates_node_info() {
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
