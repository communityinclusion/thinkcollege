<?php
/**
 * @file
 * program_record.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function program_record_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-program-record-scrollspy_academics::#academics.
  $menu_links['menu-program-record-scrollspy_academics::#academics'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#academics',
    'router_path' => '',
    'link_title' => 'Academics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_academics::#academics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_acceptance-retention-and-completion-rates::#acceptance-retention-completion.
  $menu_links['menu-program-record-scrollspy_acceptance-retention-and-completion-rates::#acceptance-retention-completion'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#acceptance-retention-completion',
    'router_path' => '',
    'link_title' => 'Acceptance, retention, and completion rates',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_acceptance-retention-and-completion-rates::#acceptance-retention-completion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_affiliate-information::#affiliate-information.
  $menu_links['menu-program-record-scrollspy_affiliate-information::#affiliate-information'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#affiliate-information',
    'router_path' => '',
    'link_title' => 'Affiliate information',
    'options' => array(
      'menu_token_link_path' => '[current-page:url]#affiliate-information',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'http://pantheon-think-college.dd:8083/admin/structure/menu/item/2092/edit#affiliate-information',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_affiliate-information::#affiliate-information',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_costs-for-current-academic-year::#costs-current-year.
  $menu_links['menu-program-record-scrollspy_costs-for-current-academic-year::#costs-current-year'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#costs-current-year',
    'router_path' => '',
    'link_title' => 'Costs for Current Academic Year',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_costs-for-current-academic-year::#costs-current-year',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_employment::#employment.
  $menu_links['menu-program-record-scrollspy_employment::#employment'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#employment',
    'router_path' => '',
    'link_title' => 'Employment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_employment::#employment',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_extracurricular::#extracurricular.
  $menu_links['menu-program-record-scrollspy_extracurricular::#extracurricular'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#extracurricular',
    'router_path' => '',
    'link_title' => 'Extracurricular',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_extracurricular::#extracurricular',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_housing::#housing.
  $menu_links['menu-program-record-scrollspy_housing::#housing'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#housing',
    'router_path' => '',
    'link_title' => 'Housing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_housing::#housing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_program-information::#program-information.
  $menu_links['menu-program-record-scrollspy_program-information::#program-information'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#program-information',
    'router_path' => '',
    'link_title' => 'Program information',
    'options' => array(
      'menu_token_link_path' => '[current-page:url]#program-information',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'http://pantheon-think-college.dd:8083/admin/structure/menu/item/2091/edit#program-information',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_program-information::#program-information',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_requirements-for-attendance::#requirements-for-attendance.
  $menu_links['menu-program-record-scrollspy_requirements-for-attendance::#requirements-for-attendance'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#requirements-for-attendance',
    'router_path' => '',
    'link_title' => 'Requirements for attendance',
    'options' => array(
      'menu_token_link_path' => '[current-page:url]#requirements-for-attendance',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'http://pantheon-think-college.dd:8083/admin/structure/menu/item/2093/edit#requirements-for-attendance',
      'attributes' => array(
        'title' => '',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_requirements-for-attendance::#requirements-for-attendance',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_top-three-program-priorities::#top-three-priorities.
  $menu_links['menu-program-record-scrollspy_top-three-program-priorities::#top-three-priorities'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#top-three-priorities',
    'router_path' => '',
    'link_title' => 'Top three program priorities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_top-three-program-priorities::#top-three-priorities',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Academics');
  t('Acceptance, retention, and completion rates');
  t('Affiliate information');
  t('Costs for Current Academic Year');
  t('Employment');
  t('Extracurricular');
  t('Housing');
  t('Program information');
  t('Requirements for attendance');
  t('Top three program priorities');

  return $menu_links;
}
