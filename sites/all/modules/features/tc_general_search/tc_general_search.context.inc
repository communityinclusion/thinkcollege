<?php
/**
 * @file
 * tc_general_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tc_general_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_search_page';
  $context->description = 'Blocks unique to the site search page.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'general-site-search*' => 'general-site-search*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-a3e478246e735a290dd38acb398c1332' => array(
          'module' => 'views',
          'delta' => 'a3e478246e735a290dd38acb398c1332',
          'region' => 'content',
          'weight' => '-45',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks unique to the site search page.');
  $export['site_search_page'] = $context;

  return $export;
}
