<?php

/**
 * @file
 * feeds_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feeds_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'node';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Import nodes from CSV file.',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'direct' => FALSE,
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'Node import',
    'parser' => array(
      'config' => array(
        'delimiter' => ',',
      ),
      'plugin_key' => 'FeedsCSVParser',
    ),
    'processor' => array(
      'config' => array(
        'author' => 0,
        'bundle' => 'article',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => 1,
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['node'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'user';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Import users from CSV file.',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'direct' => 0,
        'directory' => 'public://feeds',
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'User import',
    'parser' => array(
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
      'plugin_key' => 'FeedsCSVParser',
    ),
    'process_in_background' => FALSE,
    'processor' => array(
      'config' => array(
        'bundle' => 'user',
        'defuse_mail' => 0,
        'input_format' => 'plain_text',
        'insert_new' => '1',
        'language' => 'und',
        'mappings' => array(
          0 => array(
            'language' => 'und',
            'source' => 'mail',
            'target' => 'mail',
            'unique' => 1,
          ),
          1 => array(
            'language' => 'und',
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
          ),
          2 => array(
            'language' => 'und',
            'source' => 'Real name',
            'target' => 'field_real_name',
            'unique' => FALSE,
          ),
          3 => array(
            'language' => 'und',
            'source' => 'state',
            'target' => 'profile2:main:field_prof_your_state',
            'unique' => FALSE,
          ),
          4 => array(
            'language' => 'und',
            'source' => 'Real name',
            'target' => 'profile2:main:field_prof_name',
            'unique' => FALSE,
          ),
          5 => array(
            'language' => 'und',
            'source' => 'mail',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'roles' => array(
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
          14 => 0,
          15 => 0,
        ),
        'skip_hash_check' => 0,
        'status' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
      ),
      'plugin_key' => 'FeedsUserProcessor',
    ),
    'update' => 0,
  );
  $export['user'] = $feeds_importer;

  return $export;
}
