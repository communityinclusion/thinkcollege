<?php
/**
 * @file
 * landing_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landing_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function landing_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function landing_pages_image_default_styles() {
  $styles = array();

  // Exported image style: landing_page_teaser.
  $styles['landing_page_teaser'] = array(
    'label' => 'Landing page teaser',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
