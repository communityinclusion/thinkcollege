<?php

/**
 * @file
 * restructure_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function restructure_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_a-z-list-of-terms:about/glossary.
  $menu_links['main-menu_a-z-list-of-terms:about/glossary'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/glossary',
    'router_path' => 'about/glossary',
    'link_title' => 'A-Z list of terms',
    'options' => array(
      'identifier' => 'main-menu_a-z-list-of-terms:about/glossary',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_academic-access:resources/innovation-exchange/academic-access.
  $menu_links['main-menu_academic-access:resources/innovation-exchange/academic-access'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/innovation-exchange/academic-access',
    'router_path' => 'resources/innovation-exchange/academic-access',
    'link_title' => 'Academic Access',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_academic-access:resources/innovation-exchange/academic-access',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -62,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:node/3503',
  );
  // Exported menu link: main-menu_campus-housing:resources/innovation-exchange/campus-housing.
  $menu_links['main-menu_campus-housing:resources/innovation-exchange/campus-housing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/innovation-exchange/campus-housing',
    'router_path' => 'resources/innovation-exchange/campus-housing',
    'link_title' => 'Campus Housing',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_campus-housing:resources/innovation-exchange/campus-housing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -60,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:node/3503',
  );
  // Exported menu link: main-menu_college-based-transition-services:resources/innovation-exchange/dual-enrollment.
  $menu_links['main-menu_college-based-transition-services:resources/innovation-exchange/dual-enrollment'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/innovation-exchange/dual-enrollment',
    'router_path' => 'resources/innovation-exchange/dual-enrollment',
    'link_title' => 'College-Based Transition Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_college-based-transition-services:resources/innovation-exchange/dual-enrollment',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -59,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:node/3503',
  );
  // Exported menu link: main-menu_comprehensive-transition-and-postsecondary-ctp-programs:resources/innovation-exchange/ctp-programs.
  $menu_links['main-menu_comprehensive-transition-and-postsecondary-ctp-programs:resources/innovation-exchange/ctp-programs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/innovation-exchange/ctp-programs',
    'router_path' => 'resources/innovation-exchange/ctp-programs',
    'link_title' => 'Comprehensive Transition and Postsecondary (CTP) Programs',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_comprehensive-transition-and-postsecondary-ctp-programs:resources/innovation-exchange/ctp-programs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -58,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:node/3503',
  );
  // Exported menu link: main-menu_employment:resources/innovation-exchange/employment.
  $menu_links['main-menu_employment:resources/innovation-exchange/employment'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/innovation-exchange/employment',
    'router_path' => 'resources/innovation-exchange/employment',
    'link_title' => 'Employment',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_employment:resources/innovation-exchange/employment',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -57,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:node/3503',
  );
  // Exported menu link: main-menu_family-resources:family-resources.
  $menu_links['main-menu_family-resources:family-resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'family-resources',
    'router_path' => 'family-resources',
    'link_title' => 'Family Resources',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => 'Resources for parents or family members of young adults with intellectual disabilities',
      ),
      'identifier' => 'main-menu_family-resources:family-resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -54,
    'customized' => 1,
    'parent_identifier' => 'main-menu_students--families:node/4875',
  );
  // Exported menu link: main-menu_glossary:about/glossary.
  $menu_links['main-menu_glossary:about/glossary'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/glossary',
    'router_path' => 'about/glossary',
    'link_title' => 'Glossary',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_glossary:about/glossary',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/35',
  );
  // Exported menu link: main-menu_home:home.
  $menu_links['main-menu_home:home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:home',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -57,
    'customized' => 1,
  );
  // Exported menu link: main-menu_national-coordinating-center:projects/ncc.
  $menu_links['main-menu_national-coordinating-center:projects/ncc'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects/ncc',
    'router_path' => 'projects/ncc',
    'link_title' => 'National Coordinating Center',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_national-coordinating-center:projects/ncc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -56,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:node/4876',
  );
  // Exported menu link: main-menu_paying-for-college:resources/innovation-exchange/paying-for-college.
  $menu_links['main-menu_paying-for-college:resources/innovation-exchange/paying-for-college'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/innovation-exchange/paying-for-college',
    'router_path' => 'resources/innovation-exchange/paying-for-college',
    'link_title' => 'Paying for College',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_paying-for-college:resources/innovation-exchange/paying-for-college',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -56,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:node/3503',
  );
  // Exported menu link: main-menu_peer-mentors:resources/innovation-exchange/peer-mentors.
  $menu_links['main-menu_peer-mentors:resources/innovation-exchange/peer-mentors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/innovation-exchange/peer-mentors',
    'router_path' => 'resources/innovation-exchange/peer-mentors',
    'link_title' => 'Peer Mentors',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_peer-mentors:resources/innovation-exchange/peer-mentors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -55,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:node/3503',
  );
  // Exported menu link: main-menu_preparing-for-college:resources/innovation-exchange/preparing-for-college.
  $menu_links['main-menu_preparing-for-college:resources/innovation-exchange/preparing-for-college'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/innovation-exchange/preparing-for-college',
    'router_path' => 'resources/innovation-exchange/preparing-for-college',
    'link_title' => 'Preparing for College',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_preparing-for-college:resources/innovation-exchange/preparing-for-college',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -54,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:node/3503',
  );
  // Exported menu link: main-menu_program-accreditation:resources/innovation-exchange/accreditation.
  $menu_links['main-menu_program-accreditation:resources/innovation-exchange/accreditation'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/innovation-exchange/accreditation',
    'router_path' => 'resources/innovation-exchange/accreditation',
    'link_title' => 'Program Accreditation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_program-accreditation:resources/innovation-exchange/accreditation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -53,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:node/3503',
  );
  // Exported menu link: main-menu_program-development:resources/innovation-exchange/program-development.
  $menu_links['main-menu_program-development:resources/innovation-exchange/program-development'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/innovation-exchange/program-development',
    'router_path' => 'resources/innovation-exchange/program-development',
    'link_title' => 'Program Development',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_program-development:resources/innovation-exchange/program-development',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -52,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:node/3503',
  );
  // Exported menu link: main-menu_search-resource-library:resource-search.
  $menu_links['main-menu_search-resource-library:resource-search'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resource-search',
    'router_path' => 'resource-search',
    'link_title' => 'Search Resource Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'sort' => 'field_resourc_publication_date',
        'order' => 'desc',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_search-resource-library:resource-search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:node/3785',
  );
  // Exported menu link: main-menu_student-credentials:resources/innovation-exchange/student-credentials.
  $menu_links['main-menu_student-credentials:resources/innovation-exchange/student-credentials'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/innovation-exchange/student-credentials',
    'router_path' => 'resources/innovation-exchange/student-credentials',
    'link_title' => 'Student Credentials',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_student-credentials:resources/innovation-exchange/student-credentials',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -51,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:node/3503',
  );
  // Exported menu link: main-menu_upcoming-events:tc-events-upcoming.
  $menu_links['main-menu_upcoming-events:tc-events-upcoming'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tc-events-upcoming',
    'router_path' => 'tc-events-upcoming',
    'link_title' => 'Upcoming Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_upcoming-events:tc-events-upcoming',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_vocational-rehabilitation:resources/innovation-exchange/vocational-rehabilitation.
  $menu_links['main-menu_vocational-rehabilitation:resources/innovation-exchange/vocational-rehabilitation'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/innovation-exchange/vocational-rehabilitation',
    'router_path' => 'resources/innovation-exchange/vocational-rehabilitation',
    'link_title' => 'Vocational Rehabilitation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_vocational-rehabilitation:resources/innovation-exchange/vocational-rehabilitation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:node/3503',
  );
  // Exported menu link: menu-temporary-main-menu_about:http://www.thinkcollege.net/about-us.
  $menu_links['menu-temporary-main-menu_about:http://www.thinkcollege.net/about-us'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'link_path' => 'http://www.thinkcollege.net/about-us',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-temporary-main-menu_about:http://www.thinkcollege.net/about-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-temporary-main-menu_college-search:college-search.
  $menu_links['menu-temporary-main-menu_college-search:college-search'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'link_path' => 'college-search',
    'router_path' => 'college-search',
    'link_title' => 'College Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-temporary-main-menu_college-search:college-search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-temporary-main-menu_contact:http://www.thinkcollege.net/contact.
  $menu_links['menu-temporary-main-menu_contact:http://www.thinkcollege.net/contact'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'link_path' => 'http://www.thinkcollege.net/contact',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-temporary-main-menu_contact:http://www.thinkcollege.net/contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-temporary-main-menu_home:http://www.thinkcollege.net.
  $menu_links['menu-temporary-main-menu_home:http://www.thinkcollege.net'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'link_path' => 'http://www.thinkcollege.net',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-temporary-main-menu_home:http://www.thinkcollege.net',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-temporary-main-menu_publications:http://www.thinkcollege.net/publications.
  $menu_links['menu-temporary-main-menu_publications:http://www.thinkcollege.net/publications'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'link_path' => 'http://www.thinkcollege.net/publications',
    'router_path' => '',
    'link_title' => 'Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-temporary-main-menu_publications:http://www.thinkcollege.net/publications',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-temporary-main-menu_topics:http://www.thinkcollege.net/topics.
  $menu_links['menu-temporary-main-menu_topics:http://www.thinkcollege.net/topics'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'link_path' => 'http://www.thinkcollege.net/topics',
    'router_path' => '',
    'link_title' => 'Topics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-temporary-main-menu_topics:http://www.thinkcollege.net/topics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-temporary-main-menu_training:http://www.thinkcollege.net/training.
  $menu_links['menu-temporary-main-menu_training:http://www.thinkcollege.net/training'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'link_path' => 'http://www.thinkcollege.net/training',
    'router_path' => '',
    'link_title' => 'Training',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-temporary-main-menu_training:http://www.thinkcollege.net/training',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A-Z list of terms');
  t('About');
  t('Academic Access');
  t('Campus Housing');
  t('College Search');
  t('College-Based Transition Services');
  t('Comprehensive Transition and Postsecondary (CTP) Programs');
  t('Contact');
  t('Employment');
  t('Family Resources');
  t('Glossary');
  t('Home');
  t('National Coordinating Center');
  t('Paying for College');
  t('Peer Mentors');
  t('Preparing for College');
  t('Program Accreditation');
  t('Program Development');
  t('Publications');
  t('Search Resource Library');
  t('Student Credentials');
  t('Topics');
  t('Training');
  t('Upcoming Events');
  t('Vocational Rehabilitation');

  return $menu_links;
}
