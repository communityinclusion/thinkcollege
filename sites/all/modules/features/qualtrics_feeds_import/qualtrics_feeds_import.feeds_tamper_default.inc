<?php

/**
 * @file
 * qualtrics_feeds_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function qualtrics_feeds_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q100-find_replace';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q100';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => 'N/A',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => 'No',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['qualtrics_program_import-q100-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q116-explode';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q116';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['qualtrics_program_import-q116-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q117-explode';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q117';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['qualtrics_program_import-q117-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q118-explode';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q118';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['qualtrics_program_import-q118-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q22a-find_replace';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q22a';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => 'Other, specify below',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => 'Other',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['qualtrics_program_import-q22a-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q24-explode';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q24';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['qualtrics_program_import-q24-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q25-explode';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q25';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['qualtrics_program_import-q25-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q3-find_replace';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q3';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => 'None of these',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => 'None',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['qualtrics_program_import-q3-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q38-explode';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q38';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['qualtrics_program_import-q38-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q38-find_replace';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q38';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => 'Age range (enter ages below)',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => 'Age range',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['qualtrics_program_import-q38-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q38-find_replace_2';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q38';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => 'Student must be their own legal guardian',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => 'legal guardian',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Find replace';
  $export['qualtrics_program_import-q38-find_replace_2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q41-explode';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q41';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['qualtrics_program_import-q41-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q49-explode';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q49';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['qualtrics_program_import-q49-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q57-find_replace';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q57';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => 'We are not a CTP, and have no plans to become one.',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => 'No plans to become CTP',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['qualtrics_program_import-q57-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q58-explode';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q58';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['qualtrics_program_import-q58-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q65-explode';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q65';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['qualtrics_program_import-q65-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q65-find_replace';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q65';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => 'Continuing Education courses',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => 'Typical Continuing Education courses',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['qualtrics_program_import-q65-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q75-explode';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q75';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['qualtrics_program_import-q75-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q75-find_replace';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q75';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => 'None of these',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => 'None',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['qualtrics_program_import-q75-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q80-explode';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q80';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Explode';
  $export['qualtrics_program_import-q80-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q80-find_replace';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q80';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => 'Inclusive on-campus housing in dorms, apartments, or houses',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => 'Inclusive on campus',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['qualtrics_program_import-q80-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q80-find_replace_2';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q80';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => 'Inclusive off-campus housing in dorms, apartments, or houses',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => 'Inclusive off campus',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace';
  $export['qualtrics_program_import-q80-find_replace_2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q80-find_replace_3';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q80';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => 'Specialized on-campus housing only for students in the program',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => 'Specialized on campus',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace_3';
  $export['qualtrics_program_import-q80-find_replace_3'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q80-find_replace_4';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q80';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => 'Specialized off-campus housing only for students in the program',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => 'Specialized off campus',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Find replace';
  $export['qualtrics_program_import-q80-find_replace_4'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q80-find_replace_5';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q80';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => 'Other (specify below)',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => 'Other',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['qualtrics_program_import-q80-find_replace_5'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q9-state_to_abbrev';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q9';
  $feeds_tamper->plugin_id = 'state_to_abbrev';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Full state name to abbrev';
  $export['qualtrics_program_import-q9-state_to_abbrev'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qualtrics_program_import-q99-find_replace';
  $feeds_tamper->importer = 'qualtrics_program_import';
  $feeds_tamper->source = 'Q99';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => 'N/A',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => 'No',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['qualtrics_program_import-q99-find_replace'] = $feeds_tamper;

  return $export;
}
