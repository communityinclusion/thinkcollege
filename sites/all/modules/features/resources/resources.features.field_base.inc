<?php

/**
 * @file
 * resources.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function resources_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_video_embed'.
  $field_bases['field_video_embed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video_embed',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
