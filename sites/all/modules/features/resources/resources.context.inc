<?php

/**
 * @file
 * resources.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function resources_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resource_search_page';
  $context->description = 'Blocks unique to the Resource Library.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resource-search*' => 'resource-search*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search_api_sorts-search-sorts' => array(
          'module' => 'search_api_sorts',
          'delta' => 'search-sorts',
          'region' => 'sidebar_first_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks unique to the Resource Library.');
  $export['resource_search_page'] = $context;

  return $export;
}
