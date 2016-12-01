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

  // Exported menu link: menu-program-record-scrollspy_academics::#academic.
  $menu_links['menu-program-record-scrollspy_academics::#academic'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#academic',
    'router_path' => '',
    'link_title' => 'Academics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_academics::#academic',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_acceptance-rates::#acceptance-rates.
  $menu_links['menu-program-record-scrollspy_acceptance-rates::#acceptance-rates'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#acceptance-rates',
    'router_path' => '',
    'link_title' => 'Acceptance rates',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_acceptance-rates::#acceptance-rates',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_affiliates::#affiliates.
  $menu_links['menu-program-record-scrollspy_affiliates::#affiliates'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#affiliates',
    'router_path' => '',
    'link_title' => 'Affiliates',
    'options' => array(
      'menu_token_link_path' => '[current-page:url]#affiliate-information',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'http://pantheon-think-college.dd:8083/admin/structure/menu/item/2092/edit#affiliate-information',
      'attributes' => array(
        'title' => '',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_affiliates::#affiliates',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_cost::#cost.
  $menu_links['menu-program-record-scrollspy_cost::#cost'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#cost',
    'router_path' => '',
    'link_title' => 'Cost',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_cost::#cost',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
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
    'weight' => -42,
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
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_general::#general.
  $menu_links['menu-program-record-scrollspy_general::#general'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#general',
    'router_path' => '',
    'link_title' => 'General',
    'options' => array(
      'menu_token_link_path' => '[current-page:url]#program-information',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'http://pantheon-think-college.dd:8083/admin/structure/menu/item/2091/edit#program-information',
      'attributes' => array(
        'title' => '',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_general::#general',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
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
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_requirements::#requirements.
  $menu_links['menu-program-record-scrollspy_requirements::#requirements'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#requirements',
    'router_path' => '',
    'link_title' => 'Requirements',
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
      'identifier' => 'menu-program-record-scrollspy_requirements::#requirements',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
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
  t('Acceptance rates');
  t('Affiliates');
  t('Cost');
  t('Employment');
  t('Extracurricular');
  t('General');
  t('Housing');
  t('Requirements');
  t('Top three program priorities');

  return $menu_links;
}
