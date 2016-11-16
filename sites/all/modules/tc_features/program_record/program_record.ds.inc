<?php
/**
 * @file
 * program_record.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function program_record_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'card';
  $ds_view_mode->label = 'Card';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['card'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'modal';
  $ds_view_mode->label = 'Modal';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['modal'] = $ds_view_mode;

  return $export;
}
