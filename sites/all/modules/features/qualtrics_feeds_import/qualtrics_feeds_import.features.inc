<?php

/**
 * @file
 * qualtrics_feeds_import.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function qualtrics_feeds_import_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
}
