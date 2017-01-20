<?php
/**
 * @file
 * tc_in_db_search_server.features.inc
 */

/**
 * Implements hook_default_search_api_server().
 */
function tc_in_db_search_server_default_search_api_server() {
  $items = array();
  $items['db_server'] = entity_import('search_api_server', '{
    "name" : "DB Server",
    "machine_name" : "db_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "autocomplete" : { "suggest_suffix" : 1, "suggest_words" : 1 },
      "indexes" : { "in_db_program_record_index" : {
          "nid" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "3.0"
          },
          "author" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_site_section" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_site_section",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_categories" : {
            "table" : "search_api_db_in_db_program_record_index_field_categories",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_resourc_topics" : {
            "table" : "search_api_db_in_db_program_record_index_field_resourc_topics",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_tags" : {
            "table" : "search_api_db_in_db_program_record_index_field_tags",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_prog_street_address" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_address_line_2" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_city" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_state" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_state",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_zip_code" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_program_email" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_progprogram_contact_person" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_program_contact_email" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_col_univ_name" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_type_of_school" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_type_of_school",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_school_dist" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_school_dist_contact" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_schl_dist_email" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_hs_coll" : {
            "table" : "search_api_db_in_db_program_record_index_field_prog_hs_coll",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_prog_ctp_y_n" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_ctp_y_n",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_pay_methods" : {
            "table" : "search_api_db_in_db_program_record_index_field_prog_pay_method",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_prog_course_types" : {
            "table" : "search_api_db_in_db_program_record_index_field_prog_course_typ",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_prog_other_career_dev" : {
            "table" : "search_api_db_in_db_program_record_index_field_prog_other_care",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_prog_public_or_privat" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_public_or_privat",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_is_was_tpsid" : {
            "table" : "search_api_db_in_db_program_record_index_field_prog_is_was_tps",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_prog_when_will_progr_start" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_when_will_progr_start",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_summer_prog_y_n" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_summer_prog_y_n",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_admit_deadline" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_admiss_requirements" : {
            "table" : "search_api_db_in_db_program_record_index_field_prog_admiss_req",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_prog_age_range" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_explain_other" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_which_disabilities" : {
            "table" : "search_api_db_in_db_program_record_index_field_prog_which_disa",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_prog_which_dis_specify" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_how_many_students_total_at" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_how_many_students_total_at",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_prog_num_applied" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_num_applied",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_prog_15_16_accepted" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_15_16_accepted",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_prog_new_studt_f14" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_new_studt_f14",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_prog_studt_retn_f15" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_studt_retn_f15",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_prog_length_years" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_length_years",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_other_costs" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_other_costs",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_tuition" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_tuition",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field__prog_room_and_board" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field__prog_room_and_board",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_prog_specific_fees" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_specific_fees",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_prog_other_costs_amount" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_other_costs_amount",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_prog_15_16_admit_rate" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_15_16_admit_rate",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_prog_special_courses" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_special_courses",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_credential" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_credential",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_name_of_credential_degree_" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_please_select_any_all_of_t" : {
            "table" : "search_api_db_in_db_program_record_index_field_please_select_a",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_prog_perc_w_compet_employ" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_perc_w_compet_employ",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_prog_perc_employed_af_grad" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_perc_employed_af_grad",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_prog_housing_y_n" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_housing_y_n",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_studt_housing_options" : {
            "table" : "search_api_db_in_db_program_record_index_field_prog_studt_hous",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_prog_student_orgs_y_n" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_student_orgs_y_n",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_overall_time_dist" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_overall_time_dist",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_perc_acad_time" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_perc_acad_time",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_contact_phone" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_serves_id" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_serves_id",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_accredited" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_accredited",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_know_how_many" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_know_how_many",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_prog_cost_y_n" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_cost_y_n",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_type_of_school_display" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_cost_of_the_program" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_other_costs_display" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_retention_rate" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "field_prog_retention_rate",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_prog_room_and_board_displa" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_prog_students_pay_display" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_requirements_display" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_summer_program_display" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "event_calendar_status" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "event_calendar_status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_event_calendar_location" : {
            "table" : "search_api_db_in_db_program_record_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "search_api_access_node" : {
            "table" : "search_api_db_in_db_program_record_index_search_api_access_nod",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "tc_housing" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "tc_housing",
            "type" : "string",
            "boost" : "1.0"
          },
          "tc_financial_aid" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "tc_financial_aid",
            "type" : "string",
            "boost" : "1.0"
          },
          "tc_tpsid" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "tc_tpsid",
            "type" : "string",
            "boost" : "1.0"
          },
          "tc_dual_enroll" : {
            "table" : "search_api_db_in_db_program_record_index",
            "column" : "tc_dual_enroll",
            "type" : "string",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
