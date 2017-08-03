<?php
/**
 * @file
 * tc_solr_program_record_index.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tc_solr_program_record_index_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tc_solr_program_record_index_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function tc_solr_program_record_index_default_search_api_index() {
  $items = array();
  $items['program_records_index'] = entity_import('search_api_index', '{
    "name" : "Program Records Index",
    "machine_name" : "program_records_index",
    "description" : "Search Index for Program Records using Solr",
    "server" : "dev_solr_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "program_record" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "field__prog_room_and_board" : { "type" : "decimal" },
        "field_address:administrative_area" : { "type" : "text" },
        "field_address:country" : { "type" : "string" },
        "field_address:dependent_locality" : { "type" : "text" },
        "field_address:first_name" : { "type" : "text" },
        "field_address:last_name" : { "type" : "text" },
        "field_address:locality" : { "type" : "text" },
        "field_address:name_line" : { "type" : "text" },
        "field_address:organisation_name" : { "type" : "text" },
        "field_address:postal_code" : { "type" : "text" },
        "field_address:premise" : { "type" : "text" },
        "field_address:sub_administrative_area" : { "type" : "text" },
        "field_address:sub_premise" : { "type" : "text" },
        "field_address:thoroughfare" : { "type" : "text" },
        "field_how_many_students_total_at" : { "type" : "integer" },
        "field_name_of_credential_degree_" : { "type" : "text" },
        "field_please_select_any_all_of_t" : { "type" : "list\\u003Cstring\\u003E" },
        "field_prog_15_16_accepted" : { "type" : "integer" },
        "field_prog_accredited" : { "type" : "string" },
        "field_prog_admiss_requirements" : { "type" : "list\\u003Cstring\\u003E" },
        "field_prog_admit_deadline" : { "type" : "text" },
        "field_prog_age_range" : { "type" : "text" },
        "field_prog_col_univ_name" : { "type" : "text" },
        "field_prog_contact_phone" : { "type" : "text" },
        "field_prog_cost_y_n" : { "type" : "string" },
        "field_prog_course_types" : { "type" : "list\\u003Cstring\\u003E" },
        "field_prog_credential" : { "type" : "string" },
        "field_prog_ctp_y_n" : { "type" : "string" },
        "field_prog_explain_other" : { "type" : "text" },
        "field_prog_housing_y_n" : { "type" : "string" },
        "field_prog_hs_coll" : { "type" : "list\\u003Cstring\\u003E" },
        "field_prog_is_was_tpsid" : { "type" : "list\\u003Cstring\\u003E" },
        "field_prog_know_how_many" : { "type" : "string" },
        "field_prog_length_years" : { "type" : "string" },
        "field_prog_new_studt_f14" : { "type" : "integer" },
        "field_prog_num_applied" : { "type" : "integer" },
        "field_prog_other_career_dev" : { "type" : "list\\u003Cstring\\u003E" },
        "field_prog_other_costs" : { "type" : "string" },
        "field_prog_other_costs_amount" : { "type" : "decimal" },
        "field_prog_other_costs_display" : { "type" : "text" },
        "field_prog_overall_time_dist" : { "type" : "string" },
        "field_prog_pay_methods" : { "type" : "list\\u003Cstring\\u003E" },
        "field_prog_perc_acad_time" : { "type" : "string" },
        "field_prog_perc_employed_af_grad" : { "type" : "integer" },
        "field_prog_perc_w_compet_employ" : { "type" : "integer" },
        "field_prog_program_contact_email" : { "type" : "text" },
        "field_prog_program_email" : { "type" : "text" },
        "field_prog_public_or_privat" : { "type" : "string" },
        "field_prog_room_and_board_displa" : { "type" : "text" },
        "field_prog_schl_dist_email" : { "type" : "text" },
        "field_prog_school_dist" : { "type" : "text" },
        "field_prog_school_dist_contact" : { "type" : "text" },
        "field_prog_serves_id" : { "type" : "string" },
        "field_prog_special_courses" : { "type" : "string" },
        "field_prog_specific_fees" : { "type" : "decimal" },
        "field_prog_student_orgs_y_n" : { "type" : "string" },
        "field_prog_students_pay_display" : { "type" : "text" },
        "field_prog_studt_housing_options" : { "type" : "list\\u003Cstring\\u003E" },
        "field_prog_studt_retn_f15" : { "type" : "integer" },
        "field_prog_summer_prog_y_n" : { "type" : "string" },
        "field_prog_tuition" : { "type" : "decimal" },
        "field_prog_type_of_school" : { "type" : "text" },
        "field_prog_when_will_progr_start" : { "type" : "string" },
        "field_prog_which_dis_specify" : { "type" : "text" },
        "field_prog_which_disabilities" : { "type" : "list\\u003Cstring\\u003E" },
        "field_progprogram_contact_person" : { "type" : "text" },
        "field_requirements_display" : { "type" : "text" },
        "field_resourc_topics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_site_section" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_summer_program_display" : { "type" : "text" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_type_of_school_display" : { "type" : "text" },
        "nid" : { "type" : "integer" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "tc_alpha_sortable_title" : { "type" : "string" },
        "tc_dual_enroll" : { "type" : "string" },
        "tc_financial_aid" : { "type" : "string" },
        "tc_housing" : { "type" : "string" },
        "tc_school_title" : { "type" : "string" },
        "tc_school_type" : { "type" : "string" },
        "tc_state_province" : { "type" : "string" },
        "tc_tpsid" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "3.0" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "multiple_entity_views" : {
          "status" : 0,
          "weight" : "-50",
          "settings" : { "modes" : { "full" : "full", "card" : "card" } }
        },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "program_record" : "program_record" } }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_prog_city" : true,
              "field_zip_code" : true,
              "field_prog_col_univ_name" : true,
              "field_prog_type_of_school" : true,
              "field_prog_school_dist" : true,
              "field_prog_age_range" : true,
              "body:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_prog_city" : true,
              "field_prog_state" : true,
              "field_zip_code" : true,
              "field_prog_col_univ_name" : true,
              "field_prog_type_of_school" : true,
              "field_prog_school_dist" : true,
              "field_prog_age_range" : true,
              "body:value" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_prog_city" : true,
              "field_prog_state" : true,
              "field_zip_code" : true,
              "field_prog_col_univ_name" : true,
              "field_prog_type_of_school" : true,
              "field_prog_school_dist" : true,
              "field_prog_age_range" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_prog_city" : true,
              "field_prog_state" : true,
              "field_zip_code" : true,
              "field_prog_col_univ_name" : true,
              "field_prog_type_of_school" : true,
              "field_prog_school_dist" : true,
              "field_prog_age_range" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
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
