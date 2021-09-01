<?php

/**
 * @file
 * tc_resource_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tc_resource_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tc_resource_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function tc_resource_search_default_search_api_index() {
  $items = array();
  $items['tc_resource_index'] = entity_import('search_api_index', '{
    "name" : "Resource Index",
    "machine_name" : "tc_resource_index",
    "description" : "Search Resources only for Think College using Solr",
    "server" : "tc_solr",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "resource" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "field_feature_in_section" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_project" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_resourc_authors" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_resourc_date_received" : { "type" : "date" },
        "field_resourc_media_types" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_resourc_publication_date" : { "type" : "date" },
        "field_resourc_publication_types" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_resourc_state_related" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_resourc_topics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_resource_audiences" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "nid" : { "type" : "integer" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "search_api_viewed" : { "type" : "text" },
        "status" : { "type" : "boolean" },
        "tc_alpha_sortable_title" : { "type" : "string" },
        "tc_searchable_term_audiences" : { "type" : "text" },
        "tc_searchable_term_authors" : { "type" : "text" },
        "tc_searchable_term_media_types" : { "type" : "text" },
        "tc_searchable_term_publication_types" : { "type" : "text" },
        "tc_searchable_term_state_related" : { "type" : "text" },
        "tc_searchable_term_topics" : { "type" : "text" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "resource" : "resource" } }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_resourc_topics:parent" : "field_resourc_topics:parent",
              "field_resourc_topics:parents_all" : "field_resourc_topics:parents_all",
              "field_resourc_media_types:parent" : "field_resourc_media_types:parent",
              "field_resourc_media_types:parents_all" : "field_resourc_media_types:parents_all",
              "field_resourc_publication_types:parent" : "field_resourc_publication_types:parent",
              "field_resourc_publication_types:parents_all" : "field_resourc_publication_types:parents_all"
            }
          }
        },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_resourc_topics" : true,
              "field_feature_in_section" : true,
              "field_resourc_date_received" : true,
              "field_resourc_publication_date" : true,
              "field_resourc_authors" : true,
              "field_resourc_state_related" : true,
              "field_resourc_media_types" : true,
              "field_resourc_publication_types" : true
            }
          }
        },
        "content_taxonomy_autocomplete_moderated_terms" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_sort().
 */
function tc_resource_search_default_search_api_sort() {
  $items = array();
  $items['tc_resource_index__field_resourc_publication_date'] = entity_import('search_api_sort', '{
    "index_id" : "tc_resource_index",
    "field" : "field_resourc_publication_date",
    "name" : "Publication Date",
    "enabled" : "1",
    "weight" : "-100",
    "identifier" : "tc_resource_index__field_resourc_publication_date",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Publication Date" },
    "rdf_mapping" : []
  }');
  $items['tc_resource_index__search_api_relevance'] = entity_import('search_api_sort', '{
    "index_id" : "tc_resource_index",
    "field" : "search_api_relevance",
    "name" : "Relevance",
    "enabled" : "1",
    "weight" : "-98",
    "identifier" : "tc_resource_index__search_api_relevance",
    "default_sort" : "1",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "search_api_relevance" },
    "rdf_mapping" : []
  }');
  $items['tc_resource_index__tc_alpha_sortable_title'] = entity_import('search_api_sort', '{
    "index_id" : "tc_resource_index",
    "field" : "tc_alpha_sortable_title",
    "name" : "Alphabetical",
    "enabled" : "1",
    "weight" : "-99",
    "identifier" : "tc_resource_index__tc_alpha_sortable_title",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "asc",
    "options" : { "field_name" : "TC:Alphabetically Sortable Title" },
    "rdf_mapping" : []
  }');
  return $items;
}
