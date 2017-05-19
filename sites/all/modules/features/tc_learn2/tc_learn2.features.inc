<?php
/**
 * @file
 * tc_learn2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tc_learn2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tc_learn2_node_info() {
  $items = array(
    'tc_learn' => array(
      'name' => t('TC Learn'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
