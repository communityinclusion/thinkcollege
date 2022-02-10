<?php

/**
 * @file
 * program_record.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function program_record_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function program_record_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function program_record_node_info() {
  $items = array(
    'program_record' => array(
      'name' => t('Program Record'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Program Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
