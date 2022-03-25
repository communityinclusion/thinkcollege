<?php

/**
 * @file
 * tc_general_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function tc_general_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@general_site_search::type';
  $facet->searcher = 'search_api@general_site_search';
  $facet->realm = '';
  $facet->facet = 'type';
  $facet->enabled = FALSE;
  $facet->hash = 'rNPEoR9ApPGocjNWAAdnoJWIqh1uGuYS';
  $facet->settings = array(
    'default_true' => TRUE,
    'dependencies' => array(
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
      'roles' => array(),
    ),
    'exclude' => 0,
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'or',
    'query_type' => 'term',
  );
  $export['search_api@general_site_search::type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@general_site_search:block:type';
  $facet->searcher = 'search_api@general_site_search';
  $facet->realm = 'block';
  $facet->facet = 'type';
  $facet->enabled = TRUE;
  $facet->hash = 'QrOtkF1o8fuRK6ZVfaUp5suTcu6A0JDS';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 0,
      'indexed' => 0,
      'natural' => 0,
      'tc_disability_sort' => 0,
      'tc_school_type_sort' => 0,
    ),
    'display_count' => 1,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
      'tc_disability_sort' => '4',
      'tc_school_type_sort' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
      'natural' => '0',
      'tc_disability_sort' => '0',
      'tc_school_type_sort' => '0',
    ),
    'title' => 'Content type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@general_site_search:block:type'] = $facet;

  return $export;
}
