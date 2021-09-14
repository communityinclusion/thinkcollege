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
  // Exported menu link: main-menu_about:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903.
  $menu_links['main-menu_about:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
    'router_path' => 'uuid',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'uuid' => '4fbe0e03-d4ee-4afc-a381-a38c476d3903',
    'vuuid' => '22a1d0e9-40b5-48fb-bb20-fe3ca90fe32c',
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
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
  );
  // Exported menu link: main-menu_affinity-groups:uuid/node/c5bd3754-81a9-44ad-9e99-0dd5e5500618.
  $menu_links['main-menu_affinity-groups:uuid/node/c5bd3754-81a9-44ad-9e99-0dd5e5500618'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/c5bd3754-81a9-44ad-9e99-0dd5e5500618',
    'router_path' => 'uuid',
    'link_title' => 'Affinity Groups',
    'options' => array(
      'attributes' => array(
        'title' => 'Affinity groups and how to join',
      ),
      'identifier' => 'main-menu_affinity-groups:uuid/node/c5bd3754-81a9-44ad-9e99-0dd5e5500618',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -56,
    'customized' => 1,
    'uuid' => 'c5bd3754-81a9-44ad-9e99-0dd5e5500618',
    'vuuid' => '908f521a-e737-4355-be83-407bfb6dd527',
    'parent_identifier' => 'main-menu_ta--training:uuid/node/6fe8a511-bfa9-48e0-8a87-9e3b90a5a779',
  );
  // Exported menu link: main-menu_blog:blog.
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => 'Inside Think College is a blog created by staff at Think College.',
      ),
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
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
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
  );
  // Exported menu link: main-menu_college-based-transition-services-affinity-group:technical-assistance/affinity-groups/college-based-transition-services.
  $menu_links['main-menu_college-based-transition-services-affinity-group:technical-assistance/affinity-groups/college-based-transition-services'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'technical-assistance/affinity-groups/college-based-transition-services',
    'router_path' => 'technical-assistance/affinity-groups/college-based-transition-services',
    'link_title' => 'College-based Transition Services Affinity Group',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_college-based-transition-services-affinity-group:technical-assistance/affinity-groups/college-based-transition-services',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_affinity-groups:uuid/node/c5bd3754-81a9-44ad-9e99-0dd5e5500618',
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
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
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
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
  );
  // Exported menu link: main-menu_contact:uuid/node/1c45f36c-6040-4b5d-8cc7-a47ff7896bba.
  $menu_links['main-menu_contact:uuid/node/1c45f36c-6040-4b5d-8cc7-a47ff7896bba'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/1c45f36c-6040-4b5d-8cc7-a47ff7896bba',
    'router_path' => 'uuid',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Get in touch with our team.',
      ),
      'identifier' => 'main-menu_contact:uuid/node/1c45f36c-6040-4b5d-8cc7-a47ff7896bba',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'uuid' => '1c45f36c-6040-4b5d-8cc7-a47ff7896bba',
    'vuuid' => '1c8de6a1-baa5-4bed-b4d7-2d1d27dc30bd',
    'parent_identifier' => 'main-menu_about:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
  );
  // Exported menu link: main-menu_data-collection:tpsid/data-collection.
  $menu_links['main-menu_data-collection:tpsid/data-collection'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tpsid/data-collection',
    'router_path' => 'tpsid/data-collection',
    'link_title' => 'Data Collection',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(
          7 => 7,
          3 => 3,
          14 => 14,
        ),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_data-collection:tpsid/data-collection',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tpsid:uuid/node/4c78115c-18d0-47b3-9bc1-65188b14d11f',
  );
  // Exported menu link: main-menu_donate:uuid/node/c02199b1-eed4-47db-81a5-1d0e8d139207.
  $menu_links['main-menu_donate:uuid/node/c02199b1-eed4-47db-81a5-1d0e8d139207'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/c02199b1-eed4-47db-81a5-1d0e8d139207',
    'router_path' => 'uuid',
    'link_title' => 'Donate',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_donate:uuid/node/c02199b1-eed4-47db-81a5-1d0e8d139207',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'uuid' => 'c02199b1-eed4-47db-81a5-1d0e8d139207',
    'vuuid' => '942ff36d-bfd7-4205-b2b7-3d916c32f325',
    'parent_identifier' => 'main-menu_about:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
  );
  // Exported menu link: main-menu_emerging-advocates-group:technical-assistance/affinity-groups/advocates.
  $menu_links['main-menu_emerging-advocates-group:technical-assistance/affinity-groups/advocates'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'technical-assistance/affinity-groups/advocates',
    'router_path' => 'technical-assistance/affinity-groups/advocates',
    'link_title' => 'Emerging Advocates Group',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_emerging-advocates-group:technical-assistance/affinity-groups/advocates',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_affinity-groups:uuid/node/c5bd3754-81a9-44ad-9e99-0dd5e5500618',
  );
  // Exported menu link: main-menu_employment-opportunities:uuid/node/4990f832-cc20-4d8a-b569-06feaa33f266.
  $menu_links['main-menu_employment-opportunities:uuid/node/4990f832-cc20-4d8a-b569-06feaa33f266'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/4990f832-cc20-4d8a-b569-06feaa33f266',
    'router_path' => 'uuid',
    'link_title' => 'Employment Opportunities',
    'options' => array(
      'attributes' => array(
        'title' => 'Jobs related to inclusive higher education',
      ),
      'identifier' => 'main-menu_employment-opportunities:uuid/node/4990f832-cc20-4d8a-b569-06feaa33f266',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'uuid' => '4990f832-cc20-4d8a-b569-06feaa33f266',
    'vuuid' => 'dbe30237-868f-4181-a114-b35c5b7ce797',
    'parent_identifier' => 'main-menu_resources:uuid/node/66bee5c5-ae58-4ead-87f2-7213745ddd45',
  );
  // Exported menu link: main-menu_employment-services-affinity-group:technical-assistance/affinity-groups/employment-services.
  $menu_links['main-menu_employment-services-affinity-group:technical-assistance/affinity-groups/employment-services'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'technical-assistance/affinity-groups/employment-services',
    'router_path' => 'technical-assistance/affinity-groups/employment-services',
    'link_title' => 'Employment Services Affinity Group',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_employment-services-affinity-group:technical-assistance/affinity-groups/employment-services',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_affinity-groups:uuid/node/c5bd3754-81a9-44ad-9e99-0dd5e5500618',
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
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
  );
  // Exported menu link: main-menu_events:events.
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_events:events',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -55,
    'customized' => 1,
    'parent_identifier' => 'main-menu_ta--training:uuid/node/6fe8a511-bfa9-48e0-8a87-9e3b90a5a779',
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
    'parent_identifier' => 'main-menu_students--families:uuid/node/da98abd4-c1ae-46d9-a71e-ad1b35768666',
  );
  // Exported menu link: main-menu_follow-up-data:uuid/node/ed0f1a52-e49e-4165-900b-1747087a3cea.
  $menu_links['main-menu_follow-up-data:uuid/node/ed0f1a52-e49e-4165-900b-1747087a3cea'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/ed0f1a52-e49e-4165-900b-1747087a3cea',
    'router_path' => 'uuid',
    'link_title' => 'Follow-Up Data',
    'options' => array(
      'attributes' => array(
        'title' => 'Why follow-up data are essential',
      ),
      'roles_for_menu' => array(
        'show' => array(
          7 => 7,
          3 => 3,
          14 => 14,
        ),
        'hide' => array(),
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_follow-up-data:uuid/node/ed0f1a52-e49e-4165-900b-1747087a3cea',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'uuid' => 'ed0f1a52-e49e-4165-900b-1747087a3cea',
    'vuuid' => '17e68296-8f3e-4b1b-8699-218ea1736a35',
    'parent_identifier' => 'main-menu_tpsid-login:uuid/node/53f99e19-ae6f-4889-b4d3-209aa510a34d',
  );
  // Exported menu link: main-menu_future-quest-island:uuid/node/dceb1e33-1e8c-4c21-ae78-1a0d6350791f.
  $menu_links['main-menu_future-quest-island:uuid/node/dceb1e33-1e8c-4c21-ae78-1a0d6350791f'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/dceb1e33-1e8c-4c21-ae78-1a0d6350791f',
    'router_path' => 'uuid',
    'link_title' => 'Future Quest Island',
    'options' => array(
      'attributes' => array(),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_future-quest-island:uuid/node/dceb1e33-1e8c-4c21-ae78-1a0d6350791f',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'uuid' => 'dceb1e33-1e8c-4c21-ae78-1a0d6350791f',
    'vuuid' => '1f17711b-86ff-49d4-9600-4f88a3f0ab97',
    'parent_identifier' => 'main-menu_what-is-think-college:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
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
    'parent_identifier' => 'main-menu_about:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
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
  // Exported menu link: main-menu_information-for-tpsid-grantees:uuid/node/4c78115c-18d0-47b3-9bc1-65188b14d11f.
  $menu_links['main-menu_information-for-tpsid-grantees:uuid/node/4c78115c-18d0-47b3-9bc1-65188b14d11f'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/4c78115c-18d0-47b3-9bc1-65188b14d11f',
    'router_path' => 'uuid',
    'link_title' => 'Information for TPSID Grantees',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(
          7 => 7,
          3 => 3,
          14 => 14,
        ),
        'hide' => array(),
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_information-for-tpsid-grantees:uuid/node/4c78115c-18d0-47b3-9bc1-65188b14d11f',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'uuid' => '4c78115c-18d0-47b3-9bc1-65188b14d11f',
    'vuuid' => 'c1a33324-1d8f-4f25-9990-4ec86d932f2a',
    'parent_identifier' => 'main-menu_tpsid:uuid/node/4c78115c-18d0-47b3-9bc1-65188b14d11f',
  );
  // Exported menu link: main-menu_join-tc-conversations-tpsid-channel:uuid/node/926bc52e-f2e7-4652-81b3-1db02b405aa4.
  $menu_links['main-menu_join-tc-conversations-tpsid-channel:uuid/node/926bc52e-f2e7-4652-81b3-1db02b405aa4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/926bc52e-f2e7-4652-81b3-1db02b405aa4',
    'router_path' => 'uuid',
    'link_title' => 'Join TC Conversations: TPSID Channel',
    'options' => array(
      'attributes' => array(
        'title' => 'TPSID-only conversations',
      ),
      'alter' => TRUE,
      'roles_for_menu' => array(
        'show' => array(
          7 => 7,
          3 => 3,
          14 => 14,
        ),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_join-tc-conversations-tpsid-channel:uuid/node/926bc52e-f2e7-4652-81b3-1db02b405aa4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'uuid' => '926bc52e-f2e7-4652-81b3-1db02b405aa4',
    'vuuid' => '89a6ae40-a1d9-4c0d-b210-d0b30ebba6f1',
    'parent_identifier' => 'main-menu_what-is-a-tpsid:uuid/node/1de84295-c4e2-4499-8203-843bbfe0af93',
  );
  // Exported menu link: main-menu_join-the-conversation:uuid/node/f8d31097-d8a6-4538-9719-8f6c766d3997.
  $menu_links['main-menu_join-the-conversation:uuid/node/f8d31097-d8a6-4538-9719-8f6c766d3997'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/f8d31097-d8a6-4538-9719-8f6c766d3997',
    'router_path' => 'uuid',
    'link_title' => 'Join the Conversation',
    'options' => array(
      'attributes' => array(
        'title' => 'Moderated online discussion forums',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_join-the-conversation:uuid/node/f8d31097-d8a6-4538-9719-8f6c766d3997',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'uuid' => 'f8d31097-d8a6-4538-9719-8f6c766d3997',
    'vuuid' => 'fb9c7244-554a-4923-b6da-62de2f206426',
  );
  // Exported menu link: main-menu_key-resources-for-tpsids:tpsid/key-resources-for-tpsids.
  $menu_links['main-menu_key-resources-for-tpsids:tpsid/key-resources-for-tpsids'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tpsid/key-resources-for-tpsids',
    'router_path' => 'tpsid/key-resources-for-tpsids',
    'link_title' => 'Key Resources for TPSIDs',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(
          7 => 7,
          3 => 3,
          14 => 14,
        ),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_key-resources-for-tpsids:tpsid/key-resources-for-tpsids',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tpsid:uuid/node/4c78115c-18d0-47b3-9bc1-65188b14d11f',
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
    'parent_identifier' => 'main-menu_projects:uuid/node/ded003c3-bc3d-4f1d-9ac9-671a39abc83e',
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
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
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
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
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
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
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
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
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
    'weight' => -39,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
  );
  // Exported menu link: main-menu_project-director-meetings:uuid/node/4cdc5bed-0507-4b41-ba2a-1c4a8fd058ff.
  $menu_links['main-menu_project-director-meetings:uuid/node/4cdc5bed-0507-4b41-ba2a-1c4a8fd058ff'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/4cdc5bed-0507-4b41-ba2a-1c4a8fd058ff',
    'router_path' => 'uuid',
    'link_title' => 'Project Director Meetings',
    'options' => array(
      'attributes' => array(
        'title' => 'Details on PD meetings',
      ),
      'alter' => TRUE,
      'roles_for_menu' => array(
        'show' => array(
          7 => 7,
          3 => 3,
          14 => 14,
        ),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_project-director-meetings:uuid/node/4cdc5bed-0507-4b41-ba2a-1c4a8fd058ff',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'uuid' => '4cdc5bed-0507-4b41-ba2a-1c4a8fd058ff',
    'vuuid' => 'a0632d2b-7da5-4506-94dd-448367564eeb',
    'parent_identifier' => 'main-menu_tpsid-login:uuid/node/53f99e19-ae6f-4889-b4d3-209aa510a34d',
  );
  // Exported menu link: main-menu_projects:uuid/node/ded003c3-bc3d-4f1d-9ac9-671a39abc83e.
  $menu_links['main-menu_projects:uuid/node/ded003c3-bc3d-4f1d-9ac9-671a39abc83e'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/ded003c3-bc3d-4f1d-9ac9-671a39abc83e',
    'router_path' => 'uuid',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_projects:uuid/node/ded003c3-bc3d-4f1d-9ac9-671a39abc83e',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -54,
    'customized' => 1,
    'uuid' => 'ded003c3-bc3d-4f1d-9ac9-671a39abc83e',
    'vuuid' => '6e06c14e-fb06-46a1-bdac-64c23a27df2d',
  );
  // Exported menu link: main-menu_public-policy-affinity-group:technical-assistance/affinity-groups/public-policy.
  $menu_links['main-menu_public-policy-affinity-group:technical-assistance/affinity-groups/public-policy'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'technical-assistance/affinity-groups/public-policy',
    'router_path' => 'technical-assistance/affinity-groups/public-policy',
    'link_title' => 'Public Policy Affinity Group',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_public-policy-affinity-group:technical-assistance/affinity-groups/public-policy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_affinity-groups:uuid/node/c5bd3754-81a9-44ad-9e99-0dd5e5500618',
  );
  // Exported menu link: main-menu_rehabilitation-and-research-training-center-on-transitioning-youth-and-vocational-rehabilitation:uuid/node/816718a2-72d3-4ece-b782-163249c03656.
  $menu_links['main-menu_rehabilitation-and-research-training-center-on-transitioning-youth-and-vocational-rehabilitation:uuid/node/816718a2-72d3-4ece-b782-163249c03656'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/816718a2-72d3-4ece-b782-163249c03656',
    'router_path' => 'uuid',
    'link_title' => 'Rehabilitation and Research Training Center on Transitioning Youth and Vocational Rehabilitation',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_rehabilitation-and-research-training-center-on-transitioning-youth-and-vocational-rehabilitation:uuid/node/816718a2-72d3-4ece-b782-163249c03656',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'uuid' => '816718a2-72d3-4ece-b782-163249c03656',
    'vuuid' => '33c24988-4c18-49a9-838a-059607b13e69',
    'parent_identifier' => 'main-menu_what-is-think-college:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
  );
  // Exported menu link: main-menu_request-for-technical-assistance-and-training:uuid/node/c4d6f291-c6ec-4599-8c3c-2743de53861c.
  $menu_links['main-menu_request-for-technical-assistance-and-training:uuid/node/c4d6f291-c6ec-4599-8c3c-2743de53861c'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/c4d6f291-c6ec-4599-8c3c-2743de53861c',
    'router_path' => 'uuid',
    'link_title' => 'Request for Technical Assistance and Training',
    'options' => array(
      'identifier' => 'main-menu_request-for-technical-assistance-and-training:uuid/node/c4d6f291-c6ec-4599-8c3c-2743de53861c',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'uuid' => 'c4d6f291-c6ec-4599-8c3c-2743de53861c',
    'vuuid' => 'adf09411-39d0-45b6-9097-4280c0698f52',
  );
  // Exported menu link: main-menu_research-affinity-group:technical-assistance/affinity-groups/research.
  $menu_links['main-menu_research-affinity-group:technical-assistance/affinity-groups/research'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'technical-assistance/affinity-groups/research',
    'router_path' => 'technical-assistance/affinity-groups/research',
    'link_title' => 'Research Affinity Group',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_research-affinity-group:technical-assistance/affinity-groups/research',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_affinity-groups:uuid/node/c5bd3754-81a9-44ad-9e99-0dd5e5500618',
  );
  // Exported menu link: main-menu_research-in-inclusive-pse:uuid/node/6e53e74e-8485-4815-a42f-982a252609a7.
  $menu_links['main-menu_research-in-inclusive-pse:uuid/node/6e53e74e-8485-4815-a42f-982a252609a7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/6e53e74e-8485-4815-a42f-982a252609a7',
    'router_path' => 'uuid',
    'link_title' => 'Research in Inclusive PSE',
    'options' => array(
      'identifier' => 'main-menu_research-in-inclusive-pse:uuid/node/6e53e74e-8485-4815-a42f-982a252609a7',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -56,
    'customized' => 1,
    'uuid' => '6e53e74e-8485-4815-a42f-982a252609a7',
    'vuuid' => 'f31525d7-813d-469f-9ed4-3d4e7371e91d',
  );
  // Exported menu link: main-menu_research-summits:uuid/node/730d35fd-f5ab-40de-b53f-77eb85d94159.
  $menu_links['main-menu_research-summits:uuid/node/730d35fd-f5ab-40de-b53f-77eb85d94159'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/730d35fd-f5ab-40de-b53f-77eb85d94159',
    'router_path' => 'uuid',
    'link_title' => 'Research Summits',
    'options' => array(
      'attributes' => array(
        'title' => 'Upcoming and past research summits',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_research-summits:uuid/node/730d35fd-f5ab-40de-b53f-77eb85d94159',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'uuid' => '730d35fd-f5ab-40de-b53f-77eb85d94159',
    'vuuid' => 'b289d23c-f78d-4eeb-81f4-45dfbde9dd7b',
    'parent_identifier' => 'main-menu_training:uuid/node/9de11286-ee3d-4eef-90a9-4649f5b835a3',
  );
  // Exported menu link: main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a.
  $menu_links['main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
    'router_path' => 'uuid',
    'link_title' => 'Resources by Topic',
    'options' => array(
      'attributes' => array(
        'title' => 'Curated resources on postsecondary education options',
      ),
      'identifier' => 'main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'uuid' => 'd525cef7-74c3-4be9-b5e3-cbba486fb75a',
    'vuuid' => '0f5e1c03-b94b-4bbb-89fb-0e6cfe2f7bc7',
    'parent_identifier' => 'main-menu_resources:uuid/node/66bee5c5-ae58-4ead-87f2-7213745ddd45',
  );
  // Exported menu link: main-menu_resources:uuid/node/4ffe08c6-e59d-4be9-9cfa-665c14d919c9.
  $menu_links['main-menu_resources:uuid/node/4ffe08c6-e59d-4be9-9cfa-665c14d919c9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/4ffe08c6-e59d-4be9-9cfa-665c14d919c9',
    'router_path' => 'uuid',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => 'Resources for TPSID grantees',
      ),
      'alter' => TRUE,
      'roles_for_menu' => array(
        'show' => array(
          7 => 7,
          3 => 3,
          14 => 14,
        ),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_resources:uuid/node/4ffe08c6-e59d-4be9-9cfa-665c14d919c9',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'uuid' => '4ffe08c6-e59d-4be9-9cfa-665c14d919c9',
    'vuuid' => '6d809213-3eba-4f4d-b1c5-c403777ccb8f',
    'parent_identifier' => 'main-menu_tpsid-login:uuid/node/53f99e19-ae6f-4889-b4d3-209aa510a34d',
  );
  // Exported menu link: main-menu_resources:uuid/node/66bee5c5-ae58-4ead-87f2-7213745ddd45.
  $menu_links['main-menu_resources:uuid/node/66bee5c5-ae58-4ead-87f2-7213745ddd45'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/66bee5c5-ae58-4ead-87f2-7213745ddd45',
    'router_path' => 'uuid',
    'link_title' => 'Resources',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_resources:uuid/node/66bee5c5-ae58-4ead-87f2-7213745ddd45',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'uuid' => '66bee5c5-ae58-4ead-87f2-7213745ddd45',
    'vuuid' => 'd68d1890-84ba-446e-a1ad-5020df671909',
  );
  // Exported menu link: main-menu_rethinking-college-the-film:uuid/node/5eb7d8bc-f2c2-48ae-8297-c1ad9e0c5ebe.
  $menu_links['main-menu_rethinking-college-the-film:uuid/node/5eb7d8bc-f2c2-48ae-8297-c1ad9e0c5ebe'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/5eb7d8bc-f2c2-48ae-8297-c1ad9e0c5ebe',
    'router_path' => 'uuid',
    'link_title' => 'Rethinking College: The Film',
    'options' => array(
      'attributes' => array(
        'title' => 'Our documentary about college students with intellectual disability',
      ),
      'identifier' => 'main-menu_rethinking-college-the-film:uuid/node/5eb7d8bc-f2c2-48ae-8297-c1ad9e0c5ebe',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'uuid' => '5eb7d8bc-f2c2-48ae-8297-c1ad9e0c5ebe',
    'vuuid' => 'da1af13c-4f52-48d3-aeb8-0f8bf43c76eb',
    'parent_identifier' => 'main-menu_resources:uuid/node/66bee5c5-ae58-4ead-87f2-7213745ddd45',
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
    'parent_identifier' => 'main-menu_resources:uuid/node/66bee5c5-ae58-4ead-87f2-7213745ddd45',
  );
  // Exported menu link: main-menu_statewide-alliances-affinity-group:technical-assistance/affinity-groups/statewide-alliances.
  $menu_links['main-menu_statewide-alliances-affinity-group:technical-assistance/affinity-groups/statewide-alliances'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'technical-assistance/affinity-groups/statewide-alliances',
    'router_path' => 'technical-assistance/affinity-groups/statewide-alliances',
    'link_title' => 'Statewide Alliances Affinity Group',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_statewide-alliances-affinity-group:technical-assistance/affinity-groups/statewide-alliances',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_affinity-groups:uuid/node/c5bd3754-81a9-44ad-9e99-0dd5e5500618',
  );
  // Exported menu link: main-menu_stay-in-the-think-college-network:uuid/node/6992ef6f-08f2-4fa1-bd40-e73419c3dae0.
  $menu_links['main-menu_stay-in-the-think-college-network:uuid/node/6992ef6f-08f2-4fa1-bd40-e73419c3dae0'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/6992ef6f-08f2-4fa1-bd40-e73419c3dae0',
    'router_path' => 'uuid',
    'link_title' => 'Stay in the Think College Network',
    'options' => array(
      'attributes' => array(
        'title' => 'Free access to the Think College Data Network',
      ),
      'alter' => TRUE,
      'roles_for_menu' => array(
        'show' => array(
          7 => 7,
          3 => 3,
          14 => 14,
        ),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_stay-in-the-think-college-network:uuid/node/6992ef6f-08f2-4fa1-bd40-e73419c3dae0',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'uuid' => '6992ef6f-08f2-4fa1-bd40-e73419c3dae0',
    'vuuid' => '3ccf4b89-2228-4cbd-9d93-decca85ac57f',
    'parent_identifier' => 'main-menu_what-is-a-tpsid:uuid/node/1de84295-c4e2-4499-8203-843bbfe0af93',
  );
  // Exported menu link: main-menu_student-credentials-affinity-group:technical-assistance/affinity-groups/ncc-credentials.
  $menu_links['main-menu_student-credentials-affinity-group:technical-assistance/affinity-groups/ncc-credentials'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'technical-assistance/affinity-groups/ncc-credentials',
    'router_path' => 'technical-assistance/affinity-groups/ncc-credentials',
    'link_title' => 'Student Credentials Affinity Group',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_student-credentials-affinity-group:technical-assistance/affinity-groups/ncc-credentials',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_affinity-groups:uuid/node/c5bd3754-81a9-44ad-9e99-0dd5e5500618',
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
    'weight' => -38,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
  );
  // Exported menu link: main-menu_tc-learning-channel:uuid/node/a2ba0aa5-4568-4513-b135-c0169d527177.
  $menu_links['main-menu_tc-learning-channel:uuid/node/a2ba0aa5-4568-4513-b135-c0169d527177'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/a2ba0aa5-4568-4513-b135-c0169d527177',
    'router_path' => 'uuid',
    'link_title' => 'TC Learning Channel',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_tc-learning-channel:uuid/node/a2ba0aa5-4568-4513-b135-c0169d527177',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -54,
    'customized' => 1,
    'uuid' => 'a2ba0aa5-4568-4513-b135-c0169d527177',
    'vuuid' => '7d289d5c-da40-4883-97b6-596f9a665b72',
    'parent_identifier' => 'main-menu_ta--training:uuid/node/6fe8a511-bfa9-48e0-8a87-9e3b90a5a779',
  );
  // Exported menu link: main-menu_technical-assistance-providers:uuid/node/a69fce22-8a0f-4ba9-8548-aef9a223348b.
  $menu_links['main-menu_technical-assistance-providers:uuid/node/a69fce22-8a0f-4ba9-8548-aef9a223348b'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/a69fce22-8a0f-4ba9-8548-aef9a223348b',
    'router_path' => 'uuid',
    'link_title' => 'Technical Assistance Providers',
    'options' => array(
      'attributes' => array(
        'title' => 'Meet our TA Providers',
      ),
      'identifier' => 'main-menu_technical-assistance-providers:uuid/node/a69fce22-8a0f-4ba9-8548-aef9a223348b',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -57,
    'customized' => 1,
    'uuid' => 'a69fce22-8a0f-4ba9-8548-aef9a223348b',
    'vuuid' => 'aae41b0b-02fa-40f2-9c66-042e98935bc5',
    'parent_identifier' => 'main-menu_ta--training:uuid/node/6fe8a511-bfa9-48e0-8a87-9e3b90a5a779',
  );
  // Exported menu link: main-menu_think-college-in-the-media:uuid/node/c69f23c9-1655-437e-9564-fa236291c0f6.
  $menu_links['main-menu_think-college-in-the-media:uuid/node/c69f23c9-1655-437e-9564-fa236291c0f6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/c69f23c9-1655-437e-9564-fa236291c0f6',
    'router_path' => 'uuid',
    'link_title' => 'Think College in the Media',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_think-college-in-the-media:uuid/node/c69f23c9-1655-437e-9564-fa236291c0f6',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'uuid' => 'c69f23c9-1655-437e-9564-fa236291c0f6',
    'vuuid' => 'bb18e138-4e3e-4202-bbd0-13812199a724',
    'parent_identifier' => 'main-menu_about:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
  );
  // Exported menu link: main-menu_think-college-learn:uuid/node/f0d48ecd-cd2b-4cfe-8c35-ad7e470d3a9e.
  $menu_links['main-menu_think-college-learn:uuid/node/f0d48ecd-cd2b-4cfe-8c35-ad7e470d3a9e'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/f0d48ecd-cd2b-4cfe-8c35-ad7e470d3a9e',
    'router_path' => 'uuid',
    'link_title' => 'Think College Learn',
    'options' => array(
      'attributes' => array(
        'title' => 'Learning modules on inclusive postsecondary education',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_think-college-learn:uuid/node/f0d48ecd-cd2b-4cfe-8c35-ad7e470d3a9e',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -53,
    'customized' => 1,
    'uuid' => 'f0d48ecd-cd2b-4cfe-8c35-ad7e470d3a9e',
    'vuuid' => 'be94be0b-0bc6-4879-9c07-28585af6dfb4',
    'parent_identifier' => 'main-menu_ta--training:uuid/node/6fe8a511-bfa9-48e0-8a87-9e3b90a5a779',
  );
  // Exported menu link: main-menu_think-college-national-coordinating-center:uuid/node/5d8d9a37-c072-415d-b622-fd9aaaa52709.
  $menu_links['main-menu_think-college-national-coordinating-center:uuid/node/5d8d9a37-c072-415d-b622-fd9aaaa52709'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/5d8d9a37-c072-415d-b622-fd9aaaa52709',
    'router_path' => 'uuid',
    'link_title' => 'Think College National Coordinating Center',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_think-college-national-coordinating-center:uuid/node/5d8d9a37-c072-415d-b622-fd9aaaa52709',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -54,
    'customized' => 1,
    'uuid' => '5d8d9a37-c072-415d-b622-fd9aaaa52709',
    'vuuid' => '77126533-faa2-4ea7-aaa0-c42cadf167c0',
    'parent_identifier' => 'main-menu_national-coordinating-center:projects/ncc',
  );
  // Exported menu link: main-menu_think-college-public-awareness:uuid/node/899045f8-a174-44db-9039-10051283980f.
  $menu_links['main-menu_think-college-public-awareness:uuid/node/899045f8-a174-44db-9039-10051283980f'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/899045f8-a174-44db-9039-10051283980f',
    'router_path' => 'uuid',
    'link_title' => 'Think College! Public Awareness',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_think-college-public-awareness:uuid/node/899045f8-a174-44db-9039-10051283980f',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'uuid' => '899045f8-a174-44db-9039-10051283980f',
    'vuuid' => 'f0a30683-7717-47e9-a5a9-da97ed790069',
    'parent_identifier' => 'main-menu_resources:uuid/node/66bee5c5-ae58-4ead-87f2-7213745ddd45',
  );
  // Exported menu link: main-menu_think-college-publications:uuid/node/bef73ab7-4f44-4ff8-9dc5-26966b053c22.
  $menu_links['main-menu_think-college-publications:uuid/node/bef73ab7-4f44-4ff8-9dc5-26966b053c22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/bef73ab7-4f44-4ff8-9dc5-26966b053c22',
    'router_path' => 'uuid',
    'link_title' => 'Think College Publications',
    'options' => array(
      'attributes' => array(
        'title' => 'Publications from the Think College team',
      ),
      'identifier' => 'main-menu_think-college-publications:uuid/node/bef73ab7-4f44-4ff8-9dc5-26966b053c22',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'uuid' => 'bef73ab7-4f44-4ff8-9dc5-26966b053c22',
    'vuuid' => '29e6996e-e30e-4ee4-9903-e5bf54acf251',
    'parent_identifier' => 'main-menu_resources:uuid/node/66bee5c5-ae58-4ead-87f2-7213745ddd45',
  );
  // Exported menu link: main-menu_think-college-transition-model-project:uuid/node/a8c73b20-e2e5-4896-b590-d9df5db3fffb.
  $menu_links['main-menu_think-college-transition-model-project:uuid/node/a8c73b20-e2e5-4896-b590-d9df5db3fffb'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/a8c73b20-e2e5-4896-b590-d9df5db3fffb',
    'router_path' => 'uuid',
    'link_title' => 'Think College Transition Model Project',
    'options' => array(
      'attributes' => array(
        'title' => 'info about this Think College grant project',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_think-college-transition-model-project:uuid/node/a8c73b20-e2e5-4896-b590-d9df5db3fffb',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'uuid' => 'a8c73b20-e2e5-4896-b590-d9df5db3fffb',
    'vuuid' => 'ee468b14-fc44-4e14-8c32-ce88e4b8b954',
    'parent_identifier' => 'main-menu_what-is-think-college:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
  );
  // Exported menu link: main-menu_tpsid-data-collection:uuid/node/cefef32b-6f3c-489c-820b-935012b82587.
  $menu_links['main-menu_tpsid-data-collection:uuid/node/cefef32b-6f3c-489c-820b-935012b82587'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/cefef32b-6f3c-489c-820b-935012b82587',
    'router_path' => 'uuid',
    'link_title' => 'TPSID Data Collection',
    'options' => array(
      'attributes' => array(
        'title' => 'Info and Resources on the TPSID Data Network',
      ),
      'alter' => TRUE,
      'roles_for_menu' => array(
        'show' => array(
          7 => 7,
          3 => 3,
          14 => 14,
        ),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_tpsid-data-collection:uuid/node/cefef32b-6f3c-489c-820b-935012b82587',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'uuid' => 'cefef32b-6f3c-489c-820b-935012b82587',
    'vuuid' => 'f1aa7e2e-7de3-44af-96e2-51dbd286a54b',
    'parent_identifier' => 'main-menu_tpsid-login:uuid/node/53f99e19-ae6f-4889-b4d3-209aa510a34d',
  );
  // Exported menu link: main-menu_tpsid-events:tpsid/tpsid-events.
  $menu_links['main-menu_tpsid-events:tpsid/tpsid-events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tpsid/tpsid-events',
    'router_path' => 'tpsid/tpsid-events',
    'link_title' => 'TPSID Events',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(
          7 => 7,
          3 => 3,
          14 => 14,
        ),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_tpsid-events:tpsid/tpsid-events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tpsid:uuid/node/4c78115c-18d0-47b3-9bc1-65188b14d11f',
  );
  // Exported menu link: main-menu_tpsid-learning-channel:uuid/node/a6a61a16-aa0a-4a27-a893-30620b040b30.
  $menu_links['main-menu_tpsid-learning-channel:uuid/node/a6a61a16-aa0a-4a27-a893-30620b040b30'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/a6a61a16-aa0a-4a27-a893-30620b040b30',
    'router_path' => 'uuid',
    'link_title' => 'TPSID Learning Channel',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(
          7 => 7,
          3 => 3,
          14 => 14,
        ),
        'hide' => array(),
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_tpsid-learning-channel:uuid/node/a6a61a16-aa0a-4a27-a893-30620b040b30',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'uuid' => 'a6a61a16-aa0a-4a27-a893-30620b040b30',
    'vuuid' => 'f4a309e3-5953-44d7-a2df-5664279fe9a9',
    'parent_identifier' => 'main-menu_tpsid:uuid/node/4c78115c-18d0-47b3-9bc1-65188b14d11f',
  );
  // Exported menu link: main-menu_tpsid-login:uuid/node/53f99e19-ae6f-4889-b4d3-209aa510a34d.
  $menu_links['main-menu_tpsid-login:uuid/node/53f99e19-ae6f-4889-b4d3-209aa510a34d'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/53f99e19-ae6f-4889-b4d3-209aa510a34d',
    'router_path' => 'uuid',
    'link_title' => 'TPSID Login',
    'options' => array(
      'attributes' => array(
        'title' => 'Landing Page for the TPSID only section of the site',
      ),
      'alter' => TRUE,
      'roles_for_menu' => array(
        'show' => array(
          1 => 1,
        ),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_tpsid-login:uuid/node/53f99e19-ae6f-4889-b4d3-209aa510a34d',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
    'uuid' => '53f99e19-ae6f-4889-b4d3-209aa510a34d',
    'vuuid' => '6a3451a9-d401-434a-b4e0-7e586708be71',
    'parent_identifier' => 'main-menu_about:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
  );
  // Exported menu link: main-menu_tpsid-quarterly-meetings:uuid/node/de58203c-6d90-45bb-b445-46cef2535cde.
  $menu_links['main-menu_tpsid-quarterly-meetings:uuid/node/de58203c-6d90-45bb-b445-46cef2535cde'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/de58203c-6d90-45bb-b445-46cef2535cde',
    'router_path' => 'uuid',
    'link_title' => 'TPSID Quarterly Meetings',
    'options' => array(
      'attributes' => array(
        'title' => 'Online TPSID meetings and related info',
      ),
      'roles_for_menu' => array(
        'show' => array(
          7 => 7,
          3 => 3,
          14 => 14,
        ),
        'hide' => array(),
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_tpsid-quarterly-meetings:uuid/node/de58203c-6d90-45bb-b445-46cef2535cde',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'uuid' => 'de58203c-6d90-45bb-b445-46cef2535cde',
    'vuuid' => '4aa89eec-a239-4e37-ab62-034f5e92328f',
    'parent_identifier' => 'main-menu_tpsid-login:uuid/node/53f99e19-ae6f-4889-b4d3-209aa510a34d',
  );
  // Exported menu link: main-menu_tpsid:uuid/node/4c78115c-18d0-47b3-9bc1-65188b14d11f.
  $menu_links['main-menu_tpsid:uuid/node/4c78115c-18d0-47b3-9bc1-65188b14d11f'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/4c78115c-18d0-47b3-9bc1-65188b14d11f',
    'router_path' => 'uuid',
    'link_title' => 'TPSID',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'roles_for_menu' => array(
        'show' => array(
          7 => 7,
          3 => 3,
          14 => 14,
        ),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_tpsid:uuid/node/4c78115c-18d0-47b3-9bc1-65188b14d11f',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'uuid' => '4c78115c-18d0-47b3-9bc1-65188b14d11f',
    'vuuid' => 'c1a33324-1d8f-4f25-9990-4ec86d932f2a',
    'parent_identifier' => 'main-menu_about:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
  );
  // Exported menu link: main-menu_training-and-ta-past-events:uuid/node/6db074f5-4a98-4740-8907-cb3f3ee4cf0a.
  $menu_links['main-menu_training-and-ta-past-events:uuid/node/6db074f5-4a98-4740-8907-cb3f3ee4cf0a'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/6db074f5-4a98-4740-8907-cb3f3ee4cf0a',
    'router_path' => 'uuid',
    'link_title' => 'Training and TA: Past Events',
    'options' => array(
      'identifier' => 'main-menu_training-and-ta-past-events:uuid/node/6db074f5-4a98-4740-8907-cb3f3ee4cf0a',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -51,
    'customized' => 1,
    'uuid' => '6db074f5-4a98-4740-8907-cb3f3ee4cf0a',
    'vuuid' => '7758e750-401a-4038-9acc-4f536c57bb12',
  );
  // Exported menu link: main-menu_training:uuid/node/9de11286-ee3d-4eef-90a9-4649f5b835a3.
  $menu_links['main-menu_training:uuid/node/9de11286-ee3d-4eef-90a9-4649f5b835a3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/9de11286-ee3d-4eef-90a9-4649f5b835a3',
    'router_path' => 'uuid',
    'link_title' => 'Training',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_training:uuid/node/9de11286-ee3d-4eef-90a9-4649f5b835a3',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'uuid' => '9de11286-ee3d-4eef-90a9-4649f5b835a3',
    'vuuid' => '520a5b35-31d3-4207-8967-a1c9467cc38e',
  );
  // Exported menu link: main-menu_udl-and-technology-affinity-group:technical-assistance/affinity-groups/technology-and-udl.
  $menu_links['main-menu_udl-and-technology-affinity-group:technical-assistance/affinity-groups/technology-and-udl'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'technical-assistance/affinity-groups/technology-and-udl',
    'router_path' => 'technical-assistance/affinity-groups/technology-and-udl',
    'link_title' => 'UDL and Technology Affinity Group',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_udl-and-technology-affinity-group:technical-assistance/affinity-groups/technology-and-udl',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_affinity-groups:uuid/node/c5bd3754-81a9-44ad-9e99-0dd5e5500618',
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
  // Exported menu link: main-menu_vocational-rehabilitation-affinity-group:technical-assistance/affinity-groups/vocational-rehabilitation.
  $menu_links['main-menu_vocational-rehabilitation-affinity-group:technical-assistance/affinity-groups/vocational-rehabilitation'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'technical-assistance/affinity-groups/vocational-rehabilitation',
    'router_path' => 'technical-assistance/affinity-groups/vocational-rehabilitation',
    'link_title' => 'Vocational Rehabilitation Affinity Group',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_vocational-rehabilitation-affinity-group:technical-assistance/affinity-groups/vocational-rehabilitation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_affinity-groups:uuid/node/c5bd3754-81a9-44ad-9e99-0dd5e5500618',
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
    'weight' => -37,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
  );
  // Exported menu link: main-menu_what-is-a-tpsid:uuid/node/1de84295-c4e2-4499-8203-843bbfe0af93.
  $menu_links['main-menu_what-is-a-tpsid:uuid/node/1de84295-c4e2-4499-8203-843bbfe0af93'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/1de84295-c4e2-4499-8203-843bbfe0af93',
    'router_path' => 'uuid',
    'link_title' => 'What is a TPSID?',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_what-is-a-tpsid:uuid/node/1de84295-c4e2-4499-8203-843bbfe0af93',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -51,
    'customized' => 1,
    'uuid' => '1de84295-c4e2-4499-8203-843bbfe0af93',
    'vuuid' => '22235168-d3ec-40d7-83bc-b20cd7231b9a',
    'parent_identifier' => 'main-menu_national-coordinating-center:projects/ncc',
  );
  // Exported menu link: main-menu_what-is-think-college:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903.
  $menu_links['main-menu_what-is-think-college:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
    'router_path' => 'uuid',
    'link_title' => 'What is Think College?',
    'options' => array(
      'attributes' => array(
        'title' => 'Information about Think College and our projects',
      ),
      'identifier' => 'main-menu_what-is-think-college:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -51,
    'customized' => 1,
    'uuid' => '4fbe0e03-d4ee-4afc-a381-a38c476d3903',
    'vuuid' => '22a1d0e9-40b5-48fb-bb20-fe3ca90fe32c',
    'parent_identifier' => 'main-menu_about:uuid/node/4fbe0e03-d4ee-4afc-a381-a38c476d3903',
  );
  // Exported menu link: main-menu_whats-happening-in-your-state:uuid/node/15e92ca5-f5d2-48bc-afe9-c6ff1505247a.
  $menu_links['main-menu_whats-happening-in-your-state:uuid/node/15e92ca5-f5d2-48bc-afe9-c6ff1505247a'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/15e92ca5-f5d2-48bc-afe9-c6ff1505247a',
    'router_path' => 'uuid',
    'link_title' => 'What\'s Happening in Your State',
    'options' => array(
      'attributes' => array(
        'title' => 'State-by-state activities related to postsecondary education for students with intellectual disability',
      ),
      'identifier' => 'main-menu_whats-happening-in-your-state:uuid/node/15e92ca5-f5d2-48bc-afe9-c6ff1505247a',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'uuid' => '15e92ca5-f5d2-48bc-afe9-c6ff1505247a',
    'vuuid' => '806c335c-5dcb-4e57-b159-e2d4ea0ccb23',
    'parent_identifier' => 'main-menu_resources:uuid/node/66bee5c5-ae58-4ead-87f2-7213745ddd45',
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
  t('Affinity Groups');
  t('Blog');
  t('Campus Housing');
  t('College Search');
  t('College-Based Transition Services');
  t('College-based Transition Services Affinity Group');
  t('Comprehensive Transition and Postsecondary (CTP) Programs');
  t('Contact');
  t('Data Collection');
  t('Donate');
  t('Emerging Advocates Group');
  t('Employment');
  t('Employment Opportunities');
  t('Employment Services Affinity Group');
  t('Events');
  t('Family Resources');
  t('Follow-Up Data');
  t('Future Quest Island');
  t('Glossary');
  t('Home');
  t('Information for TPSID Grantees');
  t('Join TC Conversations: TPSID Channel');
  t('Join the Conversation');
  t('Key Resources for TPSIDs');
  t('National Coordinating Center');
  t('Paying for College');
  t('Peer Mentors');
  t('Preparing for College');
  t('Program Accreditation');
  t('Program Development');
  t('Project Director Meetings');
  t('Projects');
  t('Public Policy Affinity Group');
  t('Publications');
  t('Rehabilitation and Research Training Center on Transitioning Youth and Vocational Rehabilitation');
  t('Request for Technical Assistance and Training');
  t('Research Affinity Group');
  t('Research Summits');
  t('Research in Inclusive PSE');
  t('Resources');
  t('Resources by Topic');
  t('Rethinking College: The Film');
  t('Search Resource Library');
  t('Statewide Alliances Affinity Group');
  t('Stay in the Think College Network');
  t('Student Credentials');
  t('Student Credentials Affinity Group');
  t('TC Learning Channel');
  t('TPSID');
  t('TPSID Data Collection');
  t('TPSID Events');
  t('TPSID Learning Channel');
  t('TPSID Login');
  t('TPSID Quarterly Meetings');
  t('Technical Assistance Providers');
  t('Think College Learn');
  t('Think College National Coordinating Center');
  t('Think College Publications');
  t('Think College Transition Model Project');
  t('Think College in the Media');
  t('Think College! Public Awareness');
  t('Topics');
  t('Training');
  t('Training and TA: Past Events');
  t('UDL and Technology Affinity Group');
  t('Upcoming Events');
  t('Vocational Rehabilitation');
  t('Vocational Rehabilitation Affinity Group');
  t('What is Think College?');
  t('What is a TPSID?');
  t('What\'s Happening in Your State');

  return $menu_links;
}
