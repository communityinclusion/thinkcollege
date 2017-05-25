<?php
/**
 * @file
 * landing_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landing_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_tc_month_abbrev_day_and_full_year';
  $strongarm->value = 'M j Y';
  $export['date_format_tc_month_abbrev_day_and_full_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_tc_month_and_day';
  $strongarm->value = 'M j';
  $export['date_format_tc_month_and_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_tc_year_only';
  $strongarm->value = 'Y';
  $export['date_format_tc_year_only'] = $strongarm;

  return $export;
}
