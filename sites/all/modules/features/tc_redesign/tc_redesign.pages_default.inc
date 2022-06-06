<?php

/**
 * @file
 * tc_redesign.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tc_redesign_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'accreditation_standards';
  $page->task = 'page';
  $page->admin_title = 'Accreditation Standards';
  $page->admin_description = '';
  $page->path = 'resources/accreditation-standards';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_accreditation_standards__panel';
  $handler->task = 'page';
  $handler->subtask = 'accreditation_standards';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Accreditation Standards';
  $display->uuid = '8d249a32-6b09-453c-a3d0-2ccd4e65f4fb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_accreditation_standards__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-09593830-2545-4079-afa2-35bacf5f6709';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Stephanie Smith Lee" class="center-block img-thumbnail img-responsive" src="/sites/default/files/files/images/staff-photos/small_stephanie_smith_lee.jpg" style="height: 100px; width: 100px;" /><br />
<strong>Stephanie Smith Lee</strong>, Chair, National Coordinating Center (NCC) Accreditation Workgroup.<br />
<a href="mailto:stephaniesmithlee@gmail.com">stephaniesmithlee@gmail.com</a></p>

',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Accreditation Group Chair',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '09593830-2545-4079-afa2-35bacf5f6709';
  $display->content['new-09593830-2545-4079-afa2-35bacf5f6709'] = $pane;
  $display->panels['row1left'][0] = 'new-09593830-2545-4079-afa2-35bacf5f6709';
  $pane = new stdClass();
  $pane->pid = 'new-c75fdc06-0b57-40ca-afa8-efd665ac2c5d';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'Accreditation-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c75fdc06-0b57-40ca-afa8-efd665ac2c5d';
  $display->content['new-c75fdc06-0b57-40ca-afa8-efd665ac2c5d'] = $pane;
  $display->panels['row1left'][1] = 'new-c75fdc06-0b57-40ca-afa8-efd665ac2c5d';
  $pane = new stdClass();
  $pane->pid = 'new-9e090ee6-e25c-491a-9e4d-4d1f67fd7422';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<ul>
	<li><a href="http://www.chea.org/">Council for Higher Education Accreditation</a></li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Relevant Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box external-links-list',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9e090ee6-e25c-491a-9e4d-4d1f67fd7422';
  $display->content['new-9e090ee6-e25c-491a-9e4d-4d1f67fd7422'] = $pane;
  $display->panels['row1left'][2] = 'new-9e090ee6-e25c-491a-9e4d-4d1f67fd7422';
  $pane = new stdClass();
  $pane->pid = 'new-07d5bada-b73a-4010-a533-be584dca65de';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Intro',
    'body' => 'Brief Intro to what the Accreditation Workgroup is all about (written by Stephanie)',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '07d5bada-b73a-4010-a533-be584dca65de';
  $display->content['new-07d5bada-b73a-4010-a533-be584dca65de'] = $pane;
  $display->panels['row1right'][0] = 'new-07d5bada-b73a-4010-a533-be584dca65de';
  $pane = new stdClass();
  $pane->pid = 'new-8d44b91a-1b0f-480a-975e-d69077c8c9dd';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>• Notes from most recent meeting with link to PowerPoint used<br />
• a brief summary of what was discussed<br />
• link to previous meeting’s PowerPoint<br />
&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Meeting Notes',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8d44b91a-1b0f-480a-975e-d69077c8c9dd';
  $display->content['new-8d44b91a-1b0f-480a-975e-d69077c8c9dd'] = $pane;
  $display->panels['row1right'][1] = 'new-8d44b91a-1b0f-480a-975e-d69077c8c9dd';
  $pane = new stdClass();
  $pane->pid = 'new-e01d70c3-d7f2-4432-adfa-dbb4ad2e85c1';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => 'About the Workgroup committees',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'About (?)',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e01d70c3-d7f2-4432-adfa-dbb4ad2e85c1';
  $display->content['new-e01d70c3-d7f2-4432-adfa-dbb4ad2e85c1'] = $pane;
  $display->panels['row1right'][2] = 'new-e01d70c3-d7f2-4432-adfa-dbb4ad2e85c1';
  $pane = new stdClass();
  $pane->pid = 'new-834034a8-9636-47bf-a184-c85c49e78858';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<div class="row">
<div class="col-md-12">
<div class="row">
<div class="col-md-6"><strong>Carol Britton-Laws</strong>,<br />
Asst. Clinical Professor &amp; Director Destination Dawgs, University of Georgia</div>


<div class="col-md-6"><strong>Roberta (Bobbi) L. Derlin</strong>,<br />
Associate Provost Emeritus, New Mexico State University, representing NACIQI</div>

</div>
<hr />
<div class="row">
<div class="col-md-6"><strong>Jon Fansmith</strong>,<br />
Director, Government Relations, American Council on Education</div>


<div class="col-md-6"><strong>Wilbert L. Francis</strong>,<br />
Project Director, Open the Doors to College, Tarjan Center at UCLA</div>
</div>
<hr />
<div class="row">
<div class="col-md-6"><strong>Meg Grigal</strong>,<br />
Principal Investigator, Think College National Coordinating Center</div>

<div class="col-md-6"><strong>Debra Hart</strong>,<br />
Co-Principal Investigator, Think College National Coordinating Center</div>

</div>
<hr />
<div class="row">
<div class="col-md-6"><strong>James D. King</strong>,<br />
Vice Chancellor, Tennessee Colleges of Applied Technology</div>

<div class="col-md-6"><strong>David Michael Mank</strong>,<br />
Professor Emeritus, Indiana University</div>
</div>
<hr />
<div class="row">
<div class="col-md-6"><strong>Elise McMillan</strong><br />
Co-Director, Vanderbilt Kennedy Center, Vanderbilt University</div>

<div class="col-md-6"><strong>Deborah J. Amsden Micklos</strong>,<br />
Project Coordinator, University of Delaware</div>
</div>
<hr />
<div class="row">
<div class="col-md-6"><strong>Rachel Quenemoen</strong> (Chair),<br />
Senior Research Associate (retired) University of Minnesota</div>

<div class="col-md-6"><strong>Tracy Rand</strong>,<br />
Managing Director, Office of Specialized Services, Bergen Community College</div>
</div>
<hr />
<div class="row">
<div class="col-md-6"><strong>Denise Rozell</strong>,<br />
Postsecondary Education Policy Strategist, AUCD</div>

<div class="col-md-6"><strong>Jenni Sandler</strong>,<br />
Director, Access Services and ACHIEVE, Highline College</div>
</div>
<hr />
<div class="row">
<div class="col-md-6"><strong>Chrisann Schiro-Geist</strong>,<br />
Professor, Director, Institute on Disability, University of Memphis</div>
<div class="col-md-6"><strong>Terri L. Shelton</strong>,<br />
Vice Chancellor, University of North Carolina Greensboro</div>
</div>
<hr />
<div class="row">
<div class="col-md-6"><strong>Stephan J. Smith</strong>,<br />
Executive Director, Association on Higher Education and Disability</div>

<div class="col-md-6"><strong>Stephanie Smith Lee</strong>,<br />
Chair Interim Director, Governmental Affairs National Down Syndrome Congress</div>
</div>
<hr />
<div class="row">
<div class="col-md-6"><strong>Cate Weir</strong>,<br />
Program Director, Think College National Coordinating Center</div>

<div class="col-md-6"><strong>Madeleine Will</strong>,<br />
Co-Founder, Collaboration to Promote Self-Determination</div>
</div>
</div>
</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Workgroup Committee Members ',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '834034a8-9636-47bf-a184-c85c49e78858';
  $display->content['new-834034a8-9636-47bf-a184-c85c49e78858'] = $pane;
  $display->panels['row1right'][3] = 'new-834034a8-9636-47bf-a184-c85c49e78858';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['accreditation_standards'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'affinity_group_employment_services';
  $page->task = 'page';
  $page->admin_title = 'Affinity Group-Employment Services';
  $page->admin_description = '';
  $page->path = 'ta-training/affinity-groups/employment-services';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_affinity_group_employment_services__panel';
  $handler->task = 'page';
  $handler->subtask = 'affinity_group_employment_services';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Employment Supports Affinity Group';
  $display->uuid = '8ea6207f-4588-4771-9e5e-b1d51c5186ed';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_affinity_group_employment_services__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7601fa1f-d5a7-426b-8449-5cec2937bad0';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'logo',
    'body' => '<p><img alt="Logo for Employment Supports Affinity group" class="img-responsive" src="/sites/default/files/images/empsupport_employment%20support.png" /></p>
<p>&nbsp;</p>',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7601fa1f-d5a7-426b-8449-5cec2937bad0';
  $display->content['new-7601fa1f-d5a7-426b-8449-5cec2937bad0'] = $pane;
  $display->panels['row1left'][0] = 'new-7601fa1f-d5a7-426b-8449-5cec2937bad0';
  $pane = new stdClass();
  $pane->pid = 'new-d6f90434-ae6b-47fb-a121-b8ec8db266ae';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Facilitator: TBD</p>

<p>Think College Staff Liaison: Sheila Johnson<br />
<a href="mailto:sheila.johnson@umb.edu?subject=affinity%20group">sheila.johnson@umb.edu</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'AFFINITY GROUP FACILITATOR',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd6f90434-ae6b-47fb-a121-b8ec8db266ae';
  $display->content['new-d6f90434-ae6b-47fb-a121-b8ec8db266ae'] = $pane;
  $display->panels['row1left'][1] = 'new-d6f90434-ae6b-47fb-a121-b8ec8db266ae';
  $pane = new stdClass();
  $pane->pid = 'new-a0a87451-0fca-49c7-8297-31466fb190df';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Sign up to receive email updates for one or&nbsp;more Affinity Groups.</p>

<p><a class="btn btn-primary" href="https://nam10.safelinks.protection.outlook.com/?url=https%3A%2F%2Fforms.gle%2FJe4msZRDoko3MkTk9&amp;data=04%7C01%7CSheila.Johnson%40umb.edu%7C1c5ce26b3b6d4ecec8b708d97ed48538%7Cb97188711ee94425953c1ace1373eb38%7C0%7C0%7C637680273491490073%7CUnknown%7CTWFpbGZsb3d8eyJWIjoiMC4wLjAwMDAiLCJQIjoiV2luMzIiLCJBTiI6Ik1haWwiLCJXVCI6Mn0%3D%7C1000&amp;sdata=E3TaxZFtHcw4W624XgIs%2BDfhaV7nSEMX3EdrEpH2Gvo%3D&amp;reserved=0" role="button" target="_blank">Sign Up Now!</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'STAY INFORMED BY EMAIL',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a0a87451-0fca-49c7-8297-31466fb190df';
  $display->content['new-a0a87451-0fca-49c7-8297-31466fb190df'] = $pane;
  $display->panels['row1left'][2] = 'new-a0a87451-0fca-49c7-8297-31466fb190df';
  $pane = new stdClass();
  $pane->pid = 'new-0262d20a-6e8c-421d-bb7d-f361d7d87cb6';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'AffinityGroup-EmploymentServices-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0262d20a-6e8c-421d-bb7d-f361d7d87cb6';
  $display->content['new-0262d20a-6e8c-421d-bb7d-f361d7d87cb6'] = $pane;
  $display->panels['row1left'][3] = 'new-0262d20a-6e8c-421d-bb7d-f361d7d87cb6';
  $pane = new stdClass();
  $pane->pid = 'new-37d24a44-3034-4f39-b439-fe9fd3951f50';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Welcome to the Think College Employment Supports Affinity Group!</p>

<p>The Employment Supports&nbsp;Affinity Group is designed for employment support professionals in college programs for students with intellectual disability. This is an open-access special interest group for individuals who want to contribute to the discussion of ways to facilitate meaningful employment opportunities for students with ID in postsecondary education environments.<br />
The purpose of the Affinity Group is to support members through:</p>

<ul>
	<li>Equipping employment support professionals with an online community offering discussions on issues, strategies, and results related to employment for individuals with intellectual disabilities (ID) in higher education programs.</li>
	<li>Facilitating meaningful dialogue among employment stakeholders that emphasizes improving employment-related education, opportunities, and outcomes for students with ID.</li>
	<li>Connecting with other employment support professionals to brainstorm solutions, share resources, and build collaborative relationships.</li>
</ul>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '37d24a44-3034-4f39-b439-fe9fd3951f50';
  $display->content['new-37d24a44-3034-4f39-b439-fe9fd3951f50'] = $pane;
  $display->panels['row1right'][0] = 'new-37d24a44-3034-4f39-b439-fe9fd3951f50';
  $pane = new stdClass();
  $pane->pid = 'new-543f2939-5d5d-4283-81c9-063982065db6';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Next Meeting Date is Set',
    'body' => '<p><a href="https://communityinclusion.zoom.us/j/92000886718"><strong>Permanent Zoom meeting room&nbsp;link</strong></a></p>

<p><a href="https://docs.google.com/document/d/1ieehn3jGMBIzrYP1A-O8phhJp93anxykbTaiSgFgMgQ/edit?usp=sharing"><strong>Rolling agenda link</strong></a>&nbsp;all agendas and notes can be found here</p>

<p><strong>2022 Meeting Dates TBA</strong></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Meeting Schedule',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '543f2939-5d5d-4283-81c9-063982065db6';
  $display->content['new-543f2939-5d5d-4283-81c9-063982065db6'] = $pane;
  $display->panels['row1right'][1] = 'new-543f2939-5d5d-4283-81c9-063982065db6';
  $pane = new stdClass();
  $pane->pid = 'new-8022ca3a-09d6-4da3-9173-6e4e7ee2042a';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><strong>November 3, 2020</strong>: <a href="https://icimedia.wistia.com/medias/568jd8lkbm">recording of meeting</a> and <a href="https://docs.google.com/document/d/1ieehn3jGMBIzrYP1A-O8phhJp93anxykbTaiSgFgMgQ/edit?fbclid=IwAR3Dx4SD198hvJ-Ql7B1oRM_KuxBlYevNKK1-CiXGzyl9KS1Kox5g5uMDWw">meeting notes</a></p>

<p><strong>August 19, 2020: </strong><a href="https://icimedia.wistia.com/medias/n7cazve2bt">meeting recording</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Past Meetings',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8022ca3a-09d6-4da3-9173-6e4e7ee2042a';
  $display->content['new-8022ca3a-09d6-4da3-9173-6e4e7ee2042a'] = $pane;
  $display->panels['row1right'][2] = 'new-8022ca3a-09d6-4da3-9173-6e4e7ee2042a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['affinity_group_employment_services'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'affinity_group_ncc_credentials';
  $page->task = 'page';
  $page->admin_title = 'Affinity Group-NCC Credentials';
  $page->admin_description = '';
  $page->path = 'ta-training/affinity-groups/ncc-credentials';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_affinity_group_ncc_credentials__panel';
  $handler->task = 'page';
  $handler->subtask = 'affinity_group_ncc_credentials';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Student Credentials Affinity Group';
  $display->uuid = 'd188fc72-714f-4786-b44b-03026e01c13a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_affinity_group_ncc_credentials__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8a40f2a0-46ab-40fb-bfd8-5e46cc3775c0';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'logo',
    'body' => '<p><img alt="Student Credentials Affinity Group" class="img-responsive" src="/sites/default/files/images/Student%20Credentials.png" /></p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8a40f2a0-46ab-40fb-bfd8-5e46cc3775c0';
  $display->content['new-8a40f2a0-46ab-40fb-bfd8-5e46cc3775c0'] = $pane;
  $display->panels['row1left'][0] = 'new-8a40f2a0-46ab-40fb-bfd8-5e46cc3775c0';
  $pane = new stdClass();
  $pane->pid = 'new-938befb1-4b9c-4054-917d-615580abe710';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Kathleen Becht" class="center-block img-thumbnail img-responsive" src="/sites/default/files/images/Becht-headshot.jpg" style="width: 100px; height: 100px;" /></p>

<p><strong>Kathleen Becht, Ph.D.</strong><br />
Technical Assistance Coordinator<br />
<a href="mailto:kathleen.becht@umb.edu">kathleen.becht@umb.edu</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'AFFINITY GROUP FACILITATOR',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '938befb1-4b9c-4054-917d-615580abe710';
  $display->content['new-938befb1-4b9c-4054-917d-615580abe710'] = $pane;
  $display->panels['row1left'][1] = 'new-938befb1-4b9c-4054-917d-615580abe710';
  $pane = new stdClass();
  $pane->pid = 'new-417fad4b-0fb1-498d-8e23-26265b812f8e';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Sign up to receive email updates for one or&nbsp;more Affinity Groups.</p>

<p><a class="btn btn-primary" href="https://nam10.safelinks.protection.outlook.com/?url=https%3A%2F%2Fforms.gle%2FJe4msZRDoko3MkTk9&amp;data=04%7C01%7CSheila.Johnson%40umb.edu%7C1c5ce26b3b6d4ecec8b708d97ed48538%7Cb97188711ee94425953c1ace1373eb38%7C0%7C0%7C637680273491490073%7CUnknown%7CTWFpbGZsb3d8eyJWIjoiMC4wLjAwMDAiLCJQIjoiV2luMzIiLCJBTiI6Ik1haWwiLCJXVCI6Mn0%3D%7C1000&amp;sdata=E3TaxZFtHcw4W624XgIs%2BDfhaV7nSEMX3EdrEpH2Gvo%3D&amp;reserved=0" role="button" target="_blank">Sign Up Now!</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Stay Informed by Email',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '417fad4b-0fb1-498d-8e23-26265b812f8e';
  $display->content['new-417fad4b-0fb1-498d-8e23-26265b812f8e'] = $pane;
  $display->panels['row1left'][2] = 'new-417fad4b-0fb1-498d-8e23-26265b812f8e';
  $pane = new stdClass();
  $pane->pid = 'new-5a837408-4474-4fff-bd01-006185a45e65';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'AffinityGroup-NCC-Credential-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5a837408-4474-4fff-bd01-006185a45e65';
  $display->content['new-5a837408-4474-4fff-bd01-006185a45e65'] = $pane;
  $display->panels['row1left'][3] = 'new-5a837408-4474-4fff-bd01-006185a45e65';
  $pane = new stdClass();
  $pane->pid = 'new-0eb3f574-c0b6-45ba-afce-48ae03e544dd';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'intro',
    'body' => '<p><strong>Welcome to the Think College Student Credentials&nbsp;Affinity Group!</strong></p>

<p>The Student Credentials Affinity group brings together professionals, researchers, advocates, policymakers and educators interested in discussing the credential landscape in postsecondary education. This is an open-access special interest group targeted at individuals who want to contribute to the discussion of “meaningful credentials” for students with intellectual disabilities.</p>

<p>The purpose of the Affinity Group is to:</p>

<ul>
	<li>Facilitate dialogue on the credential landscape in inclusive higher education</li>
	<li>Connect with others</li>
	<li>Share tools and resources</li>
</ul>

<p>Through a series of quarterly online meetings, this affinity group will consider the points of view of several key stakeholders:</p>

<ul>
	<li>Students with Intellectual Disability</li>
	<li>Businesses / Employers</li>
	<li>TPSID Programs</li>
	<li>Institutes of Higher Education<br />
	&nbsp;</li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0eb3f574-c0b6-45ba-afce-48ae03e544dd';
  $display->content['new-0eb3f574-c0b6-45ba-afce-48ae03e544dd'] = $pane;
  $display->panels['row1right'][0] = 'new-0eb3f574-c0b6-45ba-afce-48ae03e544dd';
  $pane = new stdClass();
  $pane->pid = 'new-5ce68e84-c4f6-4523-8f3e-bfc60573dc96';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><strong><a href="https://nam10.safelinks.protection.outlook.com/?url=https%3A%2F%2Fcommunityinclusion.zoom.us%2Fj%2F8786266140&amp;data=04%7C01%7CSheila.Johnson%40umb.edu%7C7dc81967b7754a00229208d97ed5ca6a%7Cb97188711ee94425953c1ace1373eb38%7C0%7C0%7C637680278945626841%7CUnknown%7CTWFpbGZsb3d8eyJWIjoiMC4wLjAwMDAiLCJQIjoiV2luMzIiLCJBTiI6Ik1haWwiLCJXVCI6Mn0%3D%7C1000&amp;sdata=WOoS4bumKEKFc%2FqON%2FsDeLfmTzduaBARndV9egwZAEY%3D&amp;reserved=0">Permanent Zoom Meeting link</a></strong></p>

<p><a href="https://docs.google.com/document/d/1o8B27pU_OKWerPviCpeZ0bIKlXJVLJEhPPntuqc6Bfo/edit"><strong>Rolling Agenda Link</strong></a>&nbsp;- all agendas and notes can be found here.</p>

<p><strong>Meeting Dates</strong></p>

<ul>
	<li>April 12, 2022, 2-3 p.m. ET<br />
	Topic: TBA<br />
	&nbsp;</li>
	<li>June 7, 2022, 2-3 p.m. ET<br />
	Topic: TBA</li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Meeting Schedule',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5ce68e84-c4f6-4523-8f3e-bfc60573dc96';
  $display->content['new-5ce68e84-c4f6-4523-8f3e-bfc60573dc96'] = $pane;
  $display->panels['row1right'][1] = 'new-5ce68e84-c4f6-4523-8f3e-bfc60573dc96';
  $pane = new stdClass();
  $pane->pid = 'new-b8ce9a38-df64-4011-bbb1-990c2f1bb743';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p class="MsoNoSpacing">Meetings are listed in date order, with the meeting topic noted in bold at the top of each listing.&nbsp;</p>

<p class="MsoNoSpacing"><strong>Colorado’s Portable IPSE Credential<br />
Date: </strong>February 8, 2022<br />
<strong>Presenter: </strong>Dr. Christi Kasa, University of Colorado<br />
<strong>Summary: </strong>Presentation on Colorado’s portable credential available at 3 of Colorado’s IPSE programs. The process and philosophy behind this portable credential and the program of study it represents is provided. The presenters also share how the students are able to take courses for credit through a transcript designation of ‘modified course.’ A sample transcript is shared.</p>

<p class="MsoNoSpacing"><strong><a href="https://thinkcollege.net/resource/student-credentials/student-credentials-affinity-group-meeting-february-2022">Meeting recording and materials</a></strong></p>

<hr />
<p class="MsoNoSpacing"><b id="docs-internal-guid-1689082a-7fff-43dd-5511-82190983fc35">CAST e-Portfolio Tool</b><br />
<strong>Date: </strong>December 14, 2021<br />
<strong>Presenters: </strong>Sam Johnston and Cara Wojcik<br />
<strong>Summary: </strong>Dr. Sam Johnston and Cara Wojcik from CAST shared an e-portfolio tool that CAST has developed, with, of course, a UDL framework. The tool allows educators to create "challenges" for students to complete, showing student learning in various competency areas. The tool is clean visually while still providing accessibility tools for students to ‘show their work" through speech to text, video, pictures, and text. Cara developed an example of how an IPSE program might use the efolio tool by uploading the&nbsp;Foundations Skills for College and Career Learning Plan<strong>&nbsp;</strong>and then creating individual folios for students to share with employers during or prior to a job interview.</p>

<p class="MsoNoSpacing"><strong><a href="https://thinkcollege.net/resource/student-credentials/student-credentials-affinity-group-meeting-december-2021">Meeting recording and&nbsp;transcript - December 2021</a><br />
<a href="https://https/thinkcollege.net/resource/campus-life-employment-supports/foundational-skills-for-college-and-career-learning-plan" target="_blank" title="null">Foundations Skills for College and Career Learning Plan</a></strong></p>

<hr />
<p class="MsoNoSpacing"><strong>A Credential Approval Journey<br />
Date: </strong>September 8, 2021<br />
<strong>Presenter: </strong>Dr. Kate Strater 2020 TPSID PI, Calvin University<br />
<strong>Summary: </strong>Dr. Strater shares her journey through the University credential approval process. Kate’s work included not only starting a new inclusive postsecondary education (IPSE) program for 20 students at Calvin, but the realignment of established processes to CTP guidelines. While every IPSE program is unique, Dr. Strater outlined the governance process in establishing a new credential. There are many take-aways and great discussion!</p>

<p class="MsoNoSpacing"><a href="https://thinkcollege.net/resource/student-credentials/student-credentials-affinity-group-meeting-september-2021"><strong>Meeting recording and&nbsp;transcript - September 2021</strong></a></p>

<hr />
<p class="MsoNoSpacing"><strong>REACH Program<br />
Date: </strong>August 12, 2020<br />
<b><strong>Presenters: </strong></b>Mary Hauff, Lauren Bruno, Jennifer Cremers<br />
Crossover meeting with Vocational Rehabilitation, Public Policy, and Student Credentials Affinity Group<br />
<b>Summary:</b> The joint meeting of the Think College Vocational Rehabilitation, Public Policy, and Student Credentials Affinity Group. At this session, we welcomed three guest speakers, Mary Hauff, advocate and parent from Minnesota, and Lauren Bruno and Jennifer Cremers, University of Iowa REACH program, will share an overview of the program’s use of WorkKeys as a tool to increase access to evidence-based credentials earned by students with ID.</p>

<p class="MsoNoSpacing"><strong><a href="http://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affini-1">Meeting recording - August 2020</a></strong></p>

<div align="center" class="MsoNoSpacing" style="text-align:center">
<hr align="center" size="0" width="100%" /></div>

<p class="MsoNoSpacing"><b><strong>Florida Vocational Rehabilitation Partnership Journey</strong></b><br />
<strong>Date: </strong>April 1, 2020 | Crossover meeting w/ Public Policy &amp; Vocational Rehab Affinity Groups<br />
<strong>Presenter: </strong>Kathy Becht<br />
<b>Summary:</b> Kathy Becht shared an overview of the Florida Consortium on Inclusive Higher Education (a Transition and Postsecondary Program for Students with Intellectual Disabilities/TPSID) experience building a working partnership between FCIHE and the state Vocational Rehabilitation agency in Florida.</p>

<p class="MsoNoSpacing"><b><a href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affini-0">Meeting recording and transcript - April 2020</a></b></p>

<div align="center" class="MsoNoSpacing" style="text-align:center">
<hr align="center" size="0" width="100%" /></div>

<p class="MsoNoSpacing"><b>The Intersection of Public Policy, Vocational Rehabilitation, and Student Credentials Part 2<br />
Date: </b>November 6, 2019 | Crossover meeting with the Public Policy &amp; Vocational Rehabilitation Affinity Groups</p>

<p class="MsoNoSpacing"><b><a href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affinity">Meeting transcript - November 2019</a></b></p>

<div align="center" class="MsoNoSpacing" style="text-align:center">
<hr align="center" size="0" width="100%" /></div>

<p class="MsoNoSpacing"><b>The Intersection of Public Policy, Vocational Rehabilitation, and Student Credentials Part 1<br />
Date: </b>August 7, 2019 | Crossover meeting with the Public Policy &amp; Vocational Rehabilitation Affinity Groups</p>

<p class="MsoNoSpacing"><b><a href="https://thinkcollege.net/resource/combined-vr-policy-credentials-affinity-group-meeting-august-2019">Meeting recording and transcript - August 2019</a></b></p>

<div align="center" class="MsoNoSpacing" style="text-align:center">&nbsp;</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Past Meetings',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b8ce9a38-df64-4011-bbb1-990c2f1bb743';
  $display->content['new-b8ce9a38-df64-4011-bbb1-990c2f1bb743'] = $pane;
  $display->panels['row1right'][2] = 'new-b8ce9a38-df64-4011-bbb1-990c2f1bb743';
  $pane = new stdClass();
  $pane->pid = 'new-3ceb98e4-d936-44b9-9c77-2dcd03da6747';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Send an email to <a href="mailto:thinkcollegeTA@gmail.com">thinkcollegeTA@gmail.com</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Have other ideas for the Student Credentials Affinity Group?',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3ceb98e4-d936-44b9-9c77-2dcd03da6747';
  $display->content['new-3ceb98e4-d936-44b9-9c77-2dcd03da6747'] = $pane;
  $display->panels['row1right'][3] = 'new-3ceb98e4-d936-44b9-9c77-2dcd03da6747';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['affinity_group_ncc_credentials'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'affinity_group_technology_and_udl';
  $page->task = 'page';
  $page->admin_title = 'Affinity Group-Technology and UDL';
  $page->admin_description = '';
  $page->path = 'ta-training/affinity-groups/technology-and-udl';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_affinity_group_technology_and_udl__panel';
  $handler->task = 'page';
  $handler->subtask = 'affinity_group_technology_and_udl';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Technology and UDL Affinity Group';
  $display->uuid = '25bbab4d-ee93-4181-a739-f86f79249277';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_affinity_group_technology_and_udl__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ee1e4f1f-f06d-4b2a-a4fc-6ede09d9ed96';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'logo',
    'body' => '<p><img alt="Technology &amp; UDL Affinity Group" class="img-responsive" src="/sites/default/files/images/Tech%20%26%20UDL%20Logo.png" style="margin-top: 5px; margin-bottom: 5px;" /></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ee1e4f1f-f06d-4b2a-a4fc-6ede09d9ed96';
  $display->content['new-ee1e4f1f-f06d-4b2a-a4fc-6ede09d9ed96'] = $pane;
  $display->panels['row1left'][0] = 'new-ee1e4f1f-f06d-4b2a-a4fc-6ede09d9ed96';
  $pane = new stdClass();
  $pane->pid = 'new-ef165888-e03f-45d0-af67-887daf1ddb78';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Lori Cooney" class="center-block img-responsive img-thumbnail" src="/sites/default/files/files/images/staff-photos/LoriCooney.jpeg" style="height:100px; width:100px" /></p>

<p><strong>Lori Cooney, MEd</strong></p>

<p>Program Director,&nbsp;Inclusive Education &amp; Curriculum Design, and Universal Design Specialist</p>

<p><a href="mailto:lori.cooney@umb.edu">lori.cooney@umb.edu</a></p>
<hr />
<p><strong><img alt="" class="center-block img-responsive img-thumbnail" src="/sites/default/files/images/IMG_1065.jpg" style="height: 128px; width: 100px;" /></strong></p>

<p><strong>Olivia Hester</strong>&nbsp;</p>

<p>Research Assistant Professor, University of Alabama</p>

<p><a href="mailto:orhester@ua.edu">orhester@ua.edu</a></p>
<hr />
<p><strong><img alt="" class="center-block img-responsive img-thumbnail" src="/sites/default/files/images/Cropped.jpg" style="height: 92px; width: 100px;" /></strong></p>

<p><strong>Don McMahon</strong></p>

<p>Associate Professor of Special Education, Washington State University&nbsp;</p>

<p>don.mcmahon@wsu.edu</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Affinity Group Co-Facilitators',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ef165888-e03f-45d0-af67-887daf1ddb78';
  $display->content['new-ef165888-e03f-45d0-af67-887daf1ddb78'] = $pane;
  $display->panels['row1left'][1] = 'new-ef165888-e03f-45d0-af67-887daf1ddb78';
  $pane = new stdClass();
  $pane->pid = 'new-bd00c317-c427-417b-9d8e-035a2604c6b9';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Sign up to receive email updates for one or&nbsp;more Affinity Groups.</p>

<p><a class="btn btn-primary" href="https://nam10.safelinks.protection.outlook.com/?url=https%3A%2F%2Fforms.gle%2FJe4msZRDoko3MkTk9&amp;data=04%7C01%7CSheila.Johnson%40umb.edu%7C1c5ce26b3b6d4ecec8b708d97ed48538%7Cb97188711ee94425953c1ace1373eb38%7C0%7C0%7C637680273491490073%7CUnknown%7CTWFpbGZsb3d8eyJWIjoiMC4wLjAwMDAiLCJQIjoiV2luMzIiLCJBTiI6Ik1haWwiLCJXVCI6Mn0%3D%7C1000&amp;sdata=E3TaxZFtHcw4W624XgIs%2BDfhaV7nSEMX3EdrEpH2Gvo%3D&amp;reserved=0" role="button" target="_blank">Sign Up Now!</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Stay Informed by Email',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bd00c317-c427-417b-9d8e-035a2604c6b9';
  $display->content['new-bd00c317-c427-417b-9d8e-035a2604c6b9'] = $pane;
  $display->panels['row1left'][2] = 'new-bd00c317-c427-417b-9d8e-035a2604c6b9';
  $pane = new stdClass();
  $pane->pid = 'new-b16af76b-392b-40ac-8a7d-292d0a00797f';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'AffinityGroup-Technology-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b16af76b-392b-40ac-8a7d-292d0a00797f';
  $display->content['new-b16af76b-392b-40ac-8a7d-292d0a00797f'] = $pane;
  $display->panels['row1left'][3] = 'new-b16af76b-392b-40ac-8a7d-292d0a00797f';
  $pane = new stdClass();
  $pane->pid = 'new-e0cd2e3b-233c-4cbd-9534-580c64cb185c';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<ul>
	<li><a href="https://www.facebook.com/groups/2279671298957380/">Inclusive Technology Affinity Group on Facebook</a></li>
	<!--
<li>Member directory</li>
	<li>Agendas</li>
	<li>Member interest inventory and topic list</li>

-->
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Member Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e0cd2e3b-233c-4cbd-9534-580c64cb185c';
  $display->content['new-e0cd2e3b-233c-4cbd-9534-580c64cb185c'] = $pane;
  $display->panels['row1left'][4] = 'new-e0cd2e3b-233c-4cbd-9534-580c64cb185c';
  $pane = new stdClass();
  $pane->pid = 'new-b11445af-8466-4422-8aed-1f3ac74a5a2b';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'intro',
    'body' => '<p>Welcome to the Think College Technology &amp; UDL Affinity Group.</p>

<p>The purpose of the Affinity Group is to support members to:</p>

<ul>
	<li>Learn about technology and universal design for learning to support inclusive higher education</li>
	<li>Connect with educators, curriculum designers, technology specialists and others</li>
	<li>Explore possible collaborations, and share tools and resources.</li>
</ul>

<p>This Affinity Group is designed for people who are interested in using technology and universal design for learning to support students of all abilities in higher education settings. The activities of the group will include discussion and demonstration of new and emerging technologies and techniques, review of existing apps, software, and programs, and whatever other activities the group desires. Current research and practice will be interspersed in the agenda, and discussion of best practice will be the foundation of the group.<br />
&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b11445af-8466-4422-8aed-1f3ac74a5a2b';
  $display->content['new-b11445af-8466-4422-8aed-1f3ac74a5a2b'] = $pane;
  $display->panels['row1right'][0] = 'new-b11445af-8466-4422-8aed-1f3ac74a5a2b';
  $pane = new stdClass();
  $pane->pid = 'new-82042c03-1adf-4c8c-bdf1-b2cda5d77635';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><strong><a data-mce-href="https://docs.google.com/document/d/1qKgiqqDEVrqlGri9Ths03yWSW98ykZ28mjrxXNe2VTM/edit" href="https://docs.google.com/document/d/1qKgiqqDEVrqlGri9Ths03yWSW98ykZ28mjrxXNe2VTM/edit">Rolling meeting agenda</a></strong>&nbsp;all agendas and notes can be found here</p>

<p>This group meets from&nbsp;3-4pm Eastern</p>

<p><em>Note each meeting has a unique meeting room link</em></p>

<ul>
	<li>May 12, 2022 <a href="https://communityinclusion.zoom.us/j/96082165406">Meeting room link</a></li>
	<li>September 15, 2022 <a href="http://https://communityinclusion.zoom.us/j/91446429336">Meeting room link</a></li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Meeting Schedule',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '82042c03-1adf-4c8c-bdf1-b2cda5d77635';
  $display->content['new-82042c03-1adf-4c8c-bdf1-b2cda5d77635'] = $pane;
  $display->panels['row1right'][1] = 'new-82042c03-1adf-4c8c-bdf1-b2cda5d77635';
  $pane = new stdClass();
  $pane->pid = 'new-186e111e-5ff6-4535-ad8d-c8a9009702fc';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>March 3, 2022</p>

<ul>
	<li><a href="http://docs.google.com/document/d/1qKgiqqDEVrqlGri9Ths03yWSW98ykZ28mjrxXNe2VTM/edit?usp=sharing">Link to Agenda</a></li>
</ul>

<p>January 13, 2022</p>

<ul>
	<li><a href="http://docs.google.com/document/d/1qKgiqqDEVrqlGri9Ths03yWSW98ykZ28mjrxXNe2VTM/edit?usp=sharing">Link to Agenda</a></li>
</ul>

<p>September 30, 2021</p>

<ul>
	<li><a href="https://docs.google.com/document/d/1qKgiqqDEVrqlGri9Ths03yWSW98ykZ28mjrxXNe2VTM/edit#" target="_blank">Link to Agenda</a>&nbsp;</li>
</ul>

<p>February 24, 2021</p>

<ul>
	<li><a href="https://icimedia.wistia.com/medias/c901axi7ks">Link to recording</a>&nbsp;</li>
	<li><a href="https://docs.google.com/document/d/1qKgiqqDEVrqlGri9Ths03yWSW98ykZ28mjrxXNe2VTM/edit?usp=sharing">Link to Agenda</a></li>
	<li><a href="https://app.nearpod.com/presentation?pin=EU9AD">Link to Nearpod presentation/agenda</a></li>
</ul>

<p>December 2, 2020</p>

<ul>
	<li><a href="https://icimedia.wistia.com/medias/mtm7rzp0p1">Link to A</a><a href="https://docs.google.com/document/d/17ghsrulirA4MeFTE-3a6nouoeHCd4-WfEw-pwSkQwBY/edit?usp=sharing">genda</a></li>
</ul>

<p>September 23, 2020</p>

<ul>
	<li><a href="https://icimedia.wistia.com/medias/mtm7rzp0p1">Link to Recording</a></li>
	<li><a href="https://docs.google.com/presentation/d/1JUwHapej9pmVMO4efJchQZQuf-uUXFc2SWfypRtdOWM/edit?usp=slides_web">Link to Tech-A-Licious Slides on Google</a></li>
	<li><a href="https://docs.google.com/document/d/1V1In8HyROxRe8M0mRbQRms6VBZQzs0PT5dppeU204TI/edit?usp=sharing">Link to Meeting Agenda</a><br />
	&nbsp;</li>
</ul>

<p>June 4, 2020&nbsp;</p>

<ul>
	<li>Guest speakers: Olivia Hester and Lauren Perry</li>
	<li><a href="https://icimedia.wistia.com/medias/7taswda0eo">Link to Presentation</a></li>
	<li><a href="https://docs.google.com/document/d/1Hj-A_g6l3rHwyXkoDARwHF3VZs1MYH0DnVacOEBXNmc/edit?usp=sharing">Link to&nbsp;Agenda</a><br />
	&nbsp;</li>
</ul>

<p>February 27, 2020&nbsp;</p>

<ul>
	<li>Topic: Student Accessing Accommodations</li>
	<li><a href="https://docs.google.com/document/d/12_GO8dVZRRfQarp-W01j_pjzt62UW1QEiwlr-gckP4o/edit?usp=sharing">Link to&nbsp;Agenda</a></li>
	<li><a href="https://docs.google.com/document/d/12_GO8dVZRRfQarp-W01j_pjzt62UW1QEiwlr-gckP4o/edit?usp=sharing">Link to&nbsp;P</a><a href="https://share.nearpod.com/vsph/ExqyT084Mu">resentation</a></li>
	<li><a href="https://icimedia.wistia.com/medias/pm0ozoin18">Link to Recording</a><br />
	&nbsp;</li>
</ul>

<p>November 21, 2019</p>

<ul>
	<li>Topic: Minot State University UDL-It! and 5 Steps to UDLifying Your Syllabus</li>
	<li><a href="https://docs.google.com/document/d/1KlCebtNJ0ivh8PmlXDbs-hDxXC0uHFe6IkYwBke2PK0/edit">Link to&nbsp;Agenda</a></li>
	<li><a href="https://icimedia.wistia.com/medias/jqe427243w">Link to recording</a><br />
	&nbsp;</li>
</ul>

<p>September&nbsp;20, 2019</p>

<ul>
	<li>Topic: Student Success Standards and Resources</li>
	<li><a href="http://docs.google.com/document/d/15QYyyTT0-XHOvgM5xVdpszeYr6uYPrktAFMPYBcQJrA/edit?usp=sharing">Link to&nbsp;Agenda</a></li>
	<li><a href="https://icimedia.wistia.com/medias/w54oz1kdbf">Link to recording</a></li>
</ul>

<p><br />
May 23, 2019</p>

<ul>
	<li>Topic: Instruction &amp; Assessment</li>
	<li><a href="http://docs.google.com/document/d/15QYyyTT0-XHOvgM5xVdpszeYr6uYPrktAFMPYBcQJrA/edit?usp=sharing">Link to&nbsp;Agenda</a></li>
	<li><a href="https://icimedia.wistia.com/medias/yv1gk1dmmw">Link to recording</a></li>
</ul>

<p><br />
February 28, 2019 (sorry, meeting was not recorded)</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Past Meetings',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '186e111e-5ff6-4535-ad8d-c8a9009702fc';
  $display->content['new-186e111e-5ff6-4535-ad8d-c8a9009702fc'] = $pane;
  $display->panels['row1right'][2] = 'new-186e111e-5ff6-4535-ad8d-c8a9009702fc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['affinity_group_technology_and_udl'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'campus_housing';
  $page->task = 'page';
  $page->admin_title = 'Campus Housing';
  $page->admin_description = '';
  $page->path = 'resources/innovation-exchange/campus-housing';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_campus_housing__panel';
  $handler->task = 'page';
  $handler->subtask = 'campus_housing';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Campus Housing';
  $display->uuid = '33a7e228-bf71-41af-850f-3d0e5c9b5b48';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_campus_housing__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-67882ee0-8250-4bd6-8972-6909a5b5e140';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_17';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-Campus-Housing-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '67882ee0-8250-4bd6-8972-6909a5b5e140';
  $display->content['new-67882ee0-8250-4bd6-8972-6909a5b5e140'] = $pane;
  $display->panels['row1left'][0] = 'new-67882ee0-8250-4bd6-8972-6909a5b5e140';
  $pane = new stdClass();
  $pane->pid = 'new-927bc74b-7aa4-4147-afcb-5c2525088d75';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Quick Links',
    'body' => '<ul>
	<li><a href="https://www.routledge.com/Teaching-Including-and-Supporting-College-Students-with-Intellectual/Kelley-Westling/p/book/9781138618077">Teaching, Including and Supporting Students with Intellectual Disabilities (Chapters 6, 9, and 13 in particular)</a></li>
	<li><a href="http://www.nxtbook.com/nxtbooks/acuho/journal_vol39no2/index.php?startid=186#/232">College Students with Intellectual Disabilities: How Are They Faring?</a></li>
	<li><a href="https://www.sotaconference.com/uploads/1/0/3/4/103490714/d2s1_kelley.pdf">State of the Art Conference Presentation on Factors that Contribute to Successful Community Living Post Graduation</a></li>
<li><a href="https://aaidd.org/publications/bookstore-home/new-this-year/community-living-and-participation-for-people-with-intellectual-and-developmental-disabilities">Community Living and Participation for People with Intellectual and Developmental Disabilities (new book from AAIDD)</a></li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Quick Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box external-links-list',
    'css_id' => 'quicklinks',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '927bc74b-7aa4-4147-afcb-5c2525088d75';
  $display->content['new-927bc74b-7aa4-4147-afcb-5c2525088d75'] = $pane;
  $display->panels['row1left'][1] = 'new-927bc74b-7aa4-4147-afcb-5c2525088d75';
  $pane = new stdClass();
  $pane->pid = 'new-7e764956-a076-4f64-8ad0-40fdf4bbf20a';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'intro',
    'body' => '<p>It takes a village to coordinate campus housing - various administrators, residential staff, and community agencies may all be involved. One person cannot coordinate or be an expert in all aspects of residential services for students with intellectual disability (ID). It is truly a team effort. When providing residential opportunities, it is important to establish and invest in collaborative partnerships with a variety of key stakeholders to further enhance and balance the benefits and risks associated with campus housing.</p>

<p>Natural supports or peer mentors can provide varying levels of support within the residence halls to foster more inclusive opportunities as well as to ensure safety. The support needs for each student may differ and additional training may be needed within residence halls to support college students living and learning alongside students with ID.</p>

<p>This page&nbsp;offers a review of the existing resources related to campus housing, how students and families can best search for residential options across programs, proactive ways to address safety or liability concerns, and general campus housing logistics and outcomes.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7e764956-a076-4f64-8ad0-40fdf4bbf20a';
  $display->content['new-7e764956-a076-4f64-8ad0-40fdf4bbf20a'] = $pane;
  $display->panels['row1right'][0] = 'new-7e764956-a076-4f64-8ad0-40fdf4bbf20a';
  $pane = new stdClass();
  $pane->pid = 'new-8b675d4b-be10-4a8b-8ae0-072d3c8b6da2';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-Campus-Housing-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8b675d4b-be10-4a8b-8ae0-072d3c8b6da2';
  $display->content['new-8b675d4b-be10-4a8b-8ae0-072d3c8b6da2'] = $pane;
  $display->panels['row1right'][1] = 'new-8b675d4b-be10-4a8b-8ae0-072d3c8b6da2';
  $pane = new stdClass();
  $pane->pid = 'new-8f46b1f4-0446-4a03-9347-2740ddbfdacb';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 1,
    'nid' => '4348',
    'override_title' => 1,
    'override_title_heading' => 'h3',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8f46b1f4-0446-4a03-9347-2740ddbfdacb';
  $display->content['new-8f46b1f4-0446-4a03-9347-2740ddbfdacb'] = $pane;
  $display->panels['row1right'][2] = 'new-8f46b1f4-0446-4a03-9347-2740ddbfdacb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['campus_housing'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'college_based_transition_services_affinity_group';
  $page->task = 'page';
  $page->admin_title = 'College-based Transition Services Affinity Group';
  $page->admin_description = '';
  $page->path = 'ta-training/affinity-groups/college-based-transition-services';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_college_based_transition_services_affinity_group__panel';
  $handler->task = 'page';
  $handler->subtask = 'college_based_transition_services_affinity_group';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'College-based Transition Services Affinity Group';
  $display->uuid = 'bd4e026c-37b4-47c6-9e65-616342efbf7a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_college_based_transition_services_affinity_group__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-800e22eb-2b98-489f-8172-8639cafb5032';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'logo',
    'body' => '<p><img alt="College-based Transition Services Affinity Group Logo" class="img-responsive" src="/sites/default/files/images/CBTS-long.png" /></p>
<br />',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '800e22eb-2b98-489f-8172-8639cafb5032';
  $display->content['new-800e22eb-2b98-489f-8172-8639cafb5032'] = $pane;
  $display->panels['row1left'][0] = 'new-800e22eb-2b98-489f-8172-8639cafb5032';
  $pane = new stdClass();
  $pane->pid = 'new-28e8aa81-9d74-419a-9402-348411ce4c5b';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Maria Paiewonsky." class="center-block img-thumbnail img-responsive" src="/sites/default/files/images/maria-paiewonsky.png" style="width: 100px; height: 100px;" /></p>

<p><strong>Maria Paiewonsky,&nbsp;Ed.D.</strong></p>

<p>Program Manager/Transition Specialist for Think College</p>

<p><a href="mailto:Maria.Paiewonsky@umb.edu">Maria.Paiewonsky@umb.edu</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'AFFINITY GROUP FACILITATOR',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '28e8aa81-9d74-419a-9402-348411ce4c5b';
  $display->content['new-28e8aa81-9d74-419a-9402-348411ce4c5b'] = $pane;
  $display->panels['row1left'][1] = 'new-28e8aa81-9d74-419a-9402-348411ce4c5b';
  $pane = new stdClass();
  $pane->pid = 'new-645b9728-80e6-4bed-8905-c2f4184c0192';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Sign up to receive email updates for one or&nbsp;more Affinity Groups.</p>

<p><a class="btn btn-primary" href="https://nam10.safelinks.protection.outlook.com/?url=https%3A%2F%2Fforms.gle%2FJe4msZRDoko3MkTk9&amp;data=04%7C01%7CSheila.Johnson%40umb.edu%7C1c5ce26b3b6d4ecec8b708d97ed48538%7Cb97188711ee94425953c1ace1373eb38%7C0%7C0%7C637680273491490073%7CUnknown%7CTWFpbGZsb3d8eyJWIjoiMC4wLjAwMDAiLCJQIjoiV2luMzIiLCJBTiI6Ik1haWwiLCJXVCI6Mn0%3D%7C1000&amp;sdata=E3TaxZFtHcw4W624XgIs%2BDfhaV7nSEMX3EdrEpH2Gvo%3D&amp;reserved=0" role="button" target="_blank">Sign Up Now!</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'STAY INFORMED BY EMAIL',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '645b9728-80e6-4bed-8905-c2f4184c0192';
  $display->content['new-645b9728-80e6-4bed-8905-c2f4184c0192'] = $pane;
  $display->panels['row1left'][2] = 'new-645b9728-80e6-4bed-8905-c2f4184c0192';
  $pane = new stdClass();
  $pane->pid = 'new-934e79d5-74b1-4fc6-8589-3b0a3ba3e6c7';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_14';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'AffinityGroup-CBTS-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '934e79d5-74b1-4fc6-8589-3b0a3ba3e6c7';
  $display->content['new-934e79d5-74b1-4fc6-8589-3b0a3ba3e6c7'] = $pane;
  $display->panels['row1left'][3] = 'new-934e79d5-74b1-4fc6-8589-3b0a3ba3e6c7';
  $pane = new stdClass();
  $pane->pid = 'new-744b7aaa-d36a-49fb-be64-1b4690251144';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'intro',
    'body' => '<p class="lead">Welcome to the Think College ‘College-based Transition Services’ Affinity Group.</p>

<p>The purpose of this affinity group is to support members whose work involves supporting transition-aged students with intellectual or developmental disabilities who are or who would like to include college in their transition services. The group will be guided by members’ priority topics which will be determined through a survey and group check-ins at the online meetings.</p>

<p>Through this affinity group, we anticipate that members will:</p>

<ul>
	<li>Have a professional community where they can share successes but also get help addressing challenges related to college-based transition services (CBTS).</li>
	<li>Review administrative as well as training and technical assistance materials that are available and often customized for CBTS.</li>
	<li>Establish professional connections with others who are expanding this model of transition services.<br />
	&nbsp;</li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '744b7aaa-d36a-49fb-be64-1b4690251144';
  $display->content['new-744b7aaa-d36a-49fb-be64-1b4690251144'] = $pane;
  $display->panels['row1right'][0] = 'new-744b7aaa-d36a-49fb-be64-1b4690251144';
  $pane = new stdClass();
  $pane->pid = 'new-8b3331e3-133f-443f-b802-4c05279c35ec';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><strong><a href="http://nam10.safelinks.protection.outlook.com/?url=https%3A%2F%2Fcommunityinclusion.zoom.us%2Fj%2F622180688&amp;data=04%7C01%7CSheila.Johnson%40umb.edu%7C7dc81967b7754a00229208d97ed5ca6a%7Cb97188711ee94425953c1ace1373eb38%7C0%7C0%7C637680278945606850%7CUnknown%7CTWFpbGZsb3d8eyJWIjoiMC4wLjAwMDAiLCJQIjoiV2luMzIiLCJBTiI6Ik1haWwiLCJXVCI6Mn0%3D%7C1000&amp;sdata=FfockRhdZfJRkDJ8k7otCLA95cgA4%2FXA9zZ%2FNDzuFdw%3D&amp;reserved=0">Permanent Zoom meeting room</a></strong></p>

<p><strong><a href="http://nam10.safelinks.protection.outlook.com/?url=https%3A%2F%2Fdocs.google.com%2Fdocument%2Fd%2F19zakHT219iPcDtWqzLShQvx5iSGLpi7dHV5a8a3QxLk%2Fedit%3Fusp%3Dsharing&amp;data=04%7C01%7CSheila.Johnson%40umb.edu%7C7dc81967b7754a00229208d97ed5ca6a%7Cb97188711ee94425953c1ace1373eb38%7C0%7C0%7C637680278945606850%7CUnknown%7CTWFpbGZsb3d8eyJWIjoiMC4wLjAwMDAiLCJQIjoiV2luMzIiLCJBTiI6Ik1haWwiLCJXVCI6Mn0%3D%7C1000&amp;sdata=GI2zmAxTkaGyYNuIbg3QjeTZv%2BSKAIlmcYVWdSu4oMk%3D&amp;reserved=0">Rolling meeting agenda</a></strong>&nbsp;- all agendas and meeting notes can be found here.</p>

<p><strong>The group meets from 2-3pm ET, unless otherwise noted</strong></p>

<p>&nbsp;
<ul>
</ul>
</p>

<ul>
	<li>April 14, 2022
	<ul>
		<li>Topic: Partner perspectives in CBTS</li>
	</ul>
	</li>
	<li>June 9, 2022</li>
</ul>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Meeting Schedule',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8b3331e3-133f-443f-b802-4c05279c35ec';
  $display->content['new-8b3331e3-133f-443f-b802-4c05279c35ec'] = $pane;
  $display->panels['row1right'][1] = 'new-8b3331e3-133f-443f-b802-4c05279c35ec';
  $pane = new stdClass();
  $pane->pid = 'new-32a16cc9-1561-4081-bd42-a60eca67970e';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Past meeting dates&nbsp;</p>

<ul>
	<li>February 10, 2022</li>
	<li>December 9, 2021</li>
	<li>October 14, 2021</li>
	<li>April 11, 2021</li>
	<li>February 11, 2021</li>
	<li>November 12, 2020</li>
	<li>Wednesday, June 24, 2020</li>
	<li>April 29, 2020</li>
	<li>February 26, 2020</li>
	<li>December 18, 2019</li>
	<li>September 26, 2019</li>
</ul>

<p><strong><a href="https://docs.google.com/document/d/19zakHT219iPcDtWqzLShQvx5iSGLpi7dHV5a8a3QxLk/edit">Recordings and notes for all meetings are available here</a></strong></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'PAST MEETINGS',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '32a16cc9-1561-4081-bd42-a60eca67970e';
  $display->content['new-32a16cc9-1561-4081-bd42-a60eca67970e'] = $pane;
  $display->panels['row1right'][2] = 'new-32a16cc9-1561-4081-bd42-a60eca67970e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['college_based_transition_services_affinity_group'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'data_collection';
  $page->task = 'page';
  $page->admin_title = 'Data Collection';
  $page->admin_description = '';
  $page->path = 'about/tpsid/data-collection';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'perm',
        'not' => FALSE,
        'settings' => array(
          'perm' => 'access content',
        ),
      ),
      1 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 7,
            1 => 3,
            2 => 14,
          ),
        ),
      ),
    ),
  );
  $page->menu = array(
    'name' => 'main-menu',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => 'Data Collection',
    'type' => 'normal',
    'weight' => '0',
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_data_collection__panel';
  $handler->task = 'page';
  $handler->subtask = 'data_collection';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Data Collection';
  $display->uuid = 'aebeb5b9-e3fe-489b-b185-1cb1beb5a2b8';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_data_collection__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4dbdd35d-4f3a-4092-aeed-d15831cde871';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'banner',
    'body' => '<div class="leadbox row">
<div class="col-sm-5">
<script src="https://fast.wistia.com/embed/medias/5sbxy3m70f.jsonp" async></script><script src="https://fast.wistia.com/assets/external/E-v1.js" async></script><div class="wistia_responsive_padding" style="padding:56.25% 0 0 0;position:relative;"><div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><div class="wistia_embed wistia_async_5sbxy3m70f seo=false videoFoam=true" style="height:100%;position:relative;width:100%"><div class="wistia_swatch" style="height:100%;left:0;opacity:0;overflow:hidden;position:absolute;top:0;transition:opacity 200ms;width:100%;"><img src="https://fast.wistia.com/embed/medias/5sbxy3m70f/swatch" style="filter:blur(5px);height:100%;object-fit:contain;width:100%;" alt="" aria-hidden="true" onload="this.parentNode.style.opacity=1;" /></div></div></div></div>
</div>


<div class="col-sm-7">
<p>One of the most important responsibilities of receiving TPSID funding is reporting data to the National Coordinating Center on your programs and students. The NCC’s evaluation protocol – the Think College Data Network - was developed in 2010 and has been updated several times since. Data collected from TPSIDs are published in Annual Reports and other products.</p>

<p>On this page, we provide information on data collection and reporting. Start by watching the “Welcome to the Data Network” video. Below, you’ll find information on several key aspects of data reporting. We also respond to the most frequently asked questions about data collection and reporting. Let us know if you have further questions after reviewing these resources.</p>
</div>
</div>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4dbdd35d-4f3a-4092-aeed-d15831cde871';
  $display->content['new-4dbdd35d-4f3a-4092-aeed-d15831cde871'] = $pane;
  $display->panels['middle'][0] = 'new-4dbdd35d-4f3a-4092-aeed-d15831cde871';
  $pane = new stdClass();
  $pane->pid = 'new-f799003e-8a5d-4135-8839-05f811a2c4e2';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'square info boxes',
    'body' => '<div class="contact-page table-row">
<div class="col-md-4 equal-box">
<div class="icon-title"><em>&nbsp;</em>
<h3>What data are collected?</h3>
</div>

<div class="text">
<p>The TPSID Evaluation Protocol includes data collection on program characteristics, academic access, student supports, student demographics, course enrollments, employment and career development activities, and residential access. Data are also collected on outcomes of students who complete TPSID programs. For more information, see the <a href="/sites/default/files/files/Full_Eval_Tool_2021version102521.pdf">full evaluation tool</a>.</p>
</div>
</div>

<div class="col-md-4 equal-box">
<div class="icon-title"><em>&nbsp;</em>

<h3>Getting started</h3>
</div>

<div class="text">
<p>It’s important for TPSID project leaders to understand the data reporting requirements and process. The TPSID <a href="/sites/default/files/files/NCC_data_onboarding.pdf">Data Onboarding Process document</a> explains the responsibilities of PIs and co-PIs. To get started, complete <a href="https://forms.gle/Qpdv1C9r9B2xhUcL8">this form</a> to request a data entry account. You should also review the&nbsp;<a href="/sites/default/files/files/Data_Network_Launch_Dec2020.pdf">slides</a>&nbsp;and <a href="https://fast.wistia.net/embed/channel/e0vajbd98r?wchannelid=e0vajbd98r&amp;wvideoid=kefgylczeu">recording</a> from the Data Entry Webinar on 12/16/20.&nbsp;</p>
</div>
</div>

<div class="col-md-4 equal-box">
<div class="icon-title"><em>&nbsp;</em>

<h3>Data entry training</h3>
</div>

<div class="text">
<p>All data entry persons need to</p>

<ul>
	<li>Complete Data Entry Training by <a href="/tpsid-learning-channel">watching each video</a> and practicing in Quick Base</li>
	<li>Complete data entry certification quiz</li>
</ul>

<p>Once training is complete, a member of the NCC’s evaluation team will confirm that you are ready to begin entering data.</p>
</div>
</div>
</div>

<div class="contact-page table-row">
<div class="col-md-4 equal-box">
<div class="icon-title"><em>&nbsp;</em>

<h3>Data entry schedule</h3>
</div>

<div class="text">
<p>To make data reporting more manageable, we follow a <a href="/sites/default/files/files/Data_collection_schedule_2021_2022.pdf">data entry schedule</a> throughout each academic year. The schedule breaks up data entry to make it easier to stay on top of the reporting requirements. You will receive regular reminders when each data entry deadline is approaching. We recommend you download and print the schedule for easy reference!</p>
</div>
</div>

<div class="col-md-4 equal-box">
<div class="icon-title"><em>&nbsp;</em>

<h3>Follow-up data</h3>
</div>

<div class="text">
<p>Follow-up data on the outcomes of students who complete TPSID programs are some of the most important data you will report. You can learn more on the NCC’s outcome <a href="/tpsid/follow-data">data collection webpage</a>. TPSIDs are required to contact students who completed their programs annually for a period of 5 years after program completion.</p>
</div>
</div>

<div class="col-md-4 equal-box">
<div class="icon-title"><em>&nbsp;</em>

<h3>Important resources</h3>
</div>

<div class="text">
<p>These documents will assist you in understanding key aspects of data reporting:</p>

<ul>
	<li><a href="/resource/federal-student-aid-federal-legislation-ctp-application-process/defining-and-documenting">Defining and Documenting Intellectual Disability</a> explains the definition and documentation of ID.&nbsp;</li>
	<li>The <a href="/sites/default/files/files/Inclusive_vs_specialized_course_decision%20tree_020717.pdf">Inclusive course decision tree</a> is used to determine if a course can be considered a fully inclusive class.</li>
	<li>The <a href="https://thinkcollege.net/resource/tpsid-data-collection-resources">data collection resources</a> page has Excel files to assist with data collection.&nbsp;</li>
</ul>
</div>
</div>
</div>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f799003e-8a5d-4135-8839-05f811a2c4e2';
  $display->content['new-f799003e-8a5d-4135-8839-05f811a2c4e2'] = $pane;
  $display->panels['middle'][1] = 'new-f799003e-8a5d-4135-8839-05f811a2c4e2';
  $pane = new stdClass();
  $pane->pid = 'new-b5e4e800-79e7-4769-9574-09a03aace179';
  $pane->panel = 'middle';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 1,
    'nid' => '4607',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'FREQUENTLY ASKED QUESTIONS',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b5e4e800-79e7-4769-9574-09a03aace179';
  $display->content['new-b5e4e800-79e7-4769-9574-09a03aace179'] = $pane;
  $display->panels['middle'][2] = 'new-b5e4e800-79e7-4769-9574-09a03aace179';
  $pane = new stdClass();
  $pane->pid = 'new-a92a87a1-8e87-497c-b20f-ddb775a2a2ae';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'team block',
    'body' => '<p>&nbsp;</p>

<h3 class="pane-title">Meet your evaluation team</h3>

<div class="col-md-4 is-table-cell">
<div class="box-light-blue">
<h3 class="box-title">Clare Papay</h3>

<p>Evaluation Coordinator<br />
<a class="whitelink" href="mailto:Clare.papay@umb.edu">Clare.papay@umb.edu</a></p>
<img alt="Clare Papay" class="img-responsive" src="/sites/default/files/images/Clare-Papay-700.jpg" /></div>
</div>

<div class="col-md-4 is-table-cell">
<div class="box-light-blue">
<h3 class="box-title">Pamela McFarland</h3>

<p>Data Manager<br />
<a class="whitelink" href="mailto:Pamela.mcfarland@umb.edu">Pamela.mcfarland@umb.edu</a></p>
<img alt="Pam McFarland" class="img-responsive" src="/sites/default/files/images/Pam-McFarland.jpg" /></div>
</div>

<div class="col-md-4 is-table-cell">
<div class="box-light-blue">
<h3 class="box-title">Belkis Choiseul-Praslin</h3>

<p>Research Associate II<br />
<a class="whitelink" href="mailto:B.Choiseul-Praslin@umb.edu">B.Choiseul-Praslin@umb.edu</a></p>
<img alt="Daria Domin" class="img-responsive" src="/sites/default/files/images/Choiseul-Praslin.jpg" /></div>
</div>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-pane ',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a92a87a1-8e87-497c-b20f-ddb775a2a2ae';
  $display->content['new-a92a87a1-8e87-497c-b20f-ddb775a2a2ae'] = $pane;
  $display->panels['middle'][3] = 'new-a92a87a1-8e87-497c-b20f-ddb775a2a2ae';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['data_collection'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'data_collection_tools';
  $page->task = 'page';
  $page->admin_title = 'Data Collection Tools';
  $page->admin_description = '';
  $page->path = 'tpsid/data-collection-tools';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_data_collection_tools__panel';
  $handler->task = 'page';
  $handler->subtask = 'data_collection_tools';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Data Collection Tools';
  $display->uuid = 'b1366417-1f5e-4d4d-9555-c10029cfa23e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_data_collection_tools__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3a8c7151-b959-420d-a49c-b622c89c8f61';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'block1',
    'body' => '<p>Dummy Text</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Block 1',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3a8c7151-b959-420d-a49c-b622c89c8f61';
  $display->content['new-3a8c7151-b959-420d-a49c-b622c89c8f61'] = $pane;
  $display->panels['row1left'][0] = 'new-3a8c7151-b959-420d-a49c-b622c89c8f61';
  $pane = new stdClass();
  $pane->pid = 'new-0a5ca8fe-006f-4fda-9ede-7df7b087380c';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'block2',
    'body' => '<p>Dummy Text</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Block 2',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0a5ca8fe-006f-4fda-9ede-7df7b087380c';
  $display->content['new-0a5ca8fe-006f-4fda-9ede-7df7b087380c'] = $pane;
  $display->panels['row1left'][1] = 'new-0a5ca8fe-006f-4fda-9ede-7df7b087380c';
  $pane = new stdClass();
  $pane->pid = 'new-b64af912-b0d1-48b0-acc9-a63801e7fb34';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'TpsidDataCollection-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b64af912-b0d1-48b0-acc9-a63801e7fb34';
  $display->content['new-b64af912-b0d1-48b0-acc9-a63801e7fb34'] = $pane;
  $display->panels['row1left'][2] = 'new-b64af912-b0d1-48b0-acc9-a63801e7fb34';
  $pane = new stdClass();
  $pane->pid = 'new-9ac60e47-74e4-4f44-96e2-f56b250f3832';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'intro',
    'body' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris vel pretium ipsum. Aenean lobortis efficitur placerat. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla ut venenatis nunc. Aenean ipsum sem, dictum vitae suscipit eget, cursus id orci. Nam in elementum eros. Donec rhoncus dui sed ullamcorper cursus. Morbi faucibus sollicitudin faucibus. Phasellus vel varius enim.</p>

<p>Maecenas at justo in tellus laoreet consequat quis sit amet nunc. Fusce facilisis nunc semper, fringilla metus in, dignissim est. Donec diam urna, blandit quis turpis ac, ullamcorper congue libero. Morbi quis consequat neque. Quisque vel massa eleifend mi mattis accumsan. Aliquam velit mi, bibendum vitae euismod quis, fermentum elementum erat. Maecenas pretium lectus placerat, venenatis odio vel, pellentesque nisl. Nam finibus efficitur sem et pulvinar. Sed molestie viverra erat, nec fringilla justo placerat et. Quisque vehicula sem dolor, ac mollis metus posuere in. Proin commodo imperdiet sapien at tincidunt.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9ac60e47-74e4-4f44-96e2-f56b250f3832';
  $display->content['new-9ac60e47-74e4-4f44-96e2-f56b250f3832'] = $pane;
  $display->panels['row1right'][0] = 'new-9ac60e47-74e4-4f44-96e2-f56b250f3832';
  $pane = new stdClass();
  $pane->pid = 'new-58a4dc3e-0ab5-4ee1-ba06-ecb620526b47';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'TpsidDataCollection-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '58a4dc3e-0ab5-4ee1-ba06-ecb620526b47';
  $display->content['new-58a4dc3e-0ab5-4ee1-ba06-ecb620526b47'] = $pane;
  $display->panels['row1right'][1] = 'new-58a4dc3e-0ab5-4ee1-ba06-ecb620526b47';
  $pane = new stdClass();
  $pane->pid = 'new-088e90fd-43e9-4768-aae2-06407054581e';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '4588',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'FREQUENTLY ASKED QUESTIONS',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '088e90fd-43e9-4768-aae2-06407054581e';
  $display->content['new-088e90fd-43e9-4768-aae2-06407054581e'] = $pane;
  $display->panels['row1right'][2] = 'new-088e90fd-43e9-4768-aae2-06407054581e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['data_collection_tools'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'emerging_advocates_group';
  $page->task = 'page';
  $page->admin_title = 'Emerging Advocates Group';
  $page->admin_description = '';
  $page->path = 'ta-training/affinity-groups/advocates';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_emerging_advocates_group__panel';
  $handler->task = 'page';
  $handler->subtask = 'emerging_advocates_group';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Emerging Advocates Group';
  $display->uuid = 'd5cbfa0c-b264-472d-a6d8-279ed50602c3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_emerging_advocates_group__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-825d3518-a958-4965-87f2-6ce1f7360e55';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'logo',
    'body' => '<p><img alt="Emerging Advocates affinity group logo" class="img-responsive" src="/sites/default/files/images/Emerging%20Advocates.png" /></p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '825d3518-a958-4965-87f2-6ce1f7360e55';
  $display->content['new-825d3518-a958-4965-87f2-6ce1f7360e55'] = $pane;
  $display->panels['row1left'][0] = 'new-825d3518-a958-4965-87f2-6ce1f7360e55';
  $pane = new stdClass();
  $pane->pid = 'new-01a1768c-633a-43fe-b969-45f342c58687';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>&nbsp;</p>

<p><img alt="" src="/sites/default/files/images/weintraub_liz_web2019w.jpeg" style="width: 111px; height: 111px;" /></p>

<p><strong>Liz Weintraub</strong></p>

<p>Senior Advocacy Specialist at Association of University Centers on Disabilities, or AUCD.</p>

<p><a href="mailto:lweintraub@AUCD.org" title="mailto:lweintraub@AUCD.org">lweintraub@AUCD.org</a>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'GROUP FACILITATOR',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '01a1768c-633a-43fe-b969-45f342c58687';
  $display->content['new-01a1768c-633a-43fe-b969-45f342c58687'] = $pane;
  $display->panels['row1left'][1] = 'new-01a1768c-633a-43fe-b969-45f342c58687';
  $pane = new stdClass();
  $pane->pid = 'new-dcda1b48-637d-4d6f-afeb-749ec0205d83';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Want emails about the Emerging Advocate Group meetings and happenings?</p>

<p><a class="btn btn-primary" href="https://docs.google.com/forms/d/e/1FAIpQLSeySehuFFTp9mx7xGjUFfBG-iWohpxsxudbmnFdliE7esa6fw/viewform" role="button" target="_blank">Click to Sign Up!</a></p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'STAY INFORMED',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dcda1b48-637d-4d6f-afeb-749ec0205d83';
  $display->content['new-dcda1b48-637d-4d6f-afeb-749ec0205d83'] = $pane;
  $display->panels['row1left'][2] = 'new-dcda1b48-637d-4d6f-afeb-749ec0205d83';
  $pane = new stdClass();
  $pane->pid = 'new-4cc90a39-e787-40cc-94e6-04dbc25c8a50';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'AffinityGroup-EmergingAdvocates-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4cc90a39-e787-40cc-94e6-04dbc25c8a50';
  $display->content['new-4cc90a39-e787-40cc-94e6-04dbc25c8a50'] = $pane;
  $display->panels['row1left'][3] = 'new-4cc90a39-e787-40cc-94e6-04dbc25c8a50';
  $pane = new stdClass();
  $pane->pid = 'new-cc59ca67-f46f-47e7-b35a-2b1a18def72e';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<h3><strong>Welcome to the Think College Emerging Advocates Group for Students!</strong></h3>

<p>In April&nbsp;2019,&nbsp;a group of college students with disabilities came to Washington, DC to advocate for the Higher Education Act. They advocated with staff from inclusive college&nbsp;programs&nbsp;and others. This was very&nbsp;exciting to see, so this Emerging Advocates group was created&nbsp;for students with disabilities to talk with others so they could continue&nbsp;to share ideas and learn tips together about advocacy.&nbsp;</p>

<p>That initial group has grown to include dozens of emerging leaders who get together on quarterly calls, and we welcome new members.&nbsp;This group is led by and for people with disabilities. Of course, supporters are welcome.</p>

<p><b>Click the sign up button if you would like to receive email about this group\'s meeting dates and other information.</b></p>

<p><a class="btn btn-primary" href="https://docs.google.com/forms/d/e/1FAIpQLSeySehuFFTp9mx7xGjUFfBG-iWohpxsxudbmnFdliE7esa6fw/viewform" role="button" target="_blank">Click to Sign Up!</a></p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'intro',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cc59ca67-f46f-47e7-b35a-2b1a18def72e';
  $display->content['new-cc59ca67-f46f-47e7-b35a-2b1a18def72e'] = $pane;
  $display->panels['row1right'][0] = 'new-cc59ca67-f46f-47e7-b35a-2b1a18def72e';
  $pane = new stdClass();
  $pane->pid = 'new-7a2b4cdd-0d13-435e-a5a1-ed5c166968cf';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<h3><strong>The next meeting is Thursday, March 10 from 2:00-3pm ET.&nbsp; The topic of the meeting is how students feel about this group.</strong></h3>

<p><strong><a data-mce-href="https://communityinclusion.zoom.us/meeting/register/tJAtde6urD0jE9AMHJ9g4mhwD_tDd_eabSV_" href="https://communityinclusion.zoom.us/meeting/register/tJAtde6urD0jE9AMHJ9g4mhwD_tDd_eabSV_">Sign up for the March meeting by clicking here</a>.</strong></p>

<p><strong>We will talk about how you feel about being part of this group. This is a message from Liz who coordinates the group:</strong><br />
<br />
<em>Some of my co-workers and I have all been talking about if these calls are useful to you all.</em><br />
<br />
<em>We want you to come tell us what YOU think.</em><br />
<br />
<em>It’s REALLY ok to say what you think; in fact that’s part of self-advocacy, telling others what YOU need and what’s NOT working for you.</em><br />
<br />
<em>On the call we will talk about what you like about these calls and what you want to change so it can be BETTER for you and your friends. Because these calls are for YOU … NOT for us.</em><br />
<br />
<em>We will ask these 3 question and want you to think about them now. It would be good for you to be prepared to share your thoughts.</em><br />
<br />
<em>1. What do you like about these calls?</em><br />
<em>2. What do you want from these calls?</em><br />
<em>3. What don\'t you like about these calls?</em><br />
<br />
<em>Please bring some notes!</em><br />
<br />
If you want to know more, you can email Liz at lweintraub@aucd.org.&nbsp;</p>

<p>2022 Meeting Schedule</p>

<p>We will have a meeting on Tuesday, May 3&nbsp;from 2-3pm ET. We will also have a meeting on Monday, September 26 from 2-3pm ET.</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Meeting Schedule',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7a2b4cdd-0d13-435e-a5a1-ed5c166968cf';
  $display->content['new-7a2b4cdd-0d13-435e-a5a1-ed5c166968cf'] = $pane;
  $display->panels['row1right'][1] = 'new-7a2b4cdd-0d13-435e-a5a1-ed5c166968cf';
  $pane = new stdClass();
  $pane->pid = 'new-5df17415-1460-4381-85e3-d04978065871';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<h2>Date: December 8, 2021</h2>

<h3><strong>Title</strong>: Picking Topics<br />
<strong>Host</strong>:&nbsp;Liz Weintraub</h3>

<p><strong>What happened:&nbsp;</strong>The students shared ideas about who they want to invite for special guest speakers for future meetings. They mentioned a few names and Liz is going to follow up to see who will be a guest.</p>

<div class="wistia_responsive_padding" style="padding:56.25% 0 0 0;position:relative;">
<div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><iframe allow="autoplay; fullscreen" allowtransparency="true" class="wistia_embed" frameborder="0" height="100%" msallowfullscreen="" name="wistia_embed" scrolling="no" src="https://fast.wistia.net/embed/iframe/gwsidj6qr7?videoFoam=true" title="Emerging Advocates Group 12-08-2021 Video" width="100%"></iframe></div>
</div>
<script src="https://fast.wistia.net/assets/external/E-v1.js" async></script>

<p>&nbsp;</p>

<hr />
<h2>Date: September 23, 2021</h2>

<h3><strong>Title: </strong>A discussion with disability rights activist Judy Heumann</h3>

<p><strong>Presenter: </strong>Judy Heumann</p>

<p><strong>Host: </strong>Liz Weintraub and Majolyn (a junior at Hostos Community College)</p>

<p><strong>What happened:</strong> Students spent over an hour asking Judy questions about the advocacy that she has done during her life. Judy answered every question. This was a really fun meeting. All of the students were very excited to meet Judy. There was a lot of laughter too! Watch the video below to see what happened. <strong><a href="https://thinkcollege.net/sites/default/files/files/resources/Transcript-Emerging%20Advocates%20with%20guest%20Judy%20Heumann_September23.docx">You can also read what happened by clicking this link. It will download a Word doc.</a></strong></p>

<div class="wistia_responsive_padding" style="padding:56.25% 0 0 0;position:relative;">
<div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><iframe allow="autoplay; fullscreen" allowfullscreen="" allowtransparency="true" class="wistia_embed" frameborder="0" height="100%" msallowfullscreen="" name="wistia_embed" scrolling="no" src="https://fast.wistia.net/embed/iframe/w978xw1jug?videoFoam=true" title="Judy session Video" width="100%"></iframe></div>
</div>
<script src="https://fast.wistia.net/assets/external/E-v1.js" async></script>

<h2>&nbsp;</h2>

<hr />
<h2><strong>Date: December 20, 2020</strong></h2>

<h3><strong>Title: </strong>A discussion with students about COVID-19&nbsp;</h3>

<p><strong>Host:</strong> Liz Weintraub</p>

<p><strong>What happened: </strong>Students from 6 different colleges joined the group. The group talked about what good came from the pandemic and what they were looking forward to when things get back to normal.</p>

<p>We did not have a guest presenter. We do not have a recording or transcript from this meeting.</p>

<p>&nbsp;</p>

<hr />
<h2><strong>Date: September 10, 2020</strong></h2>

<h3><strong>Topic: </strong>A discussion about voting</h3>

<p><strong>Hosted:</strong>&nbsp;Liz Weintraub and Lauren, Liz’s co-worker</p>

<p>What happened: Liz and Lauren made a presentation on how to how to register to vote and how to vote safely. They also told students good ways to learn about the people running for office and more. Watch the video to learn more.</p>

<p><a href="http://thinkcollege.net/sites/default/files/files/resources/toshare_emergingadvocates_voting.pdf">Check out Liz and Lauren\'s PowerPoint slides by clicking here.</a></p>

<p>&nbsp;</p>

<div class="wistia_responsive_padding" style="padding:50.0% 0 0 0;position:relative;">
<div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><iframe allow="autoplay; fullscreen" allowfullscreen="" allowtransparency="true" class="wistia_embed" frameborder="0" height="100%" msallowfullscreen="" name="wistia_embed" scrolling="no" src="https://fast.wistia.net/embed/iframe/y2nhyzz7nz?videoFoam=true" title="Emerging Advocates Affinity Group 09-10-2020 Video" width="100%"></iframe></div>
</div>
<script src="https://fast.wistia.net/assets/external/E-v1.js" async></script>

<p>&nbsp;</p>

<hr />
<h2><strong>Date: December 3, 2019</strong></h2>

<h3><strong>Title: </strong>A discussion about the 2019&nbsp;elections</h3>

<p><strong>Host: </strong>Liz Weintraub</p>

<p><strong>What happened: </strong>Students talked about the things that they care about for the election. Liz did a presentation on PowerPoint slides. They talked about how the election addressed disabilities and about disability laws. &nbsp;The group also learned about a program called the <a href="https://thinkcollege.net/think-college-news/what-are-think-college-policy-advocates-and-how-can-you-become-one">Think College Policy Advocates</a>. This a group of students who do political advocacy. Click here to learn more about the Policy Advocates.&nbsp;<span style="background:white"><span style="font-family:&quot;Lato&quot;,serif"><span style="color:#333333">You can watch the video below to see what happened in the meeting. </span></span></span></p>

<p style="text-align:start; -webkit-text-stroke-width:0px"><a href="https://thinkcollege.net/sites/default/files/files/resources/Emerging%20Advocates%20Call%20FINAL-120319.pdf" target="_blank">Check out Liz\'s PowerPoint presentation slides by clicking here</a>.</p>

<div class="wistia_responsive_padding" style="padding:56.25% 0 0 0;position:relative;">
<div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><iframe allow="autoplay; fullscreen" allowfullscreen="" allowtransparency="true" class="wistia_embed" frameborder="0" height="100%" msallowfullscreen="" name="wistia_embed" scrolling="no" src="https://fast.wistia.net/embed/iframe/57uuiv6pm1?videoFoam=true" title="Emerging Advocates Affinity Group 12-03-2019 Video" width="100%"></iframe></div>
</div>
<script src="https://fast.wistia.net/assets/external/E-v1.js" async></script>

<p>&nbsp;</p>

<hr />
<h2><strong>Date: September 19, 2019</strong></h2>

<h3><strong>Title:</strong> A discussion about advocacy</h3>

<p><strong>Host: </strong>Liz Weintraub</p>

<p><strong>What happened: </strong>Liz did a PowerPoint presentation. The students talked about what advocacy means. They talked about how to advocate for yourself. They shared that registering to vote is one way to create change. You can watch the video below to learn more.</p>

<p><strong><a href="https://thinkcollege.net/sites/default/files/files/resources/Emerging%20Advocates%20call_Sept%202019%20-%20%20Read-Only.pdf">Check out Liz\'s PowerPoint presentation slides by clicking here.</a></strong></p>

<div class="wistia_responsive_padding" style="padding:53.13% 0 0 0;position:relative;">
<div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;">
<div class="wistia_responsive_padding" style="padding:53.13% 0 0 0;position:relative;">
<div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><iframe allow="autoplay; fullscreen" allowfullscreen="" allowtransparency="true" class="wistia_embed" frameborder="0" height="100%" msallowfullscreen="" name="wistia_embed" scrolling="no" src="https://fast.wistia.net/embed/iframe/7edh0bkjio?videoFoam=true" title="Emerging Advocates Affinity Group 09-19-2019 Video" width="100%"></iframe></div>
</div>
<script src="https://fast.wistia.net/assets/external/E-v1.js" async></script>

<p>&nbsp;</p>

<p>Date: April 16, 2019 TBA</p>
</div>
</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'LEARN ABOUT OUR PAST MEETINGS',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5df17415-1460-4381-85e3-d04978065871';
  $display->content['new-5df17415-1460-4381-85e3-d04978065871'] = $pane;
  $display->panels['row1right'][2] = 'new-5df17415-1460-4381-85e3-d04978065871';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['emerging_advocates_group'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'ta-training/events';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events__panel';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ee813620-0f79-40e7-a4fa-d6a8b6d071d0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_events__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b0b18912-4581-4c24-a566-a7649c781c69';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'quicktabs-events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b0b18912-4581-4c24-a566-a7649c781c69';
  $display->content['new-b0b18912-4581-4c24-a566-a7649c781c69'] = $pane;
  $display->panels['middle'][0] = 'new-b0b18912-4581-4c24-a566-a7649c781c69';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'family_resources_clone';
  $page->task = 'page';
  $page->admin_title = 'Family Resources Clone';
  $page->admin_description = '';
  $page->path = 'family-resources-clone';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_family_resources_clone__panel';
  $handler->task = 'page';
  $handler->subtask = 'family_resources_clone';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'center' => NULL,
      'default' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3865c94c-ab96-4fe4-bf71-a13fd46a84e6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_family_resources_clone__panel';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_family_resources_clone__panel_context_814c9750-0f8a-4436-8568-72f3e6bdea93';
  $handler->task = 'page';
  $handler->subtask = 'family_resources_clone';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => '',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_multipass';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Family Resources';
  $display->uuid = '407216a2-4012-4a41-ad77-fd495d116173';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_family_resources_clone__panel_context_814c9750-0f8a-4436-8568-72f3e6bdea93';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4884d4ae-d555-4b2e-aa01-694faa7cf5ae';
  $pane->panel = 'row2';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'banner',
    'body' => '<style type="text/css">.box-light-blue {
    background: #4C8EC9!important;
    padding: 30px 20px 30px 20px;
    margin-bottom: 30px;
    z-index: 1; }

.box-light-blue .box-title {
    font-weight: 600;
color: white;
    font-size: 36px !important;
    padding: 0;
}

.box-light-blue .border {
    background: #fff;
    width: 80%;
    display: block;
    height: 8px;

}
.box-light-blue p{
    font-size: 19px !important;
    line-height: 30px !important;
    color:#fff;}

.blue .is-table-cell {
    background: #4C8EC9;

}


    .leadbox {background-color: #4c8ec9;
    padding: 20px;
    color: #fff;
    margin: 10px 0px;
}
.leadbox .lead {color:#fff;font-weight: 700;}
.leadbox a { color: #069;
    background-color: #f2f2f2;}
.contact-page .icon-title h2 {
    display: inline;
}
.box-light-blue .border {
    background: #fff;
    width: 80%;
    display: block;
    height: 8px;
}
.contact-page .icon-title {
    text-align: top;
    border-bottom: 1px solid #ccc;
    padding-bottom: 5px;
    margin-bottom: 10px;}

a.orange {
    color: #fff;
    background: #e56814;
    padding: 0px 10px;
    border-radius: 5px;
    margin-right: 10px;
    display: inline-block;
    clear: both;
}
</style>
<div class="row leadbox">
<div class="col-sm-5">
<p><img alt="Family resources collage banner" class="img-responsive" src="/sites/default/files/files/images/family-resources-banner.png" /></p>
</div>

<div class="col-sm-7">
<p><span class="lead">As the parent or family member</span> of a young adult with&nbsp;intellectual disabilities, you may have heard a bit about Think College or seen videos or articles describing how students with Down syndrome and other intellectual disabilities are attending colleges and universities all over the United States.</p>

<p>But if you are like a many parents we talk to, you have a lot of questions.&nbsp; We put this page together to respond to many of the most frequently asked questions and address some of the most important topics related to postsecondary education options for students with intellectual disabilities.</p>

<p>If you have questions after reviewing these resources, feel free to contact us at&nbsp;<strong><a href="mailto:thinkcollegeTA@gmail.com">thinkcollegeTA@gmail.com</a></strong>.&nbsp; We love talking to families and students!</p>
</div>
</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4884d4ae-d555-4b2e-aa01-694faa7cf5ae';
  $display->content['new-4884d4ae-d555-4b2e-aa01-694faa7cf5ae'] = $pane;
  $display->panels['row2'][0] = 'new-4884d4ae-d555-4b2e-aa01-694faa7cf5ae';
  $pane = new stdClass();
  $pane->pid = 'new-bad6947e-180d-4b80-974d-d34c1d143e78';
  $pane->panel = 'row2';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'square info boxes',
    'body' => '<div class="row contact-page is-table-row">
<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-mortar-board fa-3x" data-original-title="Email us" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>
<h2>Is College Possible?</h2>
</div>

<div class="text">
<p>These resources share stories and images of students with ID are accessing college.</p>

<ul>
	<li><a href="https://thinkcollege.net/resource-search?sort=field_resourc_publication_date&amp;order=desc&amp;f%5B0%5D=field_resourc_publication_types%3A1504&amp;f%5B1%5D=field_resourc_publication_types%3A1507">Think College Stories</a>&nbsp;&nbsp;</li>
	<li><a href="https://thinkcollege.net/resources/think-college-public-awareness">Think College Public Awareness videos</a>&nbsp;</li>
	<li><a href="https://rubysrainbow.org/press-kit/">Scholarship Winners with Down syndrome</a>&nbsp;</li>
</ul>
</div>
</div>
</div>

<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-th-list fa-3x" data-original-title="Join us on Facebook" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>

<h2>How to Prepare</h2>
</div>

<div class="text">
<p>Students in middle school and high school can be working on preparing for college!</p>

<ul>
	<li>Suggested <a href="https://thinkcollege.net/resource/transition-planning/transition-iep-goals-and-activities-prepare-inclusive-postsecondary">IEP Goals</a> that help students get ready for college&nbsp;&nbsp;</li>
	<li><a href="https://thinkcollege.net/resource/transition-planning/preparing-your-son-or-daughter-college-suggestions-parents-children">Suggestions for Parents</a> to help students prepare for college&nbsp;</li>
	<li>Twenty Powerful Strategies to <a href="https://thinkcollege.net/resource/transition-planning/20-powerful-strategies-prepare-postsecondary-education">prepare for college&nbsp;</a></li>
</ul>
</div>
</div>
</div>

<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-folder fa-3x" data-placement="top" data-toggle="tooltip" title="What is Needed?">&nbsp;</i>

<h2>What is Needed?</h2>
</div>

<div class="text">
<p>If your son or daughter is thinking of applying, there are some things they will need:</p>

<ul>
	<li>Documentation of intellectual disability</li>
	<li>Evaluations that show support needs</li>
	<li>They do <strong>NOT</strong> need</li>
	<li>A regular high school diploma</li>
	<li>SAT or ACT scores</li>
</ul>
</div>
</div>
</div>
</div>

<div class="row contact-page is-table-row">
<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-dollar fa-3x" data-placement="top" data-toggle="tooltip" title="Can I afford it?">&nbsp;</i>

<h2>Can I afford it?</h2>
</div>

<div class="text">
<p>We have put together a page with lots of information to help you learn more about <a href="https://thinkcollege.net/resources/innovation-exchange/paying-for-college">how to pay for college</a></p>
</div>
</div>
</div>

<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-search fa-3x" data-original-title="How do we find the right college?" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>

<h2>How do we find the right college?</h2>
</div>

<div class="text">
<ul>
	<li>Look at our <a href="https://thinkcollege.net/college-search">College Search</a> listings – sort by state, residential options, etc.</li>
	<li>Once you have a list of possibilities, contact the program to ask questions and schedule a campus visit if possible</li>
	<li>Use our <a href="https://thinkcollege.net/sites/default/files/files/resources/HowTo%20TC_F.pdf">How To Guide on Conducting a College Search [PDF]</a></li>
	<li>Contact us at <a href="mailto:thinkcollegeTA@gmail.com">thinkcollegeTA@gmail.com</a>&nbsp;if you need more information or help deciding on the best fit.&nbsp;</li>
</ul>
</div>
</div>
</div>

<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-level-up fa-3x" data-original-title="Differences Between High School and College" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>

<h2>Differences Between High School and College</h2>
</div>

<div class="text">
<p>The transition to college is a big one – here are some resources to help understand the most important differences.</p>

<ul>
	<li>Supports for Students with Disabilities: <a href="https://thinkcollege.net/resource/transition-planning/differences-between-high-school-and-college">High School vs. College</a>&nbsp;</li>
	<li>Understanding <a href="https://thinkcollege.net/resource/federal-legislation-policies-and-practices/communicating-your-student%E2%80%99s-college-under">Family Educational Rights and Privacy Act for College Students</a>&nbsp;</li>
	<li>Transitioning to College: <a href="https://thinkcollege.net/sites/default/files/files/resources/48_tip%20for%20parents%20transitioning%20to%20college.pdf">Tips for Parents [PDF]</a></li>
	<li><a href="https://youtu.be/EGNis7hSjwM">Parents Discuss the Differences between HS and College [video]&nbsp;</a></li>
</ul>
</div>
</div>
</div>
</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bad6947e-180d-4b80-974d-d34c1d143e78';
  $display->content['new-bad6947e-180d-4b80-974d-d34c1d143e78'] = $pane;
  $display->panels['row2'][1] = 'new-bad6947e-180d-4b80-974d-d34c1d143e78';
  $pane = new stdClass();
  $pane->pid = 'new-c894dc26-a15b-4793-8fd5-598071fe7291';
  $pane->panel = 'row2';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Blue boxes',
    'body' => '<div class="box-container row is-table-row blue">
      <div class="col-md-4 is-table-cell">
   <div class="box-light-blue ">
           <h3 class="box-title">Rethinking College</h3>
           <span class="border"></span>
           <p>Rethinking College is a 25-minute ﬁlm produced by Think College that explores the growing movement to include students with intellectual disability in higher education.</p>
           <p>Watch the Trailer</p>
<script src="https://fast.wistia.com/embed/medias/e5dev40j5n.jsonp" async></script><script src="https://fast.wistia.com/assets/external/E-v1.js" async></script>

<div class="wistia_responsive_padding" style="padding:55.0% 0 0 0;position:relative;">
<div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><span class="wistia_embed wistia_async_e5dev40j5n popover=true popoverAnimateThumbnail=true videoFoam=true" style="display:inline-block;height:100%;width:100%">&nbsp;</span></div>
</div>
<br />
          <a href="https://thinkcollege.net/resources/rethinking-college" class="orange pull-right">LEARN MORE</a>        </div>
      </div>

      <div class="col-md-4 is-table-cell">
          <div class="box-light-blue">
         <h3 class="box-title">Facebook Group for Parents</h3>
         <span class="border"></span>
         <br />
         <img src="https://dsc.cloud/hoodieweather/families_F.png" class="img-responsive"/>
           <p>Think College has a Families Facebook group for family members and students to connect with each other with questions and comments about college preparation, college search and college attendance.  Join this group to share stories and get advice from one another.  </p>
           <a href="https://www.facebook.com/groups/1065141630294756/?source_id=60511340871" class="orange pull-right">JOIN NOW</a>  `

         </div>
         </div>

      <div class="col-md-4 is-table-cell">
 <div class="box-light-blue">
            <h3 class="box-title">Ask Think College</h3>
            <span class="border centered mid"></span>
<br />
<div class="icon-title"><p style="text-align: center"><i aria-hidden="true" class="fa fa-users fa-5x" data-placement="top" data-toggle="tooltip" title="" data-original-title="Ask Think College">&nbsp;</i></p>

            <p>We have <strong><a class="link-darker" href="https://thinkcollege.net/technical-assistance/technical-assistance-providers">staff at Think College</a></strong> who can talk to you via email or&nbsp; phone to&nbsp; answer all your questions related to college options for your son or daughter with intellectual disabilities.&nbsp; Contact us at <strong><a href="mailto:thinkcollegeTA@gmail.com" class="link-darker">thinkcollegeTA@gmail.com</a></strong>.</p>

             <a href="https://thinkcollege.net/technical-assistance/technical-assistance-providers" class="orange pull-right">LEARN MORE</a>

           </div>
           </div>

 </div>

<hr />

   <!--
	    <div class="well list clear-fix">

    <h3>Think College: Transition Checklist </h3>

	    <p>This checklist is designed to give family members an easy to use list of topics that should be taken into consideration when discussing transition from high school to college.</p>
<ul class="ckecklist">
<li>Help your student know what choices they have.&nbsp; Visit programs, talk to other students, families,watch videos, etc.</li>
<li>Set post secondary education &amp; career goals through the use of person-centered planning.</li>
<li>Ensure that your son/daughter is enrolled in academic courses throughout high school, which will prepare him/her for college courses. While not a requirement, experience tells us that students with more inclusive academic experiences in high school do better once in college.</li>
<li>Know the difference between the laws that govern education at the secondary level (IDEA =entitlement) and at the college level (ADA = otherwise qualified). (See the Differences Between HS and College on this site).</li>
<li>Encourage your daughter/son to attend and participate in their own Individual Education Plan.Participation means planning the meeting, working with a teacher to identify their own goals and supports, presenting about their goals at the meeting, welcoming the team, learning about the forms.</li>
<li>Help your son/daughter learn to advocate for him/herself while in high school, which will prepare him/her for when it needs to be done in college.</li>
<li>Obtain college catalogue(s) and review them carefully with your son/daughter and with support from high school staff (e.g., guidance counselor, transition coordinator), as needed.&nbsp; Visit campus activities while in middle or high school, sports, recreational, entertainment activities. Have a currently enrolled student get involved in the campus visit or activity.</li>
<li>Ensure that documentation of your son or daughter&rsquo;s disability is up-to-date. This may be required by the college.</li>
<li>Discuss with your son/daughter the nature of their disability and how it affects their school work.Practice how they refer to their disability and identify what supports they need</li>
<li>Encourage teachers to document what accommodations and technology your son/daughter uses now and what they may need in college (e.g., reader, note taker, scribe, books-on-tape, speech-to-text software, screen reader, tape recorder, personal data assistant (PDA)). Create a list of these accommodations and supports.</li>

<hr />
<li>Visit college(s) together so that your son/daughter has good information to make a final choice.</li>
<li>Your son/daughter should meet with college Disability Services Office (DSO) staff to talk about documentation and learn about how accommodations in college are different from high school.</li>
<li>If there is a specific program on the campus for students with intellectual disabilities on campus,arrange to meet with the staff. Find out how participants in the program participate in general college life and academics.</li>
<li>Discuss goals, learning needs, and how to access specific accommodations, including academic supports that are available for all students (e.g., tutoring, writing support) with your son/daughter and DSO staff <strong><em>before</em></strong> classes begin.</li>
<li>Figure out and set-up transportation <em><strong>prior</strong></em> to the start of school (e.g., driving, car-pooling, learning to use public transport, travel vouchers).</li>
<li>Be aware of financial aid resources available to your family and make sure that funding for all costs is arranged before school starts (e.g., tuition, books, fees, transportation).</li>
<li>Identify how financial support your child may receive impacts other benefits (e.g., SSI, SSDI).</li>
<li>Know what services are available through adult human service agencies (e.g., vocational rehabilitation - tuition, books, transportation, employment supports; One-Stop Career Centers -Individual Training Accounts, Development Disability agencies). Representatives from these groups should be at the transition IEP, PCP, etc. Your son/daughter should have the phone numbers for relevant agencies in their cell phone.</li>
<li>Be prepared for the fact that you, the family member, need written consent from the student to obtain access to their records at the college level.</li>
</ul>
</div>
-->


</div>',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c894dc26-a15b-4793-8fd5-598071fe7291';
  $display->content['new-c894dc26-a15b-4793-8fd5-598071fe7291'] = $pane;
  $display->panels['row2'][2] = 'new-c894dc26-a15b-4793-8fd5-598071fe7291';
  $pane = new stdClass();
  $pane->pid = 'new-c4b2b422-d95b-4cf6-8e74-6a3acb52c2ef';
  $pane->panel = 'row3left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Video',
    'body' => '<h4>1-minute intro to Think College</h4>
<script src="https://fast.wistia.com/embed/medias/c54ry1n0c7.jsonp" async></script><script src="https://fast.wistia.com/assets/external/E-v1.js" async></script>

<div class="wistia_responsive_padding" style="padding:56.25% 0 0 0;position:relative;">
<div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><span class="wistia_embed wistia_async_c54ry1n0c7 popover=true popoverAnimateThumbnail=true videoFoam=true" style="display:inline-block;height:100%;position:relative;width:100%">&nbsp;</span></div>
</div>
<hr />
<p><br />
<style type="text/css">.embed-container { position: relative; padding-bottom: 56.25%; height: 0; overflow: hidden; max-width: 100%; } .embed-container iframe, .embed-container object, .embed-container embed { position: absolute; top: 0; left: 0; width: 100%; height: 100%; }
</style>
</p>

<div class="embed-container"><iframe allowfullscreen="" frameborder="0" src="https://www.youtube.com/embed/6wsjmEZ4laM"></iframe></div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c4b2b422-d95b-4cf6-8e74-6a3acb52c2ef';
  $display->content['new-c4b2b422-d95b-4cf6-8e74-6a3acb52c2ef'] = $pane;
  $display->panels['row3left'][0] = 'new-c4b2b422-d95b-4cf6-8e74-6a3acb52c2ef';
  $pane = new stdClass();
  $pane->pid = 'new-dc3674e2-61f9-422b-a958-8e6d4e2fc356';
  $pane->panel = 'row3right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 1,
    'nid' => '3624',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dc3674e2-61f9-422b-a958-8e6d4e2fc356';
  $display->content['new-dc3674e2-61f9-422b-a958-8e6d4e2fc356'] = $pane;
  $display->panels['row3right'][0] = 'new-dc3674e2-61f9-422b-a958-8e6d4e2fc356';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['family_resources_clone'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'family_resources_clone2';
  $page->task = 'page';
  $page->admin_title = 'Family Resources Clone';
  $page->admin_description = '';
  $page->path = 'family-resources-clone-2';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_family_resources_clone2__panel_context_8a8af8b1-c164-4de5-a783-1adac08ae2a2';
  $handler->task = 'page';
  $handler->subtask = 'family_resources_clone2';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'center' => NULL,
      'default' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3865c94c-ab96-4fe4-bf71-a13fd46a84e6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_family_resources_clone2__panel_context_8a8af8b1-c164-4de5-a783-1adac08ae2a2';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_family_resources_clone2__panel_context_a19fb785-d9ef-4255-969d-4ff67e460572';
  $handler->task = 'page';
  $handler->subtask = 'family_resources_clone2';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => '',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_multipass';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Family Resources';
  $display->uuid = '407216a2-4012-4a41-ad77-fd495d116173';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_family_resources_clone2__panel_context_a19fb785-d9ef-4255-969d-4ff67e460572';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4884d4ae-d555-4b2e-aa01-694faa7cf5ae';
  $pane->panel = 'row2';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'banner',
    'body' => '<style type="text/css">.box-light-blue {
    background: #4C8EC9!important;
    padding: 30px 20px 30px 20px;
    margin-bottom: 30px;
    z-index: 1; }

.box-light-blue .box-title {
    font-weight: 600;
color: white;
    font-size: 36px !important;
    padding: 0;
}

.box-light-blue .border {
    background: #fff;
    width: 80%;
    display: block;
    height: 8px;

}
.box-light-blue p{
    font-size: 19px !important;
    line-height: 30px !important;
    color:#fff;}

.blue .is-table-cell {
    background: #4C8EC9;

}


    .leadbox {background-color: #4c8ec9;
    padding: 20px;
    color: #fff;
    margin: 10px 0px;
}
.leadbox .lead {color:#fff;font-weight: 700;}
.leadbox a { color: #069;
    background-color: #f2f2f2;}
.contact-page .icon-title h2 {
    display: inline;
}
.box-light-blue .border {
    background: #fff;
    width: 80%;
    display: block;
    height: 8px;
}
.contact-page .icon-title {
    text-align: top;
    border-bottom: 1px solid #ccc;
    padding-bottom: 5px;
    margin-bottom: 10px;}

a.orange {
    color: #fff;
    background: #e56814;
    padding: 0px 10px;
    border-radius: 5px;
    margin-right: 10px;
    display: inline-block;
    clear: both;
}
</style>
<div class="row leadbox">
<div class="col-sm-5">
<p><img alt="Family resources collage banner" class="img-responsive" src="/sites/default/files/files/images/family-resources-banner.png" /></p>
</div>

<div class="col-sm-7">
<p><span class="lead">As the parent or family member</span> of a young adult with&nbsp;intellectual disabilities, you may have heard a bit about Think College or seen videos or articles describing how students with Down syndrome and other intellectual disabilities are attending colleges and universities all over the United States.</p>

<p>But if you are like a many parents we talk to, you have a lot of questions.&nbsp; We put this page together to respond to many of the most frequently asked questions and address some of the most important topics related to postsecondary education options for students with intellectual disabilities.</p>

<p>If you have questions after reviewing these resources, feel free to contact us at&nbsp;<strong><a href="mailto:thinkcollegeTA@gmail.com">thinkcollegeTA@gmail.com</a></strong>.&nbsp; We love talking to families and students!</p>
</div>
</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4884d4ae-d555-4b2e-aa01-694faa7cf5ae';
  $display->content['new-4884d4ae-d555-4b2e-aa01-694faa7cf5ae'] = $pane;
  $display->panels['row2'][0] = 'new-4884d4ae-d555-4b2e-aa01-694faa7cf5ae';
  $pane = new stdClass();
  $pane->pid = 'new-bad6947e-180d-4b80-974d-d34c1d143e78';
  $pane->panel = 'row2';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'square info boxes',
    'body' => '<div class="row contact-page is-table-row">
<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-mortar-board fa-3x" data-original-title="Email us" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>
<h2>Is College Possible?</h2>
</div>

<div class="text">
<p>These resources share stories and images of students with ID are accessing college.</p>

<ul>
	<li><a href="https://thinkcollege.net/resource-search?sort=field_resourc_publication_date&amp;order=desc&amp;f%5B0%5D=field_resourc_publication_types%3A1504&amp;f%5B1%5D=field_resourc_publication_types%3A1507">Think College Stories</a>&nbsp;&nbsp;</li>
	<li><a href="https://thinkcollege.net/resources/think-college-public-awareness">Think College Public Awareness videos</a>&nbsp;</li>
	<li><a href="https://rubysrainbow.org/press-kit/">Scholarship Winners with Down syndrome</a>&nbsp;</li>
</ul>
</div>
</div>
</div>

<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-th-list fa-3x" data-original-title="Join us on Facebook" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>

<h2>How to Prepare</h2>
</div>

<div class="text">
<p>Students in middle school and high school can be working on preparing for college!</p>

<ul>
	<li>Suggested <a href="https://thinkcollege.net/resource/transition-planning/transition-iep-goals-and-activities-prepare-inclusive-postsecondary">IEP Goals</a> that help students get ready for college&nbsp;&nbsp;</li>
	<li><a href="https://thinkcollege.net/resource/transition-planning/preparing-your-son-or-daughter-college-suggestions-parents-children">Suggestions for Parents</a> to help students prepare for college&nbsp;</li>
	<li>Twenty Powerful Strategies to <a href="https://thinkcollege.net/resource/transition-planning/20-powerful-strategies-prepare-postsecondary-education">prepare for college&nbsp;</a></li>
</ul>
</div>
</div>
</div>

<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-folder fa-3x" data-placement="top" data-toggle="tooltip" title="What is Needed?">&nbsp;</i>

<h2>What is Needed?</h2>
</div>

<div class="text">
<p>If your son or daughter is thinking of applying, there are some things they will need:</p>

<ul>
	<li>Documentation of intellectual disability</li>
	<li>Evaluations that show support needs</li>
	<li>They do <strong>NOT</strong> need</li>
	<li>A regular high school diploma</li>
	<li>SAT or ACT scores</li>
</ul>
</div>
</div>
</div>
</div>

<div class="row contact-page is-table-row">
<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-dollar fa-3x" data-placement="top" data-toggle="tooltip" title="Can I afford it?">&nbsp;</i>

<h2>Can I afford it?</h2>
</div>

<div class="text">
<p>We have put together a page with lots of information to help you learn more about <a href="https://thinkcollege.net/resources/innovation-exchange/paying-for-college">how to pay for college</a></p>
</div>
</div>
</div>

<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-search fa-3x" data-original-title="How do we find the right college?" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>

<h2>How do we find the right college?</h2>
</div>

<div class="text">
<ul>
	<li>Look at our <a href="https://thinkcollege.net/college-search">College Search</a> listings – sort by state, residential options, etc.</li>
	<li>Once you have a list of possibilities, contact the program to ask questions and schedule a campus visit if possible</li>
	<li>Use our <a href="https://thinkcollege.net/sites/default/files/files/resources/HowTo%20TC_F.pdf">How To Guide on Conducting a College Search [PDF]</a></li>
	<li>Contact us at <a href="mailto:thinkcollegeTA@gmail.com">thinkcollegeTA@gmail.com</a>&nbsp;if you need more information or help deciding on the best fit.&nbsp;</li>
</ul>
</div>
</div>
</div>

<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-level-up fa-3x" data-original-title="Differences Between High School and College" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>

<h2>Differences Between High School and College</h2>
</div>

<div class="text">
<p>The transition to college is a big one – here are some resources to help understand the most important differences.</p>

<ul>
	<li>Supports for Students with Disabilities: <a href="https://thinkcollege.net/resource/transition-planning/differences-between-high-school-and-college">High School vs. College</a>&nbsp;</li>
	<li>Understanding <a href="https://thinkcollege.net/resource/federal-legislation-policies-and-practices/communicating-your-student%E2%80%99s-college-under">Family Educational Rights and Privacy Act for College Students</a>&nbsp;</li>
	<li>Transitioning to College: <a href="https://thinkcollege.net/sites/default/files/files/resources/48_tip%20for%20parents%20transitioning%20to%20college.pdf">Tips for Parents [PDF]</a></li>
	<li><a href="https://youtu.be/EGNis7hSjwM">Parents Discuss the Differences between HS and College [video]&nbsp;</a></li>
</ul>
</div>
</div>
</div>
</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bad6947e-180d-4b80-974d-d34c1d143e78';
  $display->content['new-bad6947e-180d-4b80-974d-d34c1d143e78'] = $pane;
  $display->panels['row2'][1] = 'new-bad6947e-180d-4b80-974d-d34c1d143e78';
  $pane = new stdClass();
  $pane->pid = 'new-c894dc26-a15b-4793-8fd5-598071fe7291';
  $pane->panel = 'row2';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Blue boxes',
    'body' => '<div class="box-container row is-table-row blue">
      <div class="col-md-4 is-table-cell">
   <div class="box-light-blue ">
           <h3 class="box-title">Rethinking College</h3>
           <span class="border"></span>
           <p>Rethinking College is a 25-minute ﬁlm produced by Think College that explores the growing movement to include students with intellectual disability in higher education.</p>
           <p>Watch the Trailer</p>
<script src="https://fast.wistia.com/embed/medias/e5dev40j5n.jsonp" async></script><script src="https://fast.wistia.com/assets/external/E-v1.js" async></script>

<div class="wistia_responsive_padding" style="padding:55.0% 0 0 0;position:relative;">
<div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><span class="wistia_embed wistia_async_e5dev40j5n popover=true popoverAnimateThumbnail=true videoFoam=true" style="display:inline-block;height:100%;width:100%">&nbsp;</span></div>
</div>
<br />
          <a href="https://thinkcollege.net/resources/rethinking-college" class="orange pull-right">LEARN MORE</a>        </div>
      </div>

      <div class="col-md-4 is-table-cell">
          <div class="box-light-blue">
         <h3 class="box-title">Facebook Group for Parents</h3>
         <span class="border"></span>
         <br />
         <img src="https://dsc.cloud/hoodieweather/families_F.png" class="img-responsive"/>
           <p>Think College has a Families Facebook group for family members and students to connect with each other with questions and comments about college preparation, college search and college attendance.  Join this group to share stories and get advice from one another.  </p>
           <a href="https://www.facebook.com/groups/1065141630294756/?source_id=60511340871" class="orange pull-right">JOIN NOW</a>  `

         </div>
         </div>

      <div class="col-md-4 is-table-cell">
 <div class="box-light-blue">
            <h3 class="box-title">Ask Think College</h3>
            <span class="border centered mid"></span>
<br />
<div class="icon-title"><p style="text-align: center"><i aria-hidden="true" class="fa fa-users fa-5x" data-placement="top" data-toggle="tooltip" title="" data-original-title="Ask Think College">&nbsp;</i></p>

            <p>We have <strong><a class="link-darker" href="https://thinkcollege.net/technical-assistance/technical-assistance-providers">staff at Think College</a></strong> who can talk to you via email or&nbsp; phone to&nbsp; answer all your questions related to college options for your son or daughter with intellectual disabilities.&nbsp; Contact us at <strong><a href="mailto:thinkcollegeTA@gmail.com" class="link-darker">thinkcollegeTA@gmail.com</a></strong>.</p>

             <a href="https://thinkcollege.net/technical-assistance/technical-assistance-providers" class="orange pull-right">LEARN MORE</a>

           </div>
           </div>

 </div>

<hr />

   <!--
	    <div class="well list clear-fix">

    <h3>Think College: Transition Checklist </h3>

	    <p>This checklist is designed to give family members an easy to use list of topics that should be taken into consideration when discussing transition from high school to college.</p>
<ul class="ckecklist">
<li>Help your student know what choices they have.&nbsp; Visit programs, talk to other students, families,watch videos, etc.</li>
<li>Set post secondary education &amp; career goals through the use of person-centered planning.</li>
<li>Ensure that your son/daughter is enrolled in academic courses throughout high school, which will prepare him/her for college courses. While not a requirement, experience tells us that students with more inclusive academic experiences in high school do better once in college.</li>
<li>Know the difference between the laws that govern education at the secondary level (IDEA =entitlement) and at the college level (ADA = otherwise qualified). (See the Differences Between HS and College on this site).</li>
<li>Encourage your daughter/son to attend and participate in their own Individual Education Plan.Participation means planning the meeting, working with a teacher to identify their own goals and supports, presenting about their goals at the meeting, welcoming the team, learning about the forms.</li>
<li>Help your son/daughter learn to advocate for him/herself while in high school, which will prepare him/her for when it needs to be done in college.</li>
<li>Obtain college catalogue(s) and review them carefully with your son/daughter and with support from high school staff (e.g., guidance counselor, transition coordinator), as needed.&nbsp; Visit campus activities while in middle or high school, sports, recreational, entertainment activities. Have a currently enrolled student get involved in the campus visit or activity.</li>
<li>Ensure that documentation of your son or daughter&rsquo;s disability is up-to-date. This may be required by the college.</li>
<li>Discuss with your son/daughter the nature of their disability and how it affects their school work.Practice how they refer to their disability and identify what supports they need</li>
<li>Encourage teachers to document what accommodations and technology your son/daughter uses now and what they may need in college (e.g., reader, note taker, scribe, books-on-tape, speech-to-text software, screen reader, tape recorder, personal data assistant (PDA)). Create a list of these accommodations and supports.</li>

<hr />
<li>Visit college(s) together so that your son/daughter has good information to make a final choice.</li>
<li>Your son/daughter should meet with college Disability Services Office (DSO) staff to talk about documentation and learn about how accommodations in college are different from high school.</li>
<li>If there is a specific program on the campus for students with intellectual disabilities on campus,arrange to meet with the staff. Find out how participants in the program participate in general college life and academics.</li>
<li>Discuss goals, learning needs, and how to access specific accommodations, including academic supports that are available for all students (e.g., tutoring, writing support) with your son/daughter and DSO staff <strong><em>before</em></strong> classes begin.</li>
<li>Figure out and set-up transportation <em><strong>prior</strong></em> to the start of school (e.g., driving, car-pooling, learning to use public transport, travel vouchers).</li>
<li>Be aware of financial aid resources available to your family and make sure that funding for all costs is arranged before school starts (e.g., tuition, books, fees, transportation).</li>
<li>Identify how financial support your child may receive impacts other benefits (e.g., SSI, SSDI).</li>
<li>Know what services are available through adult human service agencies (e.g., vocational rehabilitation - tuition, books, transportation, employment supports; One-Stop Career Centers -Individual Training Accounts, Development Disability agencies). Representatives from these groups should be at the transition IEP, PCP, etc. Your son/daughter should have the phone numbers for relevant agencies in their cell phone.</li>
<li>Be prepared for the fact that you, the family member, need written consent from the student to obtain access to their records at the college level.</li>
</ul>
</div>
-->


</div>',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c894dc26-a15b-4793-8fd5-598071fe7291';
  $display->content['new-c894dc26-a15b-4793-8fd5-598071fe7291'] = $pane;
  $display->panels['row2'][2] = 'new-c894dc26-a15b-4793-8fd5-598071fe7291';
  $pane = new stdClass();
  $pane->pid = 'new-c4b2b422-d95b-4cf6-8e74-6a3acb52c2ef';
  $pane->panel = 'row3left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Video',
    'body' => '<h4>1-minute intro to Think College</h4>
<script src="https://fast.wistia.com/embed/medias/c54ry1n0c7.jsonp" async></script><script src="https://fast.wistia.com/assets/external/E-v1.js" async></script>

<div class="wistia_responsive_padding" style="padding:56.25% 0 0 0;position:relative;">
<div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><span class="wistia_embed wistia_async_c54ry1n0c7 popover=true popoverAnimateThumbnail=true videoFoam=true" style="display:inline-block;height:100%;position:relative;width:100%">&nbsp;</span></div>
</div>
<hr />
<p><br />
<style type="text/css">.embed-container { position: relative; padding-bottom: 56.25%; height: 0; overflow: hidden; max-width: 100%; } .embed-container iframe, .embed-container object, .embed-container embed { position: absolute; top: 0; left: 0; width: 100%; height: 100%; }
</style>
</p>

<div class="embed-container"><iframe allowfullscreen="" frameborder="0" src="https://www.youtube.com/embed/6wsjmEZ4laM"></iframe></div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c4b2b422-d95b-4cf6-8e74-6a3acb52c2ef';
  $display->content['new-c4b2b422-d95b-4cf6-8e74-6a3acb52c2ef'] = $pane;
  $display->panels['row3left'][0] = 'new-c4b2b422-d95b-4cf6-8e74-6a3acb52c2ef';
  $pane = new stdClass();
  $pane->pid = 'new-dc3674e2-61f9-422b-a958-8e6d4e2fc356';
  $pane->panel = 'row3right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 1,
    'nid' => '3624',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dc3674e2-61f9-422b-a958-8e6d4e2fc356';
  $display->content['new-dc3674e2-61f9-422b-a958-8e6d4e2fc356'] = $pane;
  $display->panels['row3right'][0] = 'new-dc3674e2-61f9-422b-a958-8e6d4e2fc356';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['family_resources_clone2'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'family_resources_page';
  $page->task = 'page';
  $page->admin_title = 'Family Resources Page';
  $page->admin_description = '';
  $page->path = 'family-resources';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_family_resources_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'family_resources_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_leeloo';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
      'row2left' => NULL,
      'row2right' => NULL,
      'row3' => NULL,
      'row4left' => NULL,
      'row4right' => NULL,
      'row5left' => NULL,
      'row5right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Family Resources';
  $display->uuid = '407216a2-4012-4a41-ad77-fd495d116173';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_family_resources_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4884d4ae-d555-4b2e-aa01-694faa7cf5ae';
  $pane->panel = 'row1';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'banner',
    'body' => '<style type="text/css">.box-light-blue {
    background: #4C8EC9!important;
    padding: 30px 20px 30px 20px;
    margin-bottom: 30px;
    z-index: 1; }


.box-light-blue a.whitelink {color: #069;
    background-color: #f2f2f2;}

.box-light-blue .box-title {
    font-weight: 600;
color: white;
    font-size: 36px !important;
    padding: 0;
}

.box-light-blue .border {
    background: #fff;
    width: 80%;
    display: block;
    height: 8px;

}
.box-light-blue p{
    font-size: 19px !important;
    line-height: 30px !important;
    color:#fff;}

.blue .is-table-cell {
    background: #4C8EC9;
}



.equal-box {   
      -webkit-box-shadow: 0 0 7px 0 #AAA;
    -moz-box-shadow: 0 0 7px 0 #AAA;
    box-shadow: 0 0 7px 0 #AAA;
    -webkit-border-radius: 4px;
    -khtml-border-radius: 4px;
    -moz-border-radius: 4px;
    border-radius: 4px;
    background-color: #fff;
    border-top: 10px solid #C96B29;;
    padding: 20px;
    margin-bottom: 25px;
    margin:10px;
    }
    .leadbox {background-color: #4c8ec9;
    padding: 20px;
    color: #fff;
    margin: 10px 0px;
}
.leadbox .lead {color:#fff;font-weight: 700;}
.leadbox a { color: #069;
    background-color: #f2f2f2;}
.contact-page .icon-title h3 {
    display: inline;
}
.box-light-blue .border {
    background: #fff;
    width: 80%;
    display: block;
    height: 8px;
}
.contact-page .icon-title {
    text-align: top;
    border-bottom: 1px solid #ccc;
    padding-bottom: 5px;
    margin-bottom: 10px;}

a.orange {
    color: #fff;
    background: #e56814;
    padding: 0px 10px;
    border-radius: 5px;
    margin-right: 10px;
    display: inline-block;
    clear: both;
}

@media (min-width: 768px) {
	

  .table-row {
    display: table;
    table-layout: fixed;
      border-collapse: separate;
  border-spacing: 10px;


  }

  .table-row  [class^="col-"] {
    display: table-cell;
    float: none;
    
    background-color:#fff;
     -webkit-box-shadow: 0 0 7px 0 #AAA;
    -moz-box-shadow: 0 0 7px 0 #AAA;
    box-shadow: 0 0 7px 0 #AAA;
        -webkit-border-radius: 4px;
    -khtml-border-radius: 4px;
    -moz-border-radius: 4px;
    border-radius: 4px;
    background-color: #fff;
    border-top: 10px solid #C96B29;
    padding: 20px;
    margin-bottom: 25px;
 
 
  }
}
</style>
<div class="row leadbox">
<div class="col-sm-5"><script src="https://fast.wistia.com/embed/medias/c54ry1n0c7.jsonp" async></script><script src="https://fast.wistia.com/assets/external/E-v1.js" async></script>
<div class="wistia_responsive_padding" style="padding:56.25% 0 0 0;position:relative;">
<div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><span class="wistia_embed wistia_async_c54ry1n0c7 popover=true popoverAnimateThumbnail=true videoFoam=true" style="display:inline-block;height:100%;position:relative;width:100%">&nbsp;</span></div>
</div>
</div>

<div class="col-sm-7">
<p><span class="lead">As the parent or family member</span> of a young adult with&nbsp;intellectual disability, you may have heard a bit about Think College or seen videos or articles describing how students with Down syndrome and other intellectual disabilities are attending colleges and universities all over the United States.</p>

<p>We put this page together to respond to the most frequently asked questions that families have when first exploring and learning about college options. <a href="mailto:thinkcollegeTA@gmail.com">Let us know</a> if you have more questions after reviewing these resources.&nbsp;&nbsp;We hope this page is a good start, and we are happy to help you find else you need as you learn more.</p>

<p>Pro tip: Families and students alike LOVE learning more about the options by looking at the college program listings in <a href="https://thinkcollege.net/college-search"><strong>College Search.</strong></a>&nbsp;&nbsp;</p>
</div>
</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4884d4ae-d555-4b2e-aa01-694faa7cf5ae';
  $display->content['new-4884d4ae-d555-4b2e-aa01-694faa7cf5ae'] = $pane;
  $display->panels['row1'][0] = 'new-4884d4ae-d555-4b2e-aa01-694faa7cf5ae';
  $pane = new stdClass();
  $pane->pid = 'new-bad6947e-180d-4b80-974d-d34c1d143e78';
  $pane->panel = 'row1';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'square info boxes',
    'body' => '<div class="table-row contact-page">
<div class="col-md-4 equal-box">
<div class="icon-title"><i aria-hidden="true" class="fa fa-mortar-board fa-3x" data-original-title="Email us" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>
<h3>Is College Possible?</h3>
</div>

<div class="text">
<p>These resources illustrate students with ID accessing college.</p>

<ul>
	<li>Read some&nbsp;<a href="https://thinkcollege.net/resource-search?sort=field_resourc_publication_date&amp;order=desc&amp;f%5B0%5D=field_resourc_publication_types%3A1504&amp;f%5B1%5D=field_resourc_publication_types%3A1507">Think College Stories</a> that share the perspectives of successful college students with intellectual disability.</li>
	<li>Share info about college options for students with ID with teachers, parents and students with our <a href="https://thinkcollege.net/resource-search?search_api_views_fulltext=we%20can&amp;f%5B0%5D=field_resourc_publication_types%3A2264" target="_blank">We Can series</a>.&nbsp;</li>
	<li>This <a href="/think-college-learn/families-0">Think College Learn module</a>&nbsp;shares&nbsp;resources and videos that help&nbsp;families and students learn more about college options.</li>
</ul>
</div>
</div>

<div class="col-md-4 equal-box">
<div class="icon-title"><i aria-hidden="true" class="fa fa-th-list fa-3x" data-original-title="Join us on Facebook" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>

<h3>How to Prepare</h3>
</div>

<div class="text">
<p>Students in middle school and high school can be working on preparing for college!</p>

<ul>
	<li>Suggested <a href="https://thinkcollege.net/resource/transition-planning/transition-iep-goals-and-activities-prepare-inclusive-postsecondary">IEP Goals</a> that help students get ready for college&nbsp;&nbsp;</li>
	<li><a href="https://thinkcollege.net/resource/transition-planning/preparing-your-son-or-daughter-college-suggestions-parents-children">Suggestions for Parents</a> to help students prepare for college&nbsp;</li>
	<li>Twenty Powerful Strategies to <a href="https://thinkcollege.net/resource/transition-planning/20-powerful-strategies-prepare-postsecondary-education">prepare for college&nbsp;</a></li>
	<li>Use this <a href="/resource/student-outcomes/foundation-skills-for-college-and-career-learning-plan">Foundation Skills for College and Career Learning Plan&nbsp;</a>&nbsp;to help your son or daughter to prepare for college.</li>
</ul>
</div>
</div>

<div class="col-md-4 equal-box">
<div class="icon-title"><i aria-hidden="true" class="fa fa-folder fa-3x" data-placement="top" data-toggle="tooltip" title="What is Needed?">&nbsp;</i>

<h3>How to Apply</h3>
</div>

<div class="text">
<p>When students are applying to attend a college program for students with ID, there is typically a different admissions process than the one used by degree-seeking students.</p>

<p>Unlike students who are applying to college through the standard admissions process, students&nbsp;will&nbsp;<strong>NOT</strong> need a regular high school diploma or SAT or ACT scores. &nbsp;They <strong>WILL</strong> need&nbsp;documentation of disability and support needs.&nbsp;Check the website of programs you are interested in to learn more about specific requirements.</p>
</div>
</div>
</div>

<div class="table-row contact-page">
<div class="col-md-4 equal-box">
<div class="icon-title"><i aria-hidden="true" class="fa fa-dollar fa-3x" data-placement="top" data-toggle="tooltip" title="Can I afford it?">&nbsp;</i>

<h3>Can I afford it?</h3>
</div>

<div class="text">
<p>College is expensive, and paying for it is never easy. The good news is that students with intellectual disability can be eligible for financial aid even if they don’t have a HS diploma. &nbsp;Students can also now save for college through the use of an ABLE account. &nbsp;Others may get support from a community agency such as Vocational Rehabilitation, or recieve scholarships to help cover costs.</p>

<p>Learn more about these and other strategies&nbsp;to&nbsp;pay for college on our <a href="https://thinkcollege.net/resources/innovation-exchange/paying-for-college">Paying for College</a> page.</p>
</div>
</div>

<div class="col-md-4 equal-box">
<div class="icon-title"><i aria-hidden="true" class="fa fa-search fa-3x" data-original-title="How do we find the right college?" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>

<h3>How do we find the right college?</h3>
</div>

<div class="text">
<ul>
	<li>Review program details in the&nbsp;<a href="https://thinkcollege.net/college-search" target="_blank">College Search</a> listings.</li>
	<li>Once you have a list of possibilities, contact the program to ask questions/schedule a campus visit.</li>
	<li>Use our <a href="https://thinkcollege.net/resource/transition-planning/conducting-a-college-search-questions-to-ask-college-programs" target="_blank">How To Guide on Conducting a College Search</a>&nbsp;and this <a href="https://thinkcollege.net/resource/transition-planning/self-advocate%E2%80%99s-guide-to-choosing-a-post-secondary-program-charting" target="_blank">Self-Advocates Guide to Selecting a College</a> to learn more about programs you are interested in.</li>
	<li><a href="mailto:thinkcollegeTA@gmail.com">Contact us</a>&nbsp;if you need more information or help deciding on the best fit.&nbsp;</li>
</ul>
</div>
</div>

<div class="col-md-4 equal-box">
<div class="icon-title"><i aria-hidden="true" class="fa fa-level-up fa-3x" data-original-title="Differences Between High School and College" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>

<h3>Differences Between High School and College</h3>
</div>

<div class="text">
<p>The transition to college is a big one – here are some resources to help understand the most important differences.</p>

<ul>
	<li>Supports for Students with Disabilities: <a href="https://thinkcollege.net/resource/transition-planning/differences-between-high-school-and-college">High School vs. College</a>&nbsp;</li>
	<li>Understanding <a href="https://thinkcollege.net/resource/federal-legislation-policies-and-practices/communicating-your-student%E2%80%99s-college-under">Family Educational Rights and Privacy Act for College Students</a>&nbsp;</li>
	<li>Transitioning to College: <a href="https://thinkcollege.net/sites/default/files/files/resources/48_tip%20for%20parents%20transitioning%20to%20college.pdf">Tips for Parents [PDF]</a></li>
	<li><a href="https://youtu.be/EGNis7hSjwM">Parents Discuss the Differences between HS and College [video]&nbsp;</a></li>
</ul>
</div>
</div>
</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bad6947e-180d-4b80-974d-d34c1d143e78';
  $display->content['new-bad6947e-180d-4b80-974d-d34c1d143e78'] = $pane;
  $display->panels['row1'][1] = 'new-bad6947e-180d-4b80-974d-d34c1d143e78';
  $pane = new stdClass();
  $pane->pid = 'new-dc3674e2-61f9-422b-a958-8e6d4e2fc356';
  $pane->panel = 'row1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 1,
    'nid' => '3624',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dc3674e2-61f9-422b-a958-8e6d4e2fc356';
  $display->content['new-dc3674e2-61f9-422b-a958-8e6d4e2fc356'] = $pane;
  $display->panels['row1'][2] = 'new-dc3674e2-61f9-422b-a958-8e6d4e2fc356';
  $pane = new stdClass();
  $pane->pid = 'new-c894dc26-a15b-4793-8fd5-598071fe7291';
  $pane->panel = 'row3';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Blue boxes',
    'body' => '<p>&nbsp;</p>

<div class="box-container row is-table-row blue">
<div class="col-md-4 is-table-cell">
<div class="box-light-blue ">
<h3 class="box-title">Rethinking College</h3>

<p>Rethinking College is a 25-minute ﬁlm produced by Think College that explores the growing movement to include students with intellectual disability in higher education.</p>

<p><u>Watch the Trailer</u></p>
<script src="https://fast.wistia.com/embed/medias/e5dev40j5n.jsonp" async></script><script src="https://fast.wistia.com/assets/external/E-v1.js" async></script>

<div class="wistia_responsive_padding" style="padding:55.0% 0 0 0;position:relative;">
<div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><span class="wistia_embed wistia_async_e5dev40j5n popover=true popoverAnimateThumbnail=true videoFoam=true" style="display:inline-block;height:100%;width:100%">&nbsp;</span></div>
</div>
<br />
<a class="orange pull-right" href="https://thinkcollege.net/resources/rethinking-college">LEARN MORE</a></div>
</div>

<div class="col-md-4 is-table-cell">
<div class="box-light-blue">
<h3 class="box-title">Facebook Group for Parents</h3>
<img alt="Think College Facebook" class="img-responsive" src="/sites/default/files/images/tc-facebook-banner.png" />
<p>`You really want to join this group. Don’t take our word for it, listen to what some of the 1,400 members of the Families Think College group are saying:</p>

<p><i>&nbsp;&nbsp; “This group is so helpful."&nbsp;</i></p>

<p><i>&nbsp;&nbsp; “This is a wonderful site!!!”</i></p>

<p>&nbsp; &nbsp;&nbsp;<i>“I am thrilled to be here.”&nbsp;</i></p>
<a class="orange pull-right" href="https://www.facebook.com/groups/1065141630294756/?source_id=60511340871">JOIN NOW</a> `</div>
</div>

<div class="col-md-4 is-table-cell">
<div class="box-light-blue">
<h3 class="box-title">Ask Think College</h3>
&nbsp;

<div class="icon-title"><!--
<p style="text-align: center"><i aria-hidden="true" class="fa fa-users fa-5x" data-original-title="Ask Think College" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i></p>
--><img alt="Cate Weir presenting at the Inclusive Learning Seminar in March 2018" class="img-responsive" src="/sites/default/files/files/images/cate_presenting_3_2017_Inclusive_Learning_Seminar.jpg" />
<p>We have <strong><a class="whitelink" href="https://thinkcollege.net/technical-assistance/technical-assistance-providers">staff at Think College</a></strong> who can talk to you via email or&nbsp; phone to&nbsp; answer all your questions related to college options for your son or daughter with intellectual disabilities.&nbsp; Contact us at <strong><a class="whitelink" href="mailto:thinkcollegeTA@gmail.com">thinkcollegeTA@gmail.com</a></strong>.</p>
<a class="orange pull-right" href="https://thinkcollege.net/technical-assistance/technical-assistance-providers">LEARN MORE</a></div>
</div>
</div>

<hr /></div>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c894dc26-a15b-4793-8fd5-598071fe7291';
  $display->content['new-c894dc26-a15b-4793-8fd5-598071fe7291'] = $pane;
  $display->panels['row3'][0] = 'new-c894dc26-a15b-4793-8fd5-598071fe7291';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['family_resources_page'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'family_resources_page_copy';
  $page->task = 'page';
  $page->admin_title = 'Family Resources Page Copy';
  $page->admin_description = '';
  $page->path = 'family-resources-copy';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_family_resources_page_copy__panel_context_e7d817fc-b2f7-43a5-87f1-b55705d2de7c';
  $handler->task = 'page';
  $handler->subtask = 'family_resources_page_copy';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => '',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_leeloo';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Family Resources';
  $display->uuid = '407216a2-4012-4a41-ad77-fd495d116173';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_family_resources_page_copy__panel_context_e7d817fc-b2f7-43a5-87f1-b55705d2de7c';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4884d4ae-d555-4b2e-aa01-694faa7cf5ae';
  $pane->panel = 'row1';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'banner',
    'body' => '<style type="text/css">.box-light-blue {
    background: #4C8EC9!important;
    padding: 30px 20px 30px 20px;
    margin-bottom: 30px;
    z-index: 1; }

.box-light-blue .box-title {
    font-weight: 600;
color: white;
    font-size: 36px !important;
    padding: 0;
}

.box-light-blue .border {
    background: #fff;
    width: 80%;
    display: block;
    height: 8px;

}
.box-light-blue p{
    font-size: 19px !important;
    line-height: 30px !important;
    color:#fff;}

.blue .is-table-cell {
    background: #4C8EC9;

}


    .leadbox {background-color: #4c8ec9;
    padding: 20px;
    color: #fff;
    margin: 10px 0px;
}
.leadbox .lead {color:#fff;font-weight: 700;}
.leadbox a { color: #069;
    background-color: #f2f2f2;}
.contact-page .icon-title h2 {
    display: inline;
}
.box-light-blue .border {
    background: #fff;
    width: 80%;
    display: block;
    height: 8px;
}
.contact-page .icon-title {
    text-align: top;
    border-bottom: 1px solid #ccc;
    padding-bottom: 5px;
    margin-bottom: 10px;}

a.orange {
    color: #fff;
    background: #e56814;
    padding: 0px 10px;
    border-radius: 5px;
    margin-right: 10px;
    display: inline-block;
    clear: both;
}
</style>
<div class="row leadbox">
<div class="col-sm-5">
<p><img alt="Family resources collage banner" class="img-responsive" src="/sites/default/files/files/images/family-resources-banner.png" /></p>
</div>

<div class="col-sm-7">
<p><span class="lead">As the parent or family member</span> of a young adult with&nbsp;intellectual disabilities, you may have heard a bit about Think College or seen videos or articles describing how students with Down syndrome and other intellectual disabilities are attending colleges and universities all over the United States.</p>

<p>But if you are like a many parents we talk to, you have a lot of questions.&nbsp; We put this page together to respond to many of the most frequently asked questions and address some of the most important topics related to postsecondary education options for students with intellectual disabilities.</p>

<p>If you have questions after reviewing these resources, feel free to contact us at&nbsp;<strong><a href="mailto:thinkcollegeTA@gmail.com">thinkcollegeTA@gmail.com</a></strong>.&nbsp; We love talking to families and students!</p>
</div>
</div>
<br />',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4884d4ae-d555-4b2e-aa01-694faa7cf5ae';
  $display->content['new-4884d4ae-d555-4b2e-aa01-694faa7cf5ae'] = $pane;
  $display->panels['row1'][0] = 'new-4884d4ae-d555-4b2e-aa01-694faa7cf5ae';
  $pane = new stdClass();
  $pane->pid = 'new-bad6947e-180d-4b80-974d-d34c1d143e78';
  $pane->panel = 'row1';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'square info boxes',
    'body' => '<div class="row contact-page is-table-row">
<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-mortar-board fa-3x" data-original-title="Email us" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>
<h2>Is College Possible?</h2>
</div>

<div class="text">
<p>These resources share stories and images of students with ID are accessing college.</p>

<ul>
	<li><a href="https://thinkcollege.net/resource-search?sort=field_resourc_publication_date&amp;order=desc&amp;f%5B0%5D=field_resourc_publication_types%3A1504&amp;f%5B1%5D=field_resourc_publication_types%3A1507">Think College Stories</a>&nbsp;&nbsp;</li>
	<li><a href="https://thinkcollege.net/resources/think-college-public-awareness">Think College Public Awareness videos</a>&nbsp;</li>
	<li><a href="https://rubysrainbow.org/press-kit/">Scholarship Winners with Down syndrome</a>&nbsp;</li>
</ul>
</div>
</div>
</div>

<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-th-list fa-3x" data-original-title="Join us on Facebook" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>

<h2>How to Prepare</h2>
</div>

<div class="text">
<p>Students in middle school and high school can be working on preparing for college!</p>

<ul>
	<li>Suggested <a href="https://thinkcollege.net/resource/transition-planning/transition-iep-goals-and-activities-prepare-inclusive-postsecondary">IEP Goals</a> that help students get ready for college&nbsp;&nbsp;</li>
	<li><a href="https://thinkcollege.net/resource/transition-planning/preparing-your-son-or-daughter-college-suggestions-parents-children">Suggestions for Parents</a> to help students prepare for college&nbsp;</li>
	<li>Twenty Powerful Strategies to <a href="https://thinkcollege.net/resource/transition-planning/20-powerful-strategies-prepare-postsecondary-education">prepare for college&nbsp;</a></li>
</ul>
</div>
</div>
</div>

<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-folder fa-3x" data-placement="top" data-toggle="tooltip" title="What is Needed?">&nbsp;</i>

<h2>What is Needed?</h2>
</div>

<div class="text">
<p>If your son or daughter is thinking of applying, there are some things they will need:</p>

<ul>
	<li>Documentation of intellectual disability</li>
	<li>Evaluations that show support needs</li>
	<li>They do <strong>NOT</strong> need</li>
	<li>A regular high school diploma</li>
	<li>SAT or ACT scores</li>
</ul>
</div>
</div>
</div>
</div>

<div class="row contact-page is-table-row">
<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-dollar fa-3x" data-placement="top" data-toggle="tooltip" title="Can I afford it?">&nbsp;</i>

<h2>Can I afford it?</h2>
</div>

<div class="text">
<p>We have put together a page with lots of information to help you learn more about <a href="https://thinkcollege.net/resources/innovation-exchange/paying-for-college">how to pay for college</a></p>
</div>
</div>
</div>

<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-search fa-3x" data-original-title="How do we find the right college?" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>

<h2>How do we find the right college?</h2>
</div>

<div class="text">
<ul>
	<li>Look at our <a href="https://thinkcollege.net/college-search">College Search</a> listings – sort by state, residential options, etc.</li>
	<li>Once you have a list of possibilities, contact the program to ask questions and schedule a campus visit if possible</li>
	<li>Use our <a href="https://thinkcollege.net/sites/default/files/files/resources/HowTo%20TC_F.pdf">How To Guide on Conducting a College Search [PDF]</a></li>
	<li>Contact us at <a href="mailto:thinkcollegeTA@gmail.com">thinkcollegeTA@gmail.com</a>&nbsp;if you need more information or help deciding on the best fit.&nbsp;</li>
</ul>
</div>
</div>
</div>

<div class="col-sm-4">
<div class="is-table-cell well">
<div class="icon-title"><i aria-hidden="true" class="fa fa-level-up fa-3x" data-original-title="Differences Between High School and College" data-placement="top" data-toggle="tooltip" title="">&nbsp;</i>

<h2>Differences Between High School and College</h2>
</div>

<div class="text">
<p>The transition to college is a big one – here are some resources to help understand the most important differences.</p>

<ul>
	<li>Supports for Students with Disabilities: <a href="https://thinkcollege.net/resource/transition-planning/differences-between-high-school-and-college">High School vs. College</a>&nbsp;</li>
	<li>Understanding <a href="https://thinkcollege.net/resource/federal-legislation-policies-and-practices/communicating-your-student%E2%80%99s-college-under">Family Educational Rights and Privacy Act for College Students</a>&nbsp;</li>
	<li>Transitioning to College: <a href="https://thinkcollege.net/sites/default/files/files/resources/48_tip%20for%20parents%20transitioning%20to%20college.pdf">Tips for Parents [PDF]</a></li>
	<li><a href="https://youtu.be/EGNis7hSjwM">Parents Discuss the Differences between HS and College [video]&nbsp;</a></li>
</ul>
</div>
</div>
</div>
</div>
<br />',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bad6947e-180d-4b80-974d-d34c1d143e78';
  $display->content['new-bad6947e-180d-4b80-974d-d34c1d143e78'] = $pane;
  $display->panels['row1'][1] = 'new-bad6947e-180d-4b80-974d-d34c1d143e78';
  $pane = new stdClass();
  $pane->pid = 'new-c4b2b422-d95b-4cf6-8e74-6a3acb52c2ef';
  $pane->panel = 'row2left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Video',
    'body' => '<script src="https://fast.wistia.com/embed/medias/c54ry1n0c7.jsonp" async></script><script src="https://fast.wistia.com/assets/external/E-v1.js" async></script>
<div class="wistia_responsive_padding" style="padding:56.25% 0 0 0;position:relative;" style="border:#f2f2f2 solid 2px;">
<div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><span class="wistia_embed wistia_async_c54ry1n0c7 popover=true popoverAnimateThumbnail=true videoFoam=true" style="display:inline-block;height:100%;position:relative;width:100%">&nbsp;</span></div>
</div>

<hr />
<p><br />
<style type="text/css">.embed-container { position: relative; padding-bottom: 56.25%; height: 0; overflow: hidden; max-width: 100%; } .embed-container iframe, .embed-container object, .embed-container embed { position: absolute; top: 0; left: 0; width: 100%; height: 100%; }
</style>
</p>

<div class="embed-container"><iframe allowfullscreen="" frameborder="0" src="https://www.youtube.com/embed/6wsjmEZ4laM"></iframe></div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '1-minute intro to Think College',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box-blue',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c4b2b422-d95b-4cf6-8e74-6a3acb52c2ef';
  $display->content['new-c4b2b422-d95b-4cf6-8e74-6a3acb52c2ef'] = $pane;
  $display->panels['row2left'][0] = 'new-c4b2b422-d95b-4cf6-8e74-6a3acb52c2ef';
  $pane = new stdClass();
  $pane->pid = 'new-dc3674e2-61f9-422b-a958-8e6d4e2fc356';
  $pane->panel = 'row2right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 1,
    'nid' => '3624',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dc3674e2-61f9-422b-a958-8e6d4e2fc356';
  $display->content['new-dc3674e2-61f9-422b-a958-8e6d4e2fc356'] = $pane;
  $display->panels['row2right'][0] = 'new-dc3674e2-61f9-422b-a958-8e6d4e2fc356';
  $pane = new stdClass();
  $pane->pid = 'new-c894dc26-a15b-4793-8fd5-598071fe7291';
  $pane->panel = 'row3';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Blue boxes',
    'body' => '<div class="box-container row is-table-row blue">
      <div class="col-md-4 is-table-cell">
   <div class="box-light-blue ">
           <h3 class="box-title">Rethinking College</h3>
           <span class="border"></span>
           <p>Rethinking College is a 25-minute ﬁlm produced by Think College that explores the growing movement to include students with intellectual disability in higher education.</p>
           <p>Watch the Trailer</p>
<script src="https://fast.wistia.com/embed/medias/e5dev40j5n.jsonp" async></script><script src="https://fast.wistia.com/assets/external/E-v1.js" async></script>

<div class="wistia_responsive_padding" style="padding:55.0% 0 0 0;position:relative;">
<div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><span class="wistia_embed wistia_async_e5dev40j5n popover=true popoverAnimateThumbnail=true videoFoam=true" style="display:inline-block;height:100%;width:100%">&nbsp;</span></div>
</div>
<br />
          <a href="https://thinkcollege.net/resources/rethinking-college" class="orange pull-right">LEARN MORE</a>        </div>
      </div>

      <div class="col-md-4 is-table-cell">
          <div class="box-light-blue">
         <h3 class="box-title">Facebook Group for Parents</h3>
         <span class="border"></span>
         <br />
         <img src="https://dsc.cloud/hoodieweather/families_F.png" class="img-responsive"/>
           <p>Think College has a Families Facebook group for family members and students to connect with each other with questions and comments about college preparation, college search and college attendance.  Join this group to share stories and get advice from one another.  </p>
           <a href="https://www.facebook.com/groups/1065141630294756/?source_id=60511340871" class="orange pull-right">JOIN NOW</a>  `

         </div>
         </div>

      <div class="col-md-4 is-table-cell">
 <div class="box-light-blue">
            <h3 class="box-title">Ask Think College</h3>
            <span class="border centered mid"></span>
<br />
<div class="icon-title"><p style="text-align: center"><i aria-hidden="true" class="fa fa-users fa-5x" data-placement="top" data-toggle="tooltip" title="" data-original-title="Ask Think College">&nbsp;</i></p>

            <p>We have <strong><a class="link-darker" href="https://thinkcollege.net/technical-assistance/technical-assistance-providers">staff at Think College</a></strong> who can talk to you via email or&nbsp; phone to&nbsp; answer all your questions related to college options for your son or daughter with intellectual disabilities.&nbsp; Contact us at <strong><a href="mailto:thinkcollegeTA@gmail.com" class="link-darker">thinkcollegeTA@gmail.com</a></strong>.</p>

             <a href="https://thinkcollege.net/technical-assistance/technical-assistance-providers" class="orange pull-right">LEARN MORE</a>

           </div>
           </div>

 </div>

<hr />

   <!--
	    <div class="well list clear-fix">

    <h3>Think College: Transition Checklist </h3>

	    <p>This checklist is designed to give family members an easy to use list of topics that should be taken into consideration when discussing transition from high school to college.</p>
<ul class="ckecklist">
<li>Help your student know what choices they have.&nbsp; Visit programs, talk to other students, families,watch videos, etc.</li>
<li>Set post secondary education &amp; career goals through the use of person-centered planning.</li>
<li>Ensure that your son/daughter is enrolled in academic courses throughout high school, which will prepare him/her for college courses. While not a requirement, experience tells us that students with more inclusive academic experiences in high school do better once in college.</li>
<li>Know the difference between the laws that govern education at the secondary level (IDEA =entitlement) and at the college level (ADA = otherwise qualified). (See the Differences Between HS and College on this site).</li>
<li>Encourage your daughter/son to attend and participate in their own Individual Education Plan.Participation means planning the meeting, working with a teacher to identify their own goals and supports, presenting about their goals at the meeting, welcoming the team, learning about the forms.</li>
<li>Help your son/daughter learn to advocate for him/herself while in high school, which will prepare him/her for when it needs to be done in college.</li>
<li>Obtain college catalogue(s) and review them carefully with your son/daughter and with support from high school staff (e.g., guidance counselor, transition coordinator), as needed.&nbsp; Visit campus activities while in middle or high school, sports, recreational, entertainment activities. Have a currently enrolled student get involved in the campus visit or activity.</li>
<li>Ensure that documentation of your son or daughter&rsquo;s disability is up-to-date. This may be required by the college.</li>
<li>Discuss with your son/daughter the nature of their disability and how it affects their school work.Practice how they refer to their disability and identify what supports they need</li>
<li>Encourage teachers to document what accommodations and technology your son/daughter uses now and what they may need in college (e.g., reader, note taker, scribe, books-on-tape, speech-to-text software, screen reader, tape recorder, personal data assistant (PDA)). Create a list of these accommodations and supports.</li>

<hr />
<li>Visit college(s) together so that your son/daughter has good information to make a final choice.</li>
<li>Your son/daughter should meet with college Disability Services Office (DSO) staff to talk about documentation and learn about how accommodations in college are different from high school.</li>
<li>If there is a specific program on the campus for students with intellectual disabilities on campus,arrange to meet with the staff. Find out how participants in the program participate in general college life and academics.</li>
<li>Discuss goals, learning needs, and how to access specific accommodations, including academic supports that are available for all students (e.g., tutoring, writing support) with your son/daughter and DSO staff <strong><em>before</em></strong> classes begin.</li>
<li>Figure out and set-up transportation <em><strong>prior</strong></em> to the start of school (e.g., driving, car-pooling, learning to use public transport, travel vouchers).</li>
<li>Be aware of financial aid resources available to your family and make sure that funding for all costs is arranged before school starts (e.g., tuition, books, fees, transportation).</li>
<li>Identify how financial support your child may receive impacts other benefits (e.g., SSI, SSDI).</li>
<li>Know what services are available through adult human service agencies (e.g., vocational rehabilitation - tuition, books, transportation, employment supports; One-Stop Career Centers -Individual Training Accounts, Development Disability agencies). Representatives from these groups should be at the transition IEP, PCP, etc. Your son/daughter should have the phone numbers for relevant agencies in their cell phone.</li>
<li>Be prepared for the fact that you, the family member, need written consent from the student to obtain access to their records at the college level.</li>
</ul>
</div>
-->


</div>',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c894dc26-a15b-4793-8fd5-598071fe7291';
  $display->content['new-c894dc26-a15b-4793-8fd5-598071fe7291'] = $pane;
  $display->panels['row3'][0] = 'new-c894dc26-a15b-4793-8fd5-598071fe7291';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['family_resources_page_copy'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'faq';
  $page->task = 'page';
  $page->admin_title = 'FAQ';
  $page->admin_description = '';
  $page->path = 'faq';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_faq__panel';
  $handler->task = 'page';
  $handler->subtask = 'faq';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Frequently Asked Questions';
  $display->uuid = 'c8c6ea8b-0a32-4bf7-a165-6a6e393d8b36';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_faq__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-808bfbc4-caed-4c95-a48e-f5a9f4469feb';
  $pane->panel = 'middle';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '4220',
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '808bfbc4-caed-4c95-a48e-f5a9f4469feb';
  $display->content['new-808bfbc4-caed-4c95-a48e-f5a9f4469feb'] = $pane;
  $display->panels['middle'][0] = 'new-808bfbc4-caed-4c95-a48e-f5a9f4469feb';
  $pane = new stdClass();
  $pane->pid = 'new-26fc399a-7211-4ebd-b26d-294e7e41b42e';
  $pane->panel = 'middle';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '4221',
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '26fc399a-7211-4ebd-b26d-294e7e41b42e';
  $display->content['new-26fc399a-7211-4ebd-b26d-294e7e41b42e'] = $pane;
  $display->panels['middle'][1] = 'new-26fc399a-7211-4ebd-b26d-294e7e41b42e';
  $pane = new stdClass();
  $pane->pid = 'new-293364bb-2b2b-4842-a659-ae8b5b864b5f';
  $pane->panel = 'middle';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '4222',
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '293364bb-2b2b-4842-a659-ae8b5b864b5f';
  $display->content['new-293364bb-2b2b-4842-a659-ae8b5b864b5f'] = $pane;
  $display->panels['middle'][2] = 'new-293364bb-2b2b-4842-a659-ae8b5b864b5f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['faq'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'future_quest_island_explorations';
  $page->task = 'page';
  $page->admin_title = 'Future Quest Island: Explorations';
  $page->admin_description = '';
  $page->path = 'projects/fqie';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_future_quest_island_explorations__panel';
  $handler->task = 'page';
  $handler->subtask = 'future_quest_island_explorations';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
      'row2left' => NULL,
      'row2right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Future Quest Island: Explorations';
  $display->uuid = '0d4ad2a5-9f1c-4d87-bdc3-1eb9bc8b3d26';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_future_quest_island_explorations__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9a30c540-9c62-40ee-a9c1-c0a59ca76d56';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="FQI" class="img-responsive" src="/sites/default/files/images/fqie-sq.png" /></p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9a30c540-9c62-40ee-a9c1-c0a59ca76d56';
  $display->content['new-9a30c540-9c62-40ee-a9c1-c0a59ca76d56'] = $pane;
  $display->panels['row1left'][0] = 'new-9a30c540-9c62-40ee-a9c1-c0a59ca76d56';
  $pane = new stdClass();
  $pane->pid = 'new-bf7c9d19-0419-475f-9a90-ecec8ec55472';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><a class="btn btn-block btn-huge btn-purple" href="/projects/future-quest-island-explorations/about-future-quest-island-explorations" type="button">About</a> <a class="btn btn-block btn-huge btn-purple" href="/projects/future-quest-island-explorations/fqie-project-team" type="button"> Project Team</a> <a class="btn btn-block btn-huge btn-purple" href="mailto:lori.cooney@umb.edu" type="button"> Contact Us</a></p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bf7c9d19-0419-475f-9a90-ecec8ec55472';
  $display->content['new-bf7c9d19-0419-475f-9a90-ecec8ec55472'] = $pane;
  $display->panels['row1left'][1] = 'new-bf7c9d19-0419-475f-9a90-ecec8ec55472';
  $pane = new stdClass();
  $pane->pid = 'new-39c89bf1-ea4e-46e6-b973-d4c6754ed072';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Lori Cooney" class="center-block img-responsive img-thumbnail" src="/sites/default/files/files/images/staff-photos/LoriCooney.jpeg" style="height: 200px; width: 200px;" /></p>

<p><strong>Lori Cooney, MEd</strong></p>

<p>Program Director,&nbsp;Inclusive Education &amp; Curriculum Design, and Universal Design Specialist</p>

<p><a href="mailto:lori.cooney@umb.edu">lori.cooney@umb.edu</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Project Coordinator',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box box-border-purple',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '39c89bf1-ea4e-46e6-b973-d4c6754ed072';
  $display->content['new-39c89bf1-ea4e-46e6-b973-d4c6754ed072'] = $pane;
  $display->panels['row1left'][2] = 'new-39c89bf1-ea4e-46e6-b973-d4c6754ed072';
  $pane = new stdClass();
  $pane->pid = 'new-4f4fdb99-544f-4624-99ab-059eaebe7945';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<ul>
	<li><a href="https://sites.google.com/umb.edu/fqie-research-study-info/home">Research Study Information </a></li>
	<li><a href="https://sites.google.com/umb.edu/fqie-research-study-info/fqi-e-screenshots">FQI-E Screenshots</a></li>
	<li><a href="https://docs.google.com/forms/d/e/1FAIpQLSfDvkJsNwDmPbvSps8l1JllMgEcv52oUPCZXHvC9abGaJBECQ/viewform?usp=sf_link">School Interest Form</a></li>
	<li><a href="/think-college-news/fqie-curriculum-overview">Curriculum Overview</a></li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box box-border-purple',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4f4fdb99-544f-4624-99ab-059eaebe7945';
  $display->content['new-4f4fdb99-544f-4624-99ab-059eaebe7945'] = $pane;
  $display->panels['row1left'][3] = 'new-4f4fdb99-544f-4624-99ab-059eaebe7945';
  $pane = new stdClass();
  $pane->pid = 'new-42b49e50-1054-4b69-a904-f6766c08ceeb';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'FQI Social Icons',
    'body' => ' <p>Follow Future Quest Island: Explorations!</p>
<a href="https://www.facebook.com/futurequestisland/"><i class="fa fa-facebook-square fa-3x social" data-original-title="Facebook" data-placement="top" data-toggle="tooltip" id="social-fb">&nbsp;</i></a> <a href="https://twitter.com/fqisland?lang=en"><i class="fa fa-twitter-square fa-3x social" data-original-title="Twitter" data-placement="top" data-toggle="tooltip" id="social-tw">&nbsp;</i></a>  <a href="https://www.pinterest.com/fqisland"><i class="fa fa-pinterest-square fa-3x social" data-original-title="Pinterest" data-placement="top" data-toggle="tooltip" id="social-em">&nbsp;</i></a> ',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Social Media',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box box-border-purple',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '42b49e50-1054-4b69-a904-f6766c08ceeb';
  $display->content['new-42b49e50-1054-4b69-a904-f6766c08ceeb'] = $pane;
  $display->panels['row1left'][4] = 'new-42b49e50-1054-4b69-a904-f6766c08ceeb';
  $pane = new stdClass();
  $pane->pid = 'new-fedeef83-07c4-48bd-be0e-d0970b4d8235';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Future Quest Island-Explorations (FQI-E) is an online accessible college &amp; career readiness curriculum that uses gaming strategies to motivate and support improved self-concept, social and emotional competence, and early college and career awareness for upper elementary students with and without disability in grades 3-5 using the evidenced-based “Possible Selves” framework.&nbsp;</p><br>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'project-intro-box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fedeef83-07c4-48bd-be0e-d0970b4d8235';
  $display->content['new-fedeef83-07c4-48bd-be0e-d0970b4d8235'] = $pane;
  $display->panels['row1right'][0] = 'new-fedeef83-07c4-48bd-be0e-d0970b4d8235';
  $pane = new stdClass();
  $pane->pid = 'new-9072c4cd-a224-44a4-a7d9-cdfd0e04ed96';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<script src="https://fast.wistia.com/embed/medias/nitdyfp31o.jsonp" async></script><script src="https://fast.wistia.com/assets/external/E-v1.js" async></script><div class="wistia_responsive_padding" style="padding:56.25% 0 0 0;position:relative;"><div class="wistia_responsive_wrapper" style="height:100%;left:0;position:absolute;top:0;width:100%;"><div class="wistia_embed wistia_async_nitdyfp31o seo=false videoFoam=true" style="height:100%;position:relative;width:100%"><div class="wistia_swatch" style="height:100%;left:0;opacity:0;overflow:hidden;position:absolute;top:0;transition:opacity 200ms;width:100%;"><img src="https://fast.wistia.com/embed/medias/nitdyfp31o/swatch" style="filter:blur(5px);height:100%;object-fit:contain;width:100%;" alt="" aria-hidden="true" onload="this.parentNode.style.opacity=1;" /></div></div></div></div>',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Featured Video',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box box-border-purple',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9072c4cd-a224-44a4-a7d9-cdfd0e04ed96';
  $display->content['new-9072c4cd-a224-44a4-a7d9-cdfd0e04ed96'] = $pane;
  $display->panels['row1right'][1] = 'new-9072c4cd-a224-44a4-a7d9-cdfd0e04ed96';
  $pane = new stdClass();
  $pane->pid = 'new-3cf6fa16-8c65-4895-a234-99fdb8f665f5';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_28';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'FQIarticles',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'fqi-article-panel ie-news box-border-purple',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3cf6fa16-8c65-4895-a234-99fdb8f665f5';
  $display->content['new-3cf6fa16-8c65-4895-a234-99fdb8f665f5'] = $pane;
  $display->panels['row1right'][2] = 'new-3cf6fa16-8c65-4895-a234-99fdb8f665f5';
  $pane = new stdClass();
  $pane->pid = 'new-01d27d83-df51-48aa-8449-de2ad568c1bc';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '4866',
    'override_title' => 1,
    'override_title_heading' => 'h3',
    'override_title_text' => 'PARTICIPATE IN A RESEARCH STUDY!',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '01d27d83-df51-48aa-8449-de2ad568c1bc';
  $display->content['new-01d27d83-df51-48aa-8449-de2ad568c1bc'] = $pane;
  $display->panels['row1right'][3] = 'new-01d27d83-df51-48aa-8449-de2ad568c1bc';
  $pane = new stdClass();
  $pane->pid = 'new-a9123804-0019-4638-af9f-c6be2b045c05';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>This study is funded by the US Department of Education #H327S180002. However, these contents do not necessarily represent the policy of the US Department of Education, and you should not assume endorsement by the Federal Government. Project Officer, Terry L. Jackson, Ed.D.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Funding Information',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box box-border-purple',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a9123804-0019-4638-af9f-c6be2b045c05';
  $display->content['new-a9123804-0019-4638-af9f-c6be2b045c05'] = $pane;
  $display->panels['row1right'][4] = 'new-a9123804-0019-4638-af9f-c6be2b045c05';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['future_quest_island_explorations'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'innovation_exchange_academic_access';
  $page->task = 'page';
  $page->admin_title = 'Innovation Exchange - Academic Access';
  $page->admin_description = '';
  $page->path = 'resources/innovation-exchange/academic-access';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_innovation_exchange_academic_access__panel';
  $handler->task = 'page';
  $handler->subtask = 'innovation_exchange_academic_access';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Academic Access';
  $display->uuid = '3086e043-1d60-4886-83ce-d4d7dc11499b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_innovation_exchange_academic_access__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a7c2bc12-36a0-40f9-b0df-b5b85333e352';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_16';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-Academic-Access-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a7c2bc12-36a0-40f9-b0df-b5b85333e352';
  $display->content['new-a7c2bc12-36a0-40f9-b0df-b5b85333e352'] = $pane;
  $display->panels['row1left'][0] = 'new-a7c2bc12-36a0-40f9-b0df-b5b85333e352';
  $pane = new stdClass();
  $pane->pid = 'new-86b59ba4-3fc9-430a-818b-71fe63c633f0';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'quick links',
    'body' => '<ul>
	<li><a href="https://www.routledge.com/Teaching-Including-and-Supporting-College-Students-with-Intellectual/Kelley-Westling/p/book/9781138618077">Teaching, Including and Supporting Students with Intellectual Disabilities (Chapter 7 in particular)</a></li>
	<li><a href="https://www.ahead.org/professional-resources/white-papers-guiding-documents/intellectual-disabilities-white-paper">AHEAD White Paper </a></li>
	<li><a href="http://www.cast.org/">CAST-About Universal Design for Learning</a></li>
	
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Quick Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box external-links-list',
    'css_id' => 'quicklinks',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '86b59ba4-3fc9-430a-818b-71fe63c633f0';
  $display->content['new-86b59ba4-3fc9-430a-818b-71fe63c633f0'] = $pane;
  $display->panels['row1left'][1] = 'new-86b59ba4-3fc9-430a-818b-71fe63c633f0';
  $pane = new stdClass();
  $pane->pid = 'new-01273cff-35b1-4671-b7e5-c2fb2e6aebb7';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'intro',
    'body' => '<p>Participation in inclusive college courses provides many benefits to students with intellectual disability, such as improved employment outcomes, increased community engagement, meaningful learning alongside college peers, and added diversity and acceptance (Kelley &amp; Westling, 2019; Kleinert, et al., 2012). It is important that faculty members with students with intellectual disability in their classes to be supported with information about how best to include all students so that all learners can benefit&nbsp;from a more diverse classroom.&nbsp; With college program staff and faculty working together, learning opportunities are enriched for all.&nbsp; This Innovation Exchange page &nbsp;answers some frequently asked questions from faculty, highlights some helpful resources&nbsp;and shares the perspectives of faculty who have taught students with ID.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '01273cff-35b1-4671-b7e5-c2fb2e6aebb7';
  $display->content['new-01273cff-35b1-4671-b7e5-c2fb2e6aebb7'] = $pane;
  $display->panels['row1right'][0] = 'new-01273cff-35b1-4671-b7e5-c2fb2e6aebb7';
  $pane = new stdClass();
  $pane->pid = 'new-676bd851-f8c6-4660-ad67-34963d664d38';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-Academic-Access-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '676bd851-f8c6-4660-ad67-34963d664d38';
  $display->content['new-676bd851-f8c6-4660-ad67-34963d664d38'] = $pane;
  $display->panels['row1right'][1] = 'new-676bd851-f8c6-4660-ad67-34963d664d38';
  $pane = new stdClass();
  $pane->pid = 'new-ad763a28-18f1-4422-a8e3-5042f9c7817b';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '4317',
    'override_title' => 1,
    'override_title_heading' => 'h3',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ad763a28-18f1-4422-a8e3-5042f9c7817b';
  $display->content['new-ad763a28-18f1-4422-a8e3-5042f9c7817b'] = $pane;
  $display->panels['row1right'][2] = 'new-ad763a28-18f1-4422-a8e3-5042f9c7817b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['innovation_exchange_academic_access'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'innovation_exchange_accreditation';
  $page->task = 'page';
  $page->admin_title = 'Innovation Exchange - Accreditation';
  $page->admin_description = '';
  $page->path = 'resources/innovation-exchange/accreditation';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_innovation_exchange_accreditation__panel';
  $handler->task = 'page';
  $handler->subtask = 'innovation_exchange_accreditation';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Program Accreditation';
  $display->uuid = '6baba97d-d1e5-4215-b20b-f2d1e5fdf809';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_innovation_exchange_accreditation__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-96258e3f-9f90-449b-a743-590638ecb054';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_15';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-Accreditation-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '96258e3f-9f90-449b-a743-590638ecb054';
  $display->content['new-96258e3f-9f90-449b-a743-590638ecb054'] = $pane;
  $display->panels['row1left'][0] = 'new-96258e3f-9f90-449b-a743-590638ecb054';
  $pane = new stdClass();
  $pane->pid = 'new-e48edb65-e335-4dbf-ba41-6c9db8f28e89';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<ul>
	<li><a href="https://www.chea.org/">Council for Higher Education Accreditation</a></li>
	<li><a href="https://sites.ed.gov/naciqi/">National Advisory Committee on Institutional Quality and Integrity (NACIQI)</a></li>
	<li><a href="https://www2.ed.gov/admins/finaid/accred/index.html">U.S. Department of Education info on accreditation</a></li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Quick Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box external-links-list',
    'css_id' => 'quicklinks',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e48edb65-e335-4dbf-ba41-6c9db8f28e89';
  $display->content['new-e48edb65-e335-4dbf-ba41-6c9db8f28e89'] = $pane;
  $display->panels['row1left'][1] = 'new-e48edb65-e335-4dbf-ba41-6c9db8f28e89';
  $pane = new stdClass();
  $pane->pid = 'new-751025c3-bee3-4676-80b4-eb5eba17881d';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Intro',
    'body' => '<p>In the US, institutions of higher education and programs within the institutions are accredited using standards that help ensure&nbsp;that the educational experience&nbsp; offered to students meets an acceptable level of quality. Program accreditation standards provide guidelines for colleges and universities on how to develop and improve programs, validate these programs within institutions of higher education, and give students and their families an assurance of quality.</p>

<p>In the 2008 Reauthorization of the Higher Education Act, Congress directed the National Coordinating Center to convene a workgroup to develop model program accreditation standards for college programs for students with ID. When implemented, the standards will move the field forward by offering accreditation of college programs that support students with ID.</p>

<p>This page shares resources to help you familiarize yourself with the Standards and learn about the work of the NCC Accreditation Workgroups, both current and past.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'intro',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '751025c3-bee3-4676-80b4-eb5eba17881d';
  $display->content['new-751025c3-bee3-4676-80b4-eb5eba17881d'] = $pane;
  $display->panels['row1right'][0] = 'new-751025c3-bee3-4676-80b4-eb5eba17881d';
  $pane = new stdClass();
  $pane->pid = 'new-6be5171c-67e9-49d4-82dc-9a87d7692171';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-Accreditation-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6be5171c-67e9-49d4-82dc-9a87d7692171';
  $display->content['new-6be5171c-67e9-49d4-82dc-9a87d7692171'] = $pane;
  $display->panels['row1right'][1] = 'new-6be5171c-67e9-49d4-82dc-9a87d7692171';
  $pane = new stdClass();
  $pane->pid = 'new-1454e7b1-6099-4eb6-8481-b6d3f8c53485';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '4302',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1454e7b1-6099-4eb6-8481-b6d3f8c53485';
  $display->content['new-1454e7b1-6099-4eb6-8481-b6d3f8c53485'] = $pane;
  $display->panels['row1right'][2] = 'new-1454e7b1-6099-4eb6-8481-b6d3f8c53485';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['innovation_exchange_accreditation'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'innovation_exchange_comprehensive_transition_and_postsecondary_c';
  $page->task = 'page';
  $page->admin_title = 'Innovation Exchange-Comprehensive Transition and Postsecondary (CTP) Programs';
  $page->admin_description = '';
  $page->path = 'resources/innovation-exchange/ctp-programs';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_innovation_exchange_comprehensive_transition_and_postsecondary_c__panel';
  $handler->task = 'page';
  $handler->subtask = 'innovation_exchange_comprehensive_transition_and_postsecondary_c';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Comprehensive Transition and Postsecondary (CTP) Programs';
  $display->uuid = '6d4a5a28-456f-41dd-837a-9bec8f2e4c84';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_innovation_exchange_comprehensive_transition_and_postsecondary_c__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8841b315-1276-48c0-9f85-42f774d4513b';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-CTP-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8841b315-1276-48c0-9f85-42f774d4513b';
  $display->content['new-8841b315-1276-48c0-9f85-42f774d4513b'] = $pane;
  $display->panels['row1left'][0] = 'new-8841b315-1276-48c0-9f85-42f774d4513b';
  $pane = new stdClass();
  $pane->pid = 'new-2c40f9ff-9dd6-4b67-b193-910c48353e85';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'quick links',
    'body' => '<ul>
	<li><a href="https://studentaid.gov/understand-aid/eligibility/requirements/intellectual-disabilities ">Federal Student Aid for students with intellectual disability: </a></li>
	<li><a href="/college-search?f%5B0%5D=tc_financial_aid%3AYes">Programs in College Search that are Approved CTP Programs)</a></li>
	<li><a href="https://ifap.ed.gov/help-contact-information-school-participation-division">Contact Information for FSA School Participation Teams for questions re: Financial Aid</a></li>
	
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Quick Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box external-links-list',
    'css_id' => 'quicklinks',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2c40f9ff-9dd6-4b67-b193-910c48353e85';
  $display->content['new-2c40f9ff-9dd6-4b67-b193-910c48353e85'] = $pane;
  $display->panels['row1left'][1] = 'new-2c40f9ff-9dd6-4b67-b193-910c48353e85';
  $pane = new stdClass();
  $pane->pid = 'new-914f6826-5e32-451b-a3df-b4a3104a2058';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'intro',
    'body' => '<p>The Higher Education Opportunity Act of 2008 (HEOA) created a new kind of college program specifically for students with intellectual disability – the Comprehensive Transition and Postsecondary (CTP) Program. The Act defined the key requirements that all CTP programs must provide to students, gave a definition of a student with an intellectual disability, and opened up access to federal student aid for students with intellectual disability attending an approved CTP program, even if those students do not have a standard high school diploma or are not matriculating towards a degree.&nbsp; This Innovation Exchange page shares key resources that will assist colleges interested in establishing a CTP program to learn more about these unique programs, to design a CTP program that meets the requirements as outlined in the HEOA, and to submit that program for approval so that eligible students with intellectual disability have access to federal student aid.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '914f6826-5e32-451b-a3df-b4a3104a2058';
  $display->content['new-914f6826-5e32-451b-a3df-b4a3104a2058'] = $pane;
  $display->panels['row1right'][0] = 'new-914f6826-5e32-451b-a3df-b4a3104a2058';
  $pane = new stdClass();
  $pane->pid = 'new-de2107ec-49fa-4d17-b578-0909f198abf2';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-CTP-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'de2107ec-49fa-4d17-b578-0909f198abf2';
  $display->content['new-de2107ec-49fa-4d17-b578-0909f198abf2'] = $pane;
  $display->panels['row1right'][1] = 'new-de2107ec-49fa-4d17-b578-0909f198abf2';
  $pane = new stdClass();
  $pane->pid = 'new-8aeb6505-3a00-47f8-a330-5b0276158d2a';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 1,
    'nid' => '4454',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8aeb6505-3a00-47f8-a330-5b0276158d2a';
  $display->content['new-8aeb6505-3a00-47f8-a330-5b0276158d2a'] = $pane;
  $display->panels['row1right'][2] = 'new-8aeb6505-3a00-47f8-a330-5b0276158d2a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['innovation_exchange_comprehensive_transition_and_postsecondary_c'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'innovation_exchange_dual_enrollment';
  $page->task = 'page';
  $page->admin_title = 'Innovation Exchange - Dual Enrollment';
  $page->admin_description = '';
  $page->path = 'resources/innovation-exchange/dual-enrollment';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_innovation_exchange_dual_enrollment__panel';
  $handler->task = 'page';
  $handler->subtask = 'innovation_exchange_dual_enrollment';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'College-Based Transition Services';
  $display->uuid = 'e76fd768-5d48-4422-a0b5-bba688ac898f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_innovation_exchange_dual_enrollment__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7c9d73cc-6ed4-4bda-8c44-7cfbb5c52b59';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_12';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-DualEnrollment-Resource',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7c9d73cc-6ed4-4bda-8c44-7cfbb5c52b59';
  $display->content['new-7c9d73cc-6ed4-4bda-8c44-7cfbb5c52b59'] = $pane;
  $display->panels['row1left'][0] = 'new-7c9d73cc-6ed4-4bda-8c44-7cfbb5c52b59';
  $pane = new stdClass();
  $pane->pid = 'new-c57f4951-f812-4f3b-81c9-d960e0731900';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Quick Links',
    'body' => '<ul>
<li><a href="http://www.ncset.org/">National Center on Secondary Education and Transition (NCSET)</a></li>
<li><a href="http://www.ncwd-youth.info/">National Collaborative on Workforce and Disability (NCWD)</a></li>
<li><a href="http://www.ngsd.org/">National Gateway to Self Determination</a></li>
<li><a href="https://transitionta.org/">National Technical Assistance Center on Transition (NTACT)</a></li>
<li><a href="http://www.mass.edu/strategic/read_maicei.asp">Massachusetts Inclusive Concurrent Enrollment Initiative (MAICEI)</a></li>
</ul>',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Quick Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box external-links-list',
    'css_id' => 'quicklinks',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c57f4951-f812-4f3b-81c9-d960e0731900';
  $display->content['new-c57f4951-f812-4f3b-81c9-d960e0731900'] = $pane;
  $display->panels['row1left'][1] = 'new-c57f4951-f812-4f3b-81c9-d960e0731900';
  $pane = new stdClass();
  $pane->pid = 'new-3ffb0112-2296-45ef-a706-198d9c1ebe04';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Check out the <strong>College-based Transition Service (CBTS) Affinity Group</strong>, where those who are interested in CBTS can connect with each other to network and connect!&nbsp;</p>

<p class="rtecenter"><a class="btn btn-primary" href="https://docs.google.com/forms/d/e/1FAIpQLSeyuINvZWAn-mvpG12cELuRDypH0JAm0c1x5OMt3IDpjTV4Bw/viewform" role="button">Sign up</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Sign up today!',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => 'join',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3ffb0112-2296-45ef-a706-198d9c1ebe04';
  $display->content['new-3ffb0112-2296-45ef-a706-198d9c1ebe04'] = $pane;
  $display->panels['row1left'][2] = 'new-3ffb0112-2296-45ef-a706-198d9c1ebe04';
  $pane = new stdClass();
  $pane->pid = 'new-d650d262-e626-4fec-9bcf-73412eeb4041';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'College-Based Transition Services Intro',
    'body' => '<p>College-based transition services (CBTS), also know as dual enrollment or concurrent enrollment, provides students with intellectual disability during their final two to three years of secondary education access to college courses, internships, and employment, as well as access to other campus activities.</p>

<p>When designed well, these experiences enable students to participate in career planning with a person-centered planning approach, enroll in college classes for educational and personal enrichment, engage in social activities alongside their college peers, and participate in community-based, paid work experiences that align with their employment goals.</p>

<p>Developing CBTS opportunities takes a commitment from K-12 school systems and college partners. This means understanding the roles of each stakeholder group, sharing the responsibility of communicating the partnership to key educational personnel, and determining what policies and practices need to be developed or enhanced to create this new model for inclusive college-career options.</p>

<p>Among the tasks that school-college partnerships assume are establishing a memorandum of agreement that articulates the roles and responsibilities of each member, developing a timeline for college preparation and enrollment, designing individualized student schedules, and accessing college and community resources.<br />
&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd650d262-e626-4fec-9bcf-73412eeb4041';
  $display->content['new-d650d262-e626-4fec-9bcf-73412eeb4041'] = $pane;
  $display->panels['row1right'][0] = 'new-d650d262-e626-4fec-9bcf-73412eeb4041';
  $pane = new stdClass();
  $pane->pid = 'new-17189539-ce49-4c56-acbe-90bbe57f4209';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-DualEnrollment-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '17189539-ce49-4c56-acbe-90bbe57f4209';
  $display->content['new-17189539-ce49-4c56-acbe-90bbe57f4209'] = $pane;
  $display->panels['row1right'][1] = 'new-17189539-ce49-4c56-acbe-90bbe57f4209';
  $pane = new stdClass();
  $pane->pid = 'new-6fd063f3-d3fb-463e-8085-4bc5504eed5e';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '3970',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6fd063f3-d3fb-463e-8085-4bc5504eed5e';
  $display->content['new-6fd063f3-d3fb-463e-8085-4bc5504eed5e'] = $pane;
  $display->panels['row1right'][2] = 'new-6fd063f3-d3fb-463e-8085-4bc5504eed5e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['innovation_exchange_dual_enrollment'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'innovation_exchange_for_families';
  $page->task = 'page';
  $page->admin_title = 'Innovation Exchange - For Families';
  $page->admin_description = '';
  $page->path = 'resources/innovation-exchange/for-families';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_innovation_exchange_for_families__panel';
  $handler->task = 'page';
  $handler->subtask = 'innovation_exchange_for_families';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'Curated resources for family members of people with intellectual disability about postsecondary education options',
        ),
      ),
    ),
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Information and Resources for Families';
  $display->uuid = '283a265c-4be2-4cf2-8bed-361bdc2c1b32';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_innovation_exchange_for_families__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1503cdff-0038-474d-834c-51640be517d6';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-Families-Resource',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1503cdff-0038-474d-834c-51640be517d6';
  $display->content['new-1503cdff-0038-474d-834c-51640be517d6'] = $pane;
  $display->panels['row1left'][0] = 'new-1503cdff-0038-474d-834c-51640be517d6';
  $pane = new stdClass();
  $pane->pid = 'new-c81b063d-8201-495f-8ffe-e0b440747c15';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_3';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-Families-Resource',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c81b063d-8201-495f-8ffe-e0b440747c15';
  $display->content['new-c81b063d-8201-495f-8ffe-e0b440747c15'] = $pane;
  $display->panels['row1left'][1] = 'new-c81b063d-8201-495f-8ffe-e0b440747c15';
  $pane = new stdClass();
  $pane->pid = 'new-73fa800c-0689-4327-9927-1a7052a720a6';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Quick links',
    'body' => '<ul>
	<li><a href="http://www.pacer.org/transition/">PACER Center\'s National Parent Center on Transition and Employment</a></li>
	<li><a href="https://beachcenter.lsi.ku.edu/beach-home">Beach Center on Disability</a></li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Quick Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box external-links-list',
    'css_id' => 'quicklinks',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '73fa800c-0689-4327-9927-1a7052a720a6';
  $display->content['new-73fa800c-0689-4327-9927-1a7052a720a6'] = $pane;
  $display->panels['row1left'][2] = 'new-73fa800c-0689-4327-9927-1a7052a720a6';
  $pane = new stdClass();
  $pane->pid = 'new-cdff4819-3c0c-4d75-bb59-8b661abcbfa7';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Sign up Today!',
    'body' => '<p>Did you know there is a Families Think College Facebook page? It is available only for family members of people with intellectual and/or developmental disabilities.</p>

<p class="rtecenter"><a class="btn btn-primary" href="https://www.facebook.com/groups/1065141630294756/">Join</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'SIGN UP TODAY!',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => 'join',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'cdff4819-3c0c-4d75-bb59-8b661abcbfa7';
  $display->content['new-cdff4819-3c0c-4d75-bb59-8b661abcbfa7'] = $pane;
  $display->panels['row1left'][3] = 'new-cdff4819-3c0c-4d75-bb59-8b661abcbfa7';
  $pane = new stdClass();
  $pane->pid = 'new-451794eb-3ce3-42c9-8dde-759b6db6b913';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'For Families',
    'body' => '<p>Families play a pivotal role in preparing their sons and daughters for college. They also are there to support them while in college and to assist them in their transition out of college and into the rest of their lives. Think College has pulled together resources to give families some of the tools and information they need to support, encourage, and inform their daughters and sons as they seek out and pursue higher education.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'intro',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '451794eb-3ce3-42c9-8dde-759b6db6b913';
  $display->content['new-451794eb-3ce3-42c9-8dde-759b6db6b913'] = $pane;
  $display->panels['row1right'][0] = 'new-451794eb-3ce3-42c9-8dde-759b6db6b913';
  $pane = new stdClass();
  $pane->pid = 'new-99b5c0da-aee5-48da-893f-7e89bb3517c8';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-Families-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '99b5c0da-aee5-48da-893f-7e89bb3517c8';
  $display->content['new-99b5c0da-aee5-48da-893f-7e89bb3517c8'] = $pane;
  $display->panels['row1right'][1] = 'new-99b5c0da-aee5-48da-893f-7e89bb3517c8';
  $pane = new stdClass();
  $pane->pid = 'new-03b2a018-d31e-4114-ac38-4214b0576611';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 1,
    'nid' => '3624',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '03b2a018-d31e-4114-ac38-4214b0576611';
  $display->content['new-03b2a018-d31e-4114-ac38-4214b0576611'] = $pane;
  $display->panels['row1right'][2] = 'new-03b2a018-d31e-4114-ac38-4214b0576611';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['innovation_exchange_for_families'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'innovation_exchange_for_students';
  $page->task = 'page';
  $page->admin_title = 'Innovation Exchange - For Students';
  $page->admin_description = '';
  $page->path = 'resources/innovation-exchange/for-students';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_innovation_exchange_for_students__panel';
  $handler->task = 'page';
  $handler->subtask = 'innovation_exchange_for_students';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_3col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'row1' => NULL,
      'row2center' => NULL,
      'row2left' => NULL,
      'row2right' => NULL,
      'row3center' => NULL,
      'row3left' => NULL,
      'row3right' => NULL,
      'row4center' => NULL,
      'row4left' => NULL,
      'row4right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Student Corner';
  $display->uuid = 'bbb1b719-acfc-4f7f-a55c-b2cec938c1ed';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_innovation_exchange_for_students__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e1134b64-d6af-4f81-89af-a16434b03514';
  $pane->panel = 'row1';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Welcome to Thinkcollege.net. This is a great place to start learning more about going to college. Below are some resources to help get you started.&nbsp;</p>

<p>If you are looking for something specific our team can help you find it. Send an email to Kathy at our help desk at&nbsp;<a href="mailto:thinkcollegeTA@gmail.com">thinkcollegeTA@gmail.com</a>&nbsp;and someone will get back to you soon.</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e1134b64-d6af-4f81-89af-a16434b03514';
  $display->content['new-e1134b64-d6af-4f81-89af-a16434b03514'] = $pane;
  $display->panels['row1'][0] = 'new-e1134b64-d6af-4f81-89af-a16434b03514';
  $pane = new stdClass();
  $pane->pid = 'new-5d54363a-1bf4-414d-8422-804aa0da5078';
  $pane->panel = 'row2center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Group of students from still of video &quot;is college possible&quot;" class="img-responsive" src="/sites/default/files/images/Intellectual-Disability-and-College-It-Is-Possible.png" /></p>

<h4><a href="https://thinkcollege.net/resource/inclusive-academics-campus-culture/intellectual-disability-and-college-it-is-possible">Intellectual Disability and College? It Is Possible!</a></h4>

<p>In this short video, students from Colorado talk about being enrolled in a college program and how different college life is from high school.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'On the pathway!',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5d54363a-1bf4-414d-8422-804aa0da5078';
  $display->content['new-5d54363a-1bf4-414d-8422-804aa0da5078'] = $pane;
  $display->panels['row2center'][0] = 'new-5d54363a-1bf4-414d-8422-804aa0da5078';
  $pane = new stdClass();
  $pane->pid = 'new-0f08ab6f-fe26-4cd0-b0b7-e475eaaf2af8';
  $pane->panel = 'row2left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Mentor sitting at a table with his mentee" class="img-responsive" src="/sites/default/files/images/mentorship.jpg" /></p>

<h4><a href="/resource/mentoring/coaches-and-mentors-helping-college-students-thrive">Working with a coach or mentor</a></h4>

<div>College can be a lot to manage. But don’t worry, there are people who will help you along the way. Watch this video to learn about mentors and coaches.</div>

<div>&nbsp;</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Getting help along the way',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0f08ab6f-fe26-4cd0-b0b7-e475eaaf2af8';
  $display->content['new-0f08ab6f-fe26-4cd0-b0b7-e475eaaf2af8'] = $pane;
  $display->panels['row2left'][0] = 'new-0f08ab6f-fe26-4cd0-b0b7-e475eaaf2af8';
  $pane = new stdClass();
  $pane->pid = 'new-a40d1007-70a0-4015-9c88-e7da505e2c82';
  $pane->panel = 'row2right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Peach" class="img-responsive" src="/sites/default/files/images/peach-spotlight.jpg" /></p>

<h4><a href="https://thinkcollege.net/think-college-news/student-spotlight-get-to-know-what-students-think-about-their-life-in-college">10 questions with a college student</a></h4>

<p>Every month, we interview a student about college. Click on this link to see the list of the Student Spotlight interviews.&nbsp;</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Student Spotlight',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a40d1007-70a0-4015-9c88-e7da505e2c82';
  $display->content['new-a40d1007-70a0-4015-9c88-e7da505e2c82'] = $pane;
  $display->panels['row2right'][0] = 'new-a40d1007-70a0-4015-9c88-e7da505e2c82';
  $pane = new stdClass();
  $pane->pid = 'new-b036ac4a-6d8a-4bb0-919f-b35ce4a8817f';
  $pane->panel = 'row3center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Student Liz sitting on campus" class="img-responsive" src="/sites/default/files/images/liz-vanderbilt.jpg" /></p>

<h4><a href="https://www.youtube.com/watch?v=nu3BSNOzUJw">Hear from students at Vanderbilt University</a></h4>

<p>Students at Next Steps at Vanderbilt talk about what it’s like to be in college. They learn new things in classes, make new friends, become more independent, and have work internships. Hear what it means to them to be included on campus.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'You Can Go to College',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b036ac4a-6d8a-4bb0-919f-b35ce4a8817f';
  $display->content['new-b036ac4a-6d8a-4bb0-919f-b35ce4a8817f'] = $pane;
  $display->panels['row3center'][0] = 'new-b036ac4a-6d8a-4bb0-919f-b35ce4a8817f';
  $pane = new stdClass();
  $pane->pid = 'new-1e681db7-f0bb-4c20-ac26-d3fa7e4cea53';
  $pane->panel = 'row3left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Micah (student) walking to class" class="img-responsive" src="/sites/default/files/images/micah_walking_to_class_in_dan_habibs_intelligent_lives_.jpg" /></p>

<h4><a href="https://intelligentlives.org/">Award-winning film explores intelligence in depth</a></h4>

<p>The movie <a href="https://intelligentlives.org/">Intelligent Lives</a>&nbsp;explores how people&nbsp;think&nbsp;about intelligence and features&nbsp;three young adults (<a href="https://intelligentlives.org/">Micah, Naieer, and Naomie</a>), showing them in their schools, communities, families, and at work.</p>
<p>&nbsp;</p>',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'What is Intelligence?',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1e681db7-f0bb-4c20-ac26-d3fa7e4cea53';
  $display->content['new-1e681db7-f0bb-4c20-ac26-d3fa7e4cea53'] = $pane;
  $display->panels['row3left'][0] = 'new-1e681db7-f0bb-4c20-ac26-d3fa7e4cea53';
  $pane = new stdClass();
  $pane->pid = 'new-acdd8ae9-059e-476f-9324-c6353779a2da';
  $pane->panel = 'row3right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Matilda, a student" class="img-responsive" src="/sites/default/files/images/matilda.jpg" /></p>

<h4><a href="/resources/think-college-public-awareness">Interviews with 5 Students</a></h4>

<p>In this video, 5 students with ID talk about what college means for them. Think College uses it to spread the message that all students with disabilities can go to college. Share it with your teachers, family, and friends!</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Spread the Word',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'acdd8ae9-059e-476f-9324-c6353779a2da';
  $display->content['new-acdd8ae9-059e-476f-9324-c6353779a2da'] = $pane;
  $display->panels['row3right'][0] = 'new-acdd8ae9-059e-476f-9324-c6353779a2da';
  $pane = new stdClass();
  $pane->pid = 'new-e85d4936-1216-4008-9cc6-896b5d663673';
  $pane->panel = 'row4center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Liz Weintraub in front of the Capitol Building" class="img-responsive" src="/sites/default/files/images/liz-steps.jpg" /></p>

<h4><a href="http://docs.google.com/forms/d/e/1FAIpQLSeySehuFFTp9mx7xGjUFfBG-iWohpxsxudbmnFdliE7esa6fw/viewform">Learn from a professional advocate</a></h4>

<p><a href="https://docs.google.com/forms/d/e/1FAIpQLSeySehuFFTp9mx7xGjUFfBG-iWohpxsxudbmnFdliE7esa6fw/viewform">Click here to join</a> the Emerging Advocates group lead by Liz Weintraub, from AUCD. Liz and current and past college students gather on Zoom to learn about advocacy and why it’s important. The group meets about 4 times a year.</p>

<p>&nbsp;</p>

<p>&nbsp;</p><br>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Emerging Advocates Group',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e85d4936-1216-4008-9cc6-896b5d663673';
  $display->content['new-e85d4936-1216-4008-9cc6-896b5d663673'] = $pane;
  $display->panels['row4center'][0] = 'new-e85d4936-1216-4008-9cc6-896b5d663673';
  $pane = new stdClass();
  $pane->pid = 'new-05531ba1-42ff-411e-b6ba-73cd42c8ba5f';
  $pane->panel = 'row4left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Boy looking up with the word &quot;college&quot; written in the sky" class="img-responsive" src="/sites/default/files/images/going-to-college.jpg" /></p>

<h4><a href="http://going-to-college.org/">This website will help you get ready for college</a></h4>

<p>The <a href="http://going-to-college.org/">Going to College website</a> contains information about living college life with a disability. It’s designed for high school students and provides video clips, activities, and additional resources that can help you get a head start in planning for college. The video clips offer a way for you to hear firsthand from students with disabilities who have been successful.</p>

',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Planning for College',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '05531ba1-42ff-411e-b6ba-73cd42c8ba5f';
  $display->content['new-05531ba1-42ff-411e-b6ba-73cd42c8ba5f'] = $pane;
  $display->panels['row4left'][0] = 'new-05531ba1-42ff-411e-b6ba-73cd42c8ba5f';
  $pane = new stdClass();
  $pane->pid = 'new-468b715b-ee4e-4b0e-ae73-d83471e63ddf';
  $pane->panel = 'row4right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Magnifying Glass" class="img-responsive" src="/sites/default/files/images/magnifying-glass.jpg" /></p>

<h4><a href="/college-search">Find one that’s right for you!</a></h4>

<p>This webpage has information on more than 300 college programs for students with ID. You can search for a college that is right for you!<br />
&nbsp;</p>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'College Search',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '468b715b-ee4e-4b0e-ae73-d83471e63ddf';
  $display->content['new-468b715b-ee4e-4b0e-ae73-d83471e63ddf'] = $pane;
  $display->panels['row4right'][0] = 'new-468b715b-ee4e-4b0e-ae73-d83471e63ddf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['innovation_exchange_for_students'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'innovation_exchange_paying_for_college';
  $page->task = 'page';
  $page->admin_title = 'Innovation Exchange - Paying for College';
  $page->admin_description = '';
  $page->path = 'resources/innovation-exchange/paying-for-college';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_innovation_exchange_paying_for_college__panel';
  $handler->task = 'page';
  $handler->subtask = 'innovation_exchange_paying_for_college';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'Curated resources about ways to fund postsecondary education opportunities for students with intellectual disability',
        ),
      ),
    ),
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Paying for College';
  $display->uuid = 'ca2b385a-469f-4af7-b5a0-f94b52caa294';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_innovation_exchange_paying_for_college__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4a9097f4-cac9-408c-ad20-ed4deed066b3';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-PayingForCollege-Resource',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4a9097f4-cac9-408c-ad20-ed4deed066b3';
  $display->content['new-4a9097f4-cac9-408c-ad20-ed4deed066b3'] = $pane;
  $display->panels['row1left'][0] = 'new-4a9097f4-cac9-408c-ad20-ed4deed066b3';
  $pane = new stdClass();
  $pane->pid = 'new-e4e734cb-7f4b-4e4c-bcaa-1eaa37038ca3';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Quick links',
    'body' => '<ul>
	<li><a href="https://studentaid.ed.gov/sa/eligibility/intellectual-disabilities">Federal Student Aid for Students with Intellectual Disabilities</a></li>
	<li><a href="https://rubysrainbow.org/">Ruby’s Rainbow: Scholarships for Students with Down Syndrome</a></li>
	<li><a href="https://www.ndss.org/engage/ndss-scholarships/oneill-tabani-enrichment-fund/">O’Neill Tabani Enrichment Fund</a></li>
	<li><a href="http://www.passonline.org/">PASS Plans – Plan for Achieving Self Support: A Social Security Program</a></li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Quick Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box external-links-list',
    'css_id' => 'quicklinks',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e4e734cb-7f4b-4e4c-bcaa-1eaa37038ca3';
  $display->content['new-e4e734cb-7f4b-4e4c-bcaa-1eaa37038ca3'] = $pane;
  $display->panels['row1left'][1] = 'new-e4e734cb-7f4b-4e4c-bcaa-1eaa37038ca3';
  $pane = new stdClass();
  $pane->pid = 'new-4e16c326-1981-45c2-8b1b-2cc555a1dc0c';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Paying for College',
    'body' => '<p>One of the greatest challenges for college attendance is how to pay for it, and this can be particularly true for students with intellectual disability. But there are several avenues to explore for funding the cost of a college program. Students may be able to use vocational rehabilitation funds, scholarships, or federal financial aid. They may also take advantage of PASS plans related to Social Security benefits, among other things.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'intro',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4e16c326-1981-45c2-8b1b-2cc555a1dc0c';
  $display->content['new-4e16c326-1981-45c2-8b1b-2cc555a1dc0c'] = $pane;
  $display->panels['row1right'][0] = 'new-4e16c326-1981-45c2-8b1b-2cc555a1dc0c';
  $pane = new stdClass();
  $pane->pid = 'new-65427c29-9dbf-4642-94cd-688ce639aa3a';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-PayingForCollege-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '65427c29-9dbf-4642-94cd-688ce639aa3a';
  $display->content['new-65427c29-9dbf-4642-94cd-688ce639aa3a'] = $pane;
  $display->panels['row1right'][1] = 'new-65427c29-9dbf-4642-94cd-688ce639aa3a';
  $pane = new stdClass();
  $pane->pid = 'new-b1e26d71-98d8-472f-9e55-817a29bfd4b2';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '3626',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b1e26d71-98d8-472f-9e55-817a29bfd4b2';
  $display->content['new-b1e26d71-98d8-472f-9e55-817a29bfd4b2'] = $pane;
  $display->panels['row1right'][2] = 'new-b1e26d71-98d8-472f-9e55-817a29bfd4b2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['innovation_exchange_paying_for_college'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'innovation_exchange_peer_mentors';
  $page->task = 'page';
  $page->admin_title = 'Innovation Exchange - Peer Mentors';
  $page->admin_description = '';
  $page->path = 'resources/innovation-exchange/peer-mentors';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_innovation_exchange_peer_mentors__panel';
  $handler->task = 'page';
  $handler->subtask = 'innovation_exchange_peer_mentors';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Peer Mentors';
  $display->uuid = '95484e2b-fcb9-4aff-89ba-01dee2d32af7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_innovation_exchange_peer_mentors__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-eaccff3b-1180-4445-a516-e4ed7147360f';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-Peer-Mentors-Resource',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'eaccff3b-1180-4445-a516-e4ed7147360f';
  $display->content['new-eaccff3b-1180-4445-a516-e4ed7147360f'] = $pane;
  $display->panels['row1left'][0] = 'new-eaccff3b-1180-4445-a516-e4ed7147360f';
  $pane = new stdClass();
  $pane->pid = 'new-3903765c-2a66-4aa1-968b-e464048f0714';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'quick links',
    'body' => '<ul>
	<li><a href="https://www.routledge.com/Teaching-Including-and-Supporting-College-Students-with-Intellectual/Kelley-Westling/p/book/9781138618084">Teaching, Including, and Supporting College Students with Intellectual Disabilities (Book: Chapters 9 and 11) </a></li>
	<li><a href="https://nationalmentoringresourcecenter.org/">National Mentoring Resource Center</a></li>
</ul>

',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Quick Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box external-links-list',
    'css_id' => 'quicklinks',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3903765c-2a66-4aa1-968b-e464048f0714';
  $display->content['new-3903765c-2a66-4aa1-968b-e464048f0714'] = $pane;
  $display->panels['row1left'][1] = 'new-3903765c-2a66-4aa1-968b-e464048f0714';
  $pane = new stdClass();
  $pane->pid = 'new-9a2225d5-16f3-47f0-8852-bbc02b588021';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Many, if not most, college programs offer peer mentor support to students attending their programs. Numerous studies have examined the impact and attitudinal changes with peer mentors as they learn together in shared college experiences with individuals with intellectual disability (ID). Studies show changes in attitudes, and increases in acceptance of individuals with disabilities in the college community. Mentors report valuing the hands-on training, career affirmations, and opportunities to advocate for more inclusive practices (Beattie, Anderson, &amp; Antonak, 1997; Carroll, Petroff, &amp; Blumberg, 2009; Carter, 2019; Casale-Giannola &amp; Kamens, 2006; Causton-Theoharris, Ashby, &amp; DeClouette, 2009; Culnane, Eisenman, &amp; Murphy, 2016; Eichinger, Rizzo, &amp; Sirotnik, 1991; Griffin, Mello, Glover, Carter, &amp; Hodapp, 2016; Hastings, Hewes, Lock, &amp; Witting, 1996; Rimmerman, Hozmi, &amp; Duvdevany, 2000; Sowell &amp; Maddox, 2015; Westling, Kelley, Cain, &amp; Prohn, 2013). In this Exchange, Think College offers a review of resources related to recruiting and training of peer mentors through video guides for note-taking, organizational skills, test taking strategies, and time management, online learning modules, research studies, and several peer mentoring handbooks to further define various peer mentor roles and responsibilities.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9a2225d5-16f3-47f0-8852-bbc02b588021';
  $display->content['new-9a2225d5-16f3-47f0-8852-bbc02b588021'] = $pane;
  $display->panels['row1right'][0] = 'new-9a2225d5-16f3-47f0-8852-bbc02b588021';
  $pane = new stdClass();
  $pane->pid = 'new-760e8abd-df4b-4fb9-8092-27567162beb3';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-Peer-Mentors-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '760e8abd-df4b-4fb9-8092-27567162beb3';
  $display->content['new-760e8abd-df4b-4fb9-8092-27567162beb3'] = $pane;
  $display->panels['row1right'][1] = 'new-760e8abd-df4b-4fb9-8092-27567162beb3';
  $pane = new stdClass();
  $pane->pid = 'new-19b48299-a4eb-4b15-9ccb-001904a95aef';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 1,
    'nid' => '4426',
    'override_title' => 1,
    'override_title_heading' => 'h3',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '19b48299-a4eb-4b15-9ccb-001904a95aef';
  $display->content['new-19b48299-a4eb-4b15-9ccb-001904a95aef'] = $pane;
  $display->panels['row1right'][2] = 'new-19b48299-a4eb-4b15-9ccb-001904a95aef';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['innovation_exchange_peer_mentors'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'innovation_exchange_preparing_for_college';
  $page->task = 'page';
  $page->admin_title = 'Innovation Exchange - Preparing for College';
  $page->admin_description = '';
  $page->path = 'resources/innovation-exchange/preparing-for-college';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_innovation_exchange_preparing_for_college__panel';
  $handler->task = 'page';
  $handler->subtask = 'innovation_exchange_preparing_for_college';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Preparing for College';
  $display->uuid = '6a2dc6d0-599f-4a7d-8c5a-1d9050666cbb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_innovation_exchange_preparing_for_college__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9de76ce0-30f0-4f5b-b519-07f7562677b9';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_24';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-PreparingForCollege-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9de76ce0-30f0-4f5b-b519-07f7562677b9';
  $display->content['new-9de76ce0-30f0-4f5b-b519-07f7562677b9'] = $pane;
  $display->panels['row1left'][0] = 'new-9de76ce0-30f0-4f5b-b519-07f7562677b9';
  $pane = new stdClass();
  $pane->pid = 'new-a1c22a32-323c-4552-9105-d13c09083935';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'quick links',
    'body' => '<ul>
	<li><a href="/resource/transition-planning/preparing-students-with-idd-for-college-recommendations-for-educators">Preparing Students with ID/D for College: Recommendations for Educators &amp; Families</a></li>
	<li><a href="/resource/admissions/the-college-application-process-it-takes-a-village-webinar-resources?utm_source=April+2020+NCC+Newsletter&amp;utm_campaign=April+2020+NCC+newsletter&amp;utm_medium=email">The College Application Process: It Takes a Village</a></li>
	<li><a href="/resource/transition-planning/exploring-inclusive-college-opportunities-for-your-child-with-id">Exploring Inclusive College Opportunities for Your Child with ID</a></li>
	<li><a href="http://going-to-college.org/">Going to College</a><u> </u></li>
	<li><a href="https://www.pacer.org/transition/learning-center/postsecondary/?utm_source=February+2020+NCC+Newsletter&amp;utm_campaign=February+2020+NCC+newsletter&amp;utm_medium=email">Preparing for Postsecondary Education:&nbsp; What Families Need to Know</a></li>
	<li><a href="https://www.washington.edu/doit/preparing-college-online-tutorial">Preparing for College:&nbsp; An Online Tutorial</a></li>
	<li><a href="https://centerontransition.org/training/getready.cfm">Get Ready for College</a></li>
	<li><a href="https://www.imdetermined.org/">I’m Determined</a></li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Quick Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box external-links-list',
    'css_id' => 'quicklinks',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a1c22a32-323c-4552-9105-d13c09083935';
  $display->content['new-a1c22a32-323c-4552-9105-d13c09083935'] = $pane;
  $display->panels['row1left'][1] = 'new-a1c22a32-323c-4552-9105-d13c09083935';
  $pane = new stdClass();
  $pane->pid = 'new-c2fb1bf9-b415-4624-94de-0f04a3c27472';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'intro',
    'body' => '<p>Planning for college takes time, preparation, and organization. With the wide variety of postsecondary education options available for students with intellectual disability (ID), exploring these choices can be an exciting but overwhelming process. Resources on this page will provide guidance on supporting students to prepare for college, planning and conducting the college search, and understanding the supports that can be accessed in college.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c2fb1bf9-b415-4624-94de-0f04a3c27472';
  $display->content['new-c2fb1bf9-b415-4624-94de-0f04a3c27472'] = $pane;
  $display->panels['row1right'][0] = 'new-c2fb1bf9-b415-4624-94de-0f04a3c27472';
  $pane = new stdClass();
  $pane->pid = 'new-7ce20490-a087-45bb-9f67-d609fe1b94e3';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-PreparingForCollege-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7ce20490-a087-45bb-9f67-d609fe1b94e3';
  $display->content['new-7ce20490-a087-45bb-9f67-d609fe1b94e3'] = $pane;
  $display->panels['row1right'][1] = 'new-7ce20490-a087-45bb-9f67-d609fe1b94e3';
  $pane = new stdClass();
  $pane->pid = 'new-a4ff259c-ff87-4914-8da3-9013e4065fd2';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '4469',
    'override_title' => 1,
    'override_title_heading' => 'h3',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a4ff259c-ff87-4914-8da3-9013e4065fd2';
  $display->content['new-a4ff259c-ff87-4914-8da3-9013e4065fd2'] = $pane;
  $display->panels['row1right'][2] = 'new-a4ff259c-ff87-4914-8da3-9013e4065fd2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['innovation_exchange_preparing_for_college'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'innovation_exchange_program_development';
  $page->task = 'page';
  $page->admin_title = 'Innovation Exchange - Program Development';
  $page->admin_description = '';
  $page->path = 'resources/innovation-exchange/program-development';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_innovation_exchange_program_development__panel';
  $handler->task = 'page';
  $handler->subtask = 'innovation_exchange_program_development';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(),
    ),
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Program Development';
  $display->uuid = '88f59eb9-b692-4eee-baa9-d01d5aa620ba';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_innovation_exchange_program_development__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2e6bc4ed-51b9-4a93-8453-21a9a9b84ffc';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-ProgramDev-Resource',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2e6bc4ed-51b9-4a93-8453-21a9a9b84ffc';
  $display->content['new-2e6bc4ed-51b9-4a93-8453-21a9a9b84ffc'] = $pane;
  $display->panels['row1left'][0] = 'new-2e6bc4ed-51b9-4a93-8453-21a9a9b84ffc';
  $pane = new stdClass();
  $pane->pid = 'new-8b6c48fe-5254-4f71-850f-95860640e1d5';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Program Development',
    'body' => '<p>When getting started with the establishment of an inclusive postsecondary education option for students with ID, there are many things to consider. You need to articulate the overall vision for the new endeavor. Administrative issues such as gaining support at your college/university, developing an operating budget and staffing needs will need to be addressed. Equally important are details of the program operations, such as the course of study your students will follow, the credential students will earn, career development and the connection with the college or university’s career services and how students will be supported throughout all campus activities of their choosing.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'intro',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8b6c48fe-5254-4f71-850f-95860640e1d5';
  $display->content['new-8b6c48fe-5254-4f71-850f-95860640e1d5'] = $pane;
  $display->panels['row1right'][0] = 'new-8b6c48fe-5254-4f71-850f-95860640e1d5';
  $pane = new stdClass();
  $pane->pid = 'new-3964859f-abc9-4380-92ab-2a0d448a9c67';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-ProgramDev-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3964859f-abc9-4380-92ab-2a0d448a9c67';
  $display->content['new-3964859f-abc9-4380-92ab-2a0d448a9c67'] = $pane;
  $display->panels['row1right'][1] = 'new-3964859f-abc9-4380-92ab-2a0d448a9c67';
  $pane = new stdClass();
  $pane->pid = 'new-f0008d60-1c58-40b1-a47c-281c9ebb9278';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '3810',
    'override_title' => 1,
    'override_title_heading' => 'h3',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f0008d60-1c58-40b1-a47c-281c9ebb9278';
  $display->content['new-f0008d60-1c58-40b1-a47c-281c9ebb9278'] = $pane;
  $display->panels['row1right'][2] = 'new-f0008d60-1c58-40b1-a47c-281c9ebb9278';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['innovation_exchange_program_development'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'innovation_exchange_student_credentials';
  $page->task = 'page';
  $page->admin_title = 'Innovation Exchange - Student Credentials';
  $page->admin_description = '';
  $page->path = 'resources/innovation-exchange/student-credentials';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_innovation_exchange_student_credentials__panel';
  $handler->task = 'page';
  $handler->subtask = 'innovation_exchange_student_credentials';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Student Credentials';
  $display->uuid = 'b3bead5b-4f29-4802-8a85-763841c7e664';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_innovation_exchange_student_credentials__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5d7e3826-f989-4d22-b7d8-2916ceccd962';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_20';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-StudentCredentials-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5d7e3826-f989-4d22-b7d8-2916ceccd962';
  $display->content['new-5d7e3826-f989-4d22-b7d8-2916ceccd962'] = $pane;
  $display->panels['row1left'][0] = 'new-5d7e3826-f989-4d22-b7d8-2916ceccd962';
  $pane = new stdClass();
  $pane->pid = 'new-643417ce-911e-4e9b-b11a-eafa69180f43';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'quick links',
    'body' => '<ul>
	<li><a href="https://www.nationalskillscoalition.org">National Skills Coalition</a>: National Skills Coalition is a broad-based coalition working toward a vision of an America that grows its economy by investing in its people so that every worker and every industry has the skills to compete and prosper.</li>
	<li><a href="/technical-assistance/affinity-groups/ncc-credentials">Student Credentials in Inclusive Higher Education Affinity Group</a>: The Student Credentials Affinity group brings together professionals, researchers, advocates, policymakers and educators interested in discussing the credential landscape in postsecondary education. This is an open-access special interest group targeted at individuals who want to contribute to the discussion of "meaningful credentials" for students with intellectual disabilities.</li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Quick Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box external-links-list',
    'css_id' => 'quicklinks',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '643417ce-911e-4e9b-b11a-eafa69180f43';
  $display->content['new-643417ce-911e-4e9b-b11a-eafa69180f43'] = $pane;
  $display->panels['row1left'][1] = 'new-643417ce-911e-4e9b-b11a-eafa69180f43';
  $pane = new stdClass();
  $pane->pid = 'new-937e313b-fcdf-4633-97c6-1d90242cc97c';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Sign up Today!',
    'body' => '<p>Sign Up Today! Check out the <strong>Student Credentials Group</strong>, where those with similar interests can connect with each other!</p>

<p class="rtecenter"><a class="btn btn-primary" href="https://thinkcollege.net/technical-assistance/affinity-groups/ncc-credentials">Sign up</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Sign up Today!',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => 'join',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '937e313b-fcdf-4633-97c6-1d90242cc97c';
  $display->content['new-937e313b-fcdf-4633-97c6-1d90242cc97c'] = $pane;
  $display->panels['row1left'][2] = 'new-937e313b-fcdf-4633-97c6-1d90242cc97c';
  $pane = new stdClass();
  $pane->pid = 'new-4c3e3a4f-290a-4d10-8d9a-5d47716419b9';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'intro',
    'body' => '<p>A growing number of institutions of higher education (IHE) are enrolling students with intellectual disability (ID). Programs for students with ID offer a range of credentials upon completion of programs of study. These credentials vary in their format and structure and the extent to which they are aligned with standard IHE credential development or provision structures. But in many cases, they represent the first credential available at these IHEs to this traditionally marginalized group of learners.</p>
<p>The IHE credential landscape generally is expanding rapidly to include online credentials, micro and nanodegrees, and non-degree credentials of value. Students, employers, researchers, policymakers, educators and advocates are considering the question: What are the characteristics of a "meaningful credential"? The resources on this page provide information and insights about credentials for students with ID, and also offer context about the credential landscape nationally.
</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4c3e3a4f-290a-4d10-8d9a-5d47716419b9';
  $display->content['new-4c3e3a4f-290a-4d10-8d9a-5d47716419b9'] = $pane;
  $display->panels['row1right'][0] = 'new-4c3e3a4f-290a-4d10-8d9a-5d47716419b9';
  $pane = new stdClass();
  $pane->pid = 'new-511a8612-8f0e-432e-8c36-4675a8f347e2';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-StudentCredentials-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '511a8612-8f0e-432e-8c36-4675a8f347e2';
  $display->content['new-511a8612-8f0e-432e-8c36-4675a8f347e2'] = $pane;
  $display->panels['row1right'][1] = 'new-511a8612-8f0e-432e-8c36-4675a8f347e2';
  $pane = new stdClass();
  $pane->pid = 'new-8fddb792-6881-4be0-b084-df8432c2fb5c';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 1,
    'nid' => '4354',
    'override_title' => 1,
    'override_title_heading' => 'h3',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8fddb792-6881-4be0-b084-df8432c2fb5c';
  $display->content['new-8fddb792-6881-4be0-b084-df8432c2fb5c'] = $pane;
  $display->panels['row1right'][2] = 'new-8fddb792-6881-4be0-b084-df8432c2fb5c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['innovation_exchange_student_credentials'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'innovation_exchange_vocational_rehabilitation';
  $page->task = 'page';
  $page->admin_title = 'Innovation Exchange - Vocational Rehabilitation';
  $page->admin_description = '';
  $page->path = 'resources/innovation-exchange/vocational-rehabilitation';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_innovation_exchange_vocational_rehabilitation__panel';
  $handler->task = 'page';
  $handler->subtask = 'innovation_exchange_vocational_rehabilitation';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'Curated resources on how vocational rehabilitation agencies can support people with intellectual disability to attend college',
        ),
      ),
    ),
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Vocational Rehabilitation';
  $display->uuid = '5664e925-a69c-49b5-b673-8b2799a8e937';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_innovation_exchange_vocational_rehabilitation__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3dbffebb-fb1b-4dd9-a22c-70c833cbc26b';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-VocRehab-Resource',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3dbffebb-fb1b-4dd9-a22c-70c833cbc26b';
  $display->content['new-3dbffebb-fb1b-4dd9-a22c-70c833cbc26b'] = $pane;
  $display->panels['row1left'][0] = 'new-3dbffebb-fb1b-4dd9-a22c-70c833cbc26b';
  $pane = new stdClass();
  $pane->pid = 'new-b25a290f-fab0-4e0b-bb4c-6b18b135bd82';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>&nbsp;</p>

<ul>
	<li><a href="https://www2.ed.gov/about/offices/list/osers/rsa/index.html">Rehabilitation Services Administration (RSA) </a></li>
	<li><a href="https://www.csavr.org">Council of State Administrators of Vocational Rehabilitation (CSAVR)</a></li>
	<li><a href="https://www.ssa.gov/work/">Social Security Administration: Ticket to Work</a></li>
	<li><a href="https://nationalrehab.org">National Rehabilitation Association (NRA)</a></li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Quick Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box external-links-list',
    'css_id' => 'quicklinks',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b25a290f-fab0-4e0b-bb4c-6b18b135bd82';
  $display->content['new-b25a290f-fab0-4e0b-bb4c-6b18b135bd82'] = $pane;
  $display->panels['row1left'][1] = 'new-b25a290f-fab0-4e0b-bb4c-6b18b135bd82';
  $pane = new stdClass();
  $pane->pid = 'new-ce4fcef9-93bb-463a-939a-dd747649b7ab';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Sign up today!',
    'body' => '<p>Check out the <strong>Vocational Rehabilitation Affinity Group</strong>, where those who are interested in VR can connect with each other to network and connect!</p>

<p class="rtecenter"><a class="btn btn-primary" href="http://www.surveygizmo.com/s3/3834983/VR-Affinity-Group-Participant-Survey">Sign up</a></p>',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Sign up today!',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => 'join',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ce4fcef9-93bb-463a-939a-dd747649b7ab';
  $display->content['new-ce4fcef9-93bb-463a-939a-dd747649b7ab'] = $pane;
  $display->panels['row1left'][2] = 'new-ce4fcef9-93bb-463a-939a-dd747649b7ab';
  $pane = new stdClass();
  $pane->pid = 'new-b30fe4df-b619-4915-8fb2-4fe3761d8ecc';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Vocational Rehab',
    'body' => '<p>Vocational rehabilitation, or VR, programs exist in each state and territory. VR agencies support people with disabilities to find and keep competitive, integrated employment.</p>

<p>This VR mission aligns well with inclusive higher education programs, which support people with intellectual disability to access college. Building a strong relationship between VR and these college programs is essential for helping people with intellectual disability to increase their independence, find and keep fulfilling jobs, and boost their self-sufficiency.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'intro',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b30fe4df-b619-4915-8fb2-4fe3761d8ecc';
  $display->content['new-b30fe4df-b619-4915-8fb2-4fe3761d8ecc'] = $pane;
  $display->panels['row1right'][0] = 'new-b30fe4df-b619-4915-8fb2-4fe3761d8ecc';
  $pane = new stdClass();
  $pane->pid = 'new-d4b2c7de-4e49-4c9a-b72d-414d3312f43c';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-VocRehab-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd4b2c7de-4e49-4c9a-b72d-414d3312f43c';
  $display->content['new-d4b2c7de-4e49-4c9a-b72d-414d3312f43c'] = $pane;
  $display->panels['row1right'][1] = 'new-d4b2c7de-4e49-4c9a-b72d-414d3312f43c';
  $pane = new stdClass();
  $pane->pid = 'new-0636911c-c8a9-4f67-be93-8478c30504f7';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '3625',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0636911c-c8a9-4f67-be93-8478c30504f7';
  $display->content['new-0636911c-c8a9-4f67-be93-8478c30504f7'] = $pane;
  $display->panels['row1right'][2] = 'new-0636911c-c8a9-4f67-be93-8478c30504f7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['innovation_exchange_vocational_rehabilitation'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'key_resources_for_tpsids';
  $page->task = 'page';
  $page->admin_title = 'Key Resources for TPSIDs';
  $page->admin_description = '';
  $page->path = 'about/tpsid/key-resources-for-tpsids';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'perm',
        'not' => FALSE,
        'settings' => array(
          'perm' => 'access content',
        ),
      ),
      1 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 7,
            1 => 3,
            2 => 14,
          ),
        ),
      ),
    ),
  );
  $page->menu = array(
    'name' => 'main-menu',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => 'Key Resources for TPSIDs',
    'type' => 'normal',
    'weight' => '0',
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_key_resources_for_tpsids__panel';
  $handler->task = 'page';
  $handler->subtask = 'key_resources_for_tpsids';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Key Resources for TPSIDs';
  $display->uuid = '4b258d32-edf3-40cf-bcce-c27fefb37350';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_key_resources_for_tpsids__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5cd52360-5ffd-4ac2-80ea-d7aaf0c50b5c';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'TpsidKeyResources-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5cd52360-5ffd-4ac2-80ea-d7aaf0c50b5c';
  $display->content['new-5cd52360-5ffd-4ac2-80ea-d7aaf0c50b5c'] = $pane;
  $display->panels['row1left'][0] = 'new-5cd52360-5ffd-4ac2-80ea-d7aaf0c50b5c';
  $pane = new stdClass();
  $pane->pid = 'new-4cb918f4-1d85-4ece-8473-d3ef81fe3799';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'block2',
    'body' => '<p>In the&nbsp;<a href="https://thinkcollege.net/resources/resources-by-topic"><b>Resources by Topic</b></a>&nbsp;section of our website, you will find curated resources on several key topics related to the development and operation of college programs for students with ID.&nbsp;&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Resources by Topic',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4cb918f4-1d85-4ece-8473-d3ef81fe3799';
  $display->content['new-4cb918f4-1d85-4ece-8473-d3ef81fe3799'] = $pane;
  $display->panels['row1left'][1] = 'new-4cb918f4-1d85-4ece-8473-d3ef81fe3799';
  $pane = new stdClass();
  $pane->pid = 'new-9657e9d9-e293-401d-b804-ccce8c12b72d';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'block1',
    'body' => '<p>The National Coordinating Center has set up a <strong><a href="https://www.facebook.com/groups/786344151769234">Facebook group for staff of college programs</a> </strong>to touch base virtually both through posts on the page and regularly scheduled "virtual support groups" where program staff can ask questions and share resources. Join the group!</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Program Staff Facebook Group',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9657e9d9-e293-401d-b804-ccce8c12b72d';
  $display->content['new-9657e9d9-e293-401d-b804-ccce8c12b72d'] = $pane;
  $display->panels['row1left'][2] = 'new-9657e9d9-e293-401d-b804-ccce8c12b72d';
  $pane = new stdClass();
  $pane->pid = 'new-d067118b-cfd1-4581-9aff-ae5dac5a4a0d';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'TPSID Resources',
    'body' => '<p>This page is a go to spot for all TPSID staff when looking for a resource shared by the Coordinating Center.&nbsp; Here you will find contact lists for all TPSID staff and Coordinating Center staff, important resources related to accreditation and applying to become a Comprehensive Transition Program, and resources shared during TPSID meetings and calls.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd067118b-cfd1-4581-9aff-ae5dac5a4a0d';
  $display->content['new-d067118b-cfd1-4581-9aff-ae5dac5a4a0d'] = $pane;
  $display->panels['row1right'][0] = 'new-d067118b-cfd1-4581-9aff-ae5dac5a4a0d';
  $pane = new stdClass();
  $pane->pid = 'new-946b5324-8e8e-4240-9e32-e6d595e42699';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'TpsidKeyResources-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '946b5324-8e8e-4240-9e32-e6d595e42699';
  $display->content['new-946b5324-8e8e-4240-9e32-e6d595e42699'] = $pane;
  $display->panels['row1right'][1] = 'new-946b5324-8e8e-4240-9e32-e6d595e42699';
  $pane = new stdClass();
  $pane->pid = 'new-99fcbe09-4809-43fb-8c71-be62ac122329';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '4589',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'FREQUENTLY ASKED QUESTIONS',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '99fcbe09-4809-43fb-8c71-be62ac122329';
  $display->content['new-99fcbe09-4809-43fb-8c71-be62ac122329'] = $pane;
  $display->panels['row1right'][2] = 'new-99fcbe09-4809-43fb-8c71-be62ac122329';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['key_resources_for_tpsids'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'moving_transition_forward';
  $page->task = 'page';
  $page->admin_title = 'Moving Transition Forward';
  $page->admin_description = '';
  $page->path = 'projects/mtf';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_moving_transition_forward__panel';
  $handler->task = 'page';
  $handler->subtask = 'moving_transition_forward';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
      'row2left' => NULL,
      'row2right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Moving Transition Forward';
  $display->uuid = 'eb28f9a8-64e9-4641-9f3f-15d8c1f3ce2d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_moving_transition_forward__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7502cbc6-317d-4455-979d-8e26fc646d34';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Moving Transition Forward Logo" class="img-responsive" src="/sites/default/files/images/MTF_2020_F.png" /></p>
<br />',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7502cbc6-317d-4455-979d-8e26fc646d34';
  $display->content['new-7502cbc6-317d-4455-979d-8e26fc646d34'] = $pane;
  $display->panels['row1left'][0] = 'new-7502cbc6-317d-4455-979d-8e26fc646d34';
  $pane = new stdClass();
  $pane->pid = 'new-6b31911f-0a05-4b73-a3f0-80f55bb1a228';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'nav buttons - mtf',
    'body' => '<p><a class="btn btn-block btn-huge btn-info" href="/projects/mtf/about-moving-transition-forward" type="button">ABOUT</a> <a class="btn btn-block btn-huge btn-info" href="/projects/mtf/moving-transition-forward-team-members" type="button">TEAM MEMBERS</a><a class="btn btn-block btn-huge btn-info" href="mailto:clare.papay@umb.edu" type="button"> CONTACT</a></p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6b31911f-0a05-4b73-a3f0-80f55bb1a228';
  $display->content['new-6b31911f-0a05-4b73-a3f0-80f55bb1a228'] = $pane;
  $display->panels['row1left'][1] = 'new-6b31911f-0a05-4b73-a3f0-80f55bb1a228';
  $pane = new stdClass();
  $pane->pid = 'new-f48add87-f13f-4e2d-be79-36bbffc154f1';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_29';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'MTFresources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box box-border-light-blue',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f48add87-f13f-4e2d-be79-36bbffc154f1';
  $display->content['new-f48add87-f13f-4e2d-be79-36bbffc154f1'] = $pane;
  $display->panels['row1left'][2] = 'new-f48add87-f13f-4e2d-be79-36bbffc154f1';
  $pane = new stdClass();
  $pane->pid = 'new-1d1620b5-0fbe-4aa3-8236-d0cd7334299c';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<ul>
	<li><a href="https://www.mathematica.org/our-publications-and-findings/projects/national-longitudinal-transition-study" target="_blank">National Longitudinal Transition Study 2012</a></li>
	<li><a href="https://thinkcollege.net/tpsid" target="_blank">Transition and Postsecondary Programs for Students with Intellectual Disabilities</a></li>
	<li><a href="https://transitionta.org" target="_blank">Research-based practices for transition</a></li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Quick Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box infolist box-border-light-blue',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1d1620b5-0fbe-4aa3-8236-d0cd7334299c';
  $display->content['new-1d1620b5-0fbe-4aa3-8236-d0cd7334299c'] = $pane;
  $display->panels['row1left'][3] = 'new-1d1620b5-0fbe-4aa3-8236-d0cd7334299c';
  $pane = new stdClass();
  $pane->pid = 'new-5086708e-4c45-43b2-8bd9-51f6f12f3b4e';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'intro',
    'body' => '<p>The Moving Transition Forward: Exploration of College-based and Conventional Transition Practices for Students with Intellectual Disability and Autism (ID/A) project examines the composition and impact of existing transition practices for students with ID/A. In this Institute for Education Sciences (IES)-funded project, we are conducting a series of seven secondary analysis studies with two national datasets.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'project-intro-box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5086708e-4c45-43b2-8bd9-51f6f12f3b4e';
  $display->content['new-5086708e-4c45-43b2-8bd9-51f6f12f3b4e'] = $pane;
  $display->panels['row1right'][0] = 'new-5086708e-4c45-43b2-8bd9-51f6f12f3b4e';
  $pane = new stdClass();
  $pane->pid = 'new-fc422c60-6bce-48f2-8461-1b9cfa33c3ba';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Moving Transition Forward: Exploration of College-based and Conventional Transition Practices for Students with Intellectual Disability and Autism (ID/A) is a research project comprised of three-phases of analysis on data collected about students attending high schools and college-based transition programs across the U.S. to define, explore, and compare critical aspects of two transition approaches:&nbsp;</p>

<ul>
	<li>a college-based transition experience provided via partnership between local education agencies (LEAs) and institutions of higher education (IHEs), and</li>
	<li>a conventional transition experience offered by a LEA in a high school or community setting.&nbsp;</li>
</ul>

<p>The Moving Transition Forward Theory of Change shown below reflects our intent to explore the malleable factors and test moderating and mediating relationships, resulting in identifying recommendations to improve transition experiences for students with ID/A.</p>

<p>&nbsp;</p>

<p><img alt="A model explaining connection between youth, their in-school transition experiences and post-school outcomes. In-school approaches to transition can be either conventional or college-based. In-school transition experiences can include research-based transition services as well as preparation for employment and preparation for college (the model shows the latter as predictors of paid employment in school). In-school experiences predict post-school outcomes in education and employment. Throughout the model, moderating variables are disability status, other youth factors, family factors, and school factors. " class="img-responsive" src="/sites/default/files/images/image001.png" /></p>

<p>&nbsp;</p>

<p><b><a href="/projects/mtf/overview-of-moving-transition-forward-studies">Learn more about the MTF studies</a>&nbsp;&nbsp;</b></p>

<p><b><a href="/projects/mtf/moving-transition-forward-datasets">Learn more about the datasets used in this project</a>&nbsp;&nbsp;</b></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'About the Project',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box box-border-light-blue',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fc422c60-6bce-48f2-8461-1b9cfa33c3ba';
  $display->content['new-fc422c60-6bce-48f2-8461-1b9cfa33c3ba'] = $pane;
  $display->panels['row1right'][1] = 'new-fc422c60-6bce-48f2-8461-1b9cfa33c3ba';
  $pane = new stdClass();
  $pane->pid = 'new-5d72d8ea-b001-4535-8646-ae73e4aea135';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>This project is funded by Institute of Education Sciences, National Center for Special Education Research (NCSER), Special Education Research Grants competition (Award number: R324A190085).</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Funding Information',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box box-border-light-blue',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5d72d8ea-b001-4535-8646-ae73e4aea135';
  $display->content['new-5d72d8ea-b001-4535-8646-ae73e4aea135'] = $pane;
  $display->panels['row1right'][2] = 'new-5d72d8ea-b001-4535-8646-ae73e4aea135';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['moving_transition_forward'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'national_coordinating_center';
  $page->task = 'page';
  $page->admin_title = 'National Coordinating Center';
  $page->admin_description = '';
  $page->path = 'projects/ncc';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_national_coordinating_center__panel';
  $handler->task = 'page';
  $handler->subtask = 'national_coordinating_center';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
      'row2left' => NULL,
      'row2right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'National Coordinating Center';
  $display->uuid = 'ed2839b2-81e5-4a60-93ba-4e460deaeeb3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_national_coordinating_center__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-22f70c7e-60c1-4dec-8ff3-7c54640983f8';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'NCC logo',
    'body' => '<br />
<p><img alt="National Coordinating Center Logo" class="img-responsive" src="/sites/default/files/images/NCC-logo.png" /></p>
<br />',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '22f70c7e-60c1-4dec-8ff3-7c54640983f8';
  $display->content['new-22f70c7e-60c1-4dec-8ff3-7c54640983f8'] = $pane;
  $display->panels['row1left'][0] = 'new-22f70c7e-60c1-4dec-8ff3-7c54640983f8';
  $pane = new stdClass();
  $pane->pid = 'new-4dc71306-17f6-47cb-bb9c-a393563c7316';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'button nav - NCC Page',
    'body' => '<p><a class="btn btn-block btn-huge btn-orange" href="/projects/national-coordinating-center/think-college-national-coordinating-center">About</a> <a class="btn btn-block btn-huge btn-orange" href="/projects/national-coordinating-center/national-coordinating-center-team-members">Team Members</a> <a class="btn btn-block btn-huge btn-orange" href="/technical-assistance/technical-assistance-providers" type="button">Technical Assistance</a> <a class="btn btn-block btn-huge btn-orange" href="/projects/ncc/ncc-accreditation-workgroup-activities" type="button"> Accreditation Standards</a> <a class="btn btn-block btn-huge btn-orange" href="https://thinkcollege.net/about/ncc-project-advisory-committee" type="button"> Project&nbsp;Advisory Committee</a> <a class="btn btn-block btn-huge btn-orange" href="mailto:Cathryn.Weir@umb.edu" type="button"> Contact Us</a></p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4dc71306-17f6-47cb-bb9c-a393563c7316';
  $display->content['new-4dc71306-17f6-47cb-bb9c-a393563c7316'] = $pane;
  $display->panels['row1left'][1] = 'new-4dc71306-17f6-47cb-bb9c-a393563c7316';
  $pane = new stdClass();
  $pane->pid = 'new-a439b716-71b3-4306-9fba-836d9919a2b2';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>The best way to get in-depth info on over a <a href="http://thinkcollege.net/resources/innovation-exchange"><strong>dozen critical topics</strong></a>, including key resources, relevant news and expertly prepared FAQs.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Resources by Topic',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box box-orange infolist',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a439b716-71b3-4306-9fba-836d9919a2b2';
  $display->content['new-a439b716-71b3-4306-9fba-836d9919a2b2'] = $pane;
  $display->panels['row1left'][2] = 'new-a439b716-71b3-4306-9fba-836d9919a2b2';
  $pane = new stdClass();
  $pane->pid = 'new-4d611e19-8fac-4434-918c-f12e10573d64';
  $pane->panel = 'row1left';
  $pane->type = 'views';
  $pane->subtype = 'upcoming_events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '8',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'UPCOMING NCC EVENTS',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'vertical',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4d611e19-8fac-4434-918c-f12e10573d64';
  $display->content['new-4d611e19-8fac-4434-918c-f12e10573d64'] = $pane;
  $display->panels['row1left'][3] = 'new-4d611e19-8fac-4434-918c-f12e10573d64';
  $pane = new stdClass();
  $pane->pid = 'new-49082a18-eef1-45f6-a564-0691f82cda15';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_26';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'NCCresources',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'ie-featuredresources box box-orange',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '49082a18-eef1-45f6-a564-0691f82cda15';
  $display->content['new-49082a18-eef1-45f6-a564-0691f82cda15'] = $pane;
  $display->panels['row1left'][4] = 'new-49082a18-eef1-45f6-a564-0691f82cda15';
  $pane = new stdClass();
  $pane->pid = 'new-ecc3aaf4-43af-48f6-8271-e399f17fe0f9';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>The NCC regularly tracks state legislative and policy efforts, as well as any other state or regional level activities, committees or organizations&nbsp;related to PSE for students with ID.&nbsp; Find out more about <a href="https://thinkcollege.net/resources/whats-happening-in-your-state"><strong>what is happening in YOUR state!</strong></a></p>

<div class="dropdown"><button class="btn btn-primary dropdown-toggle" data-toggle="dropdown" type="button">Choose State</button>

<ul class="dropdown-menu">
	<li><a href="/resources/whats-happening-in-your-state/states/" selected="selected">Select a State</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/alabama">Alabama</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/alaska">Alaska</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/arizona">Arizona</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/arkansas">Arkansas</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/california">California</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/colorado">Colorado</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/connecticut">Connecticut</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/delaware">Delaware</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/district-of-columbia">District Of Columbia</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/florida">Florida</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/georgia">Georgia</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/hawaii">Hawaii</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/idaho">Idaho</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/illinois">Illinois</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/indiana">Indiana</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/iowa">Iowa</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/kansas">Kansas</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/kentucky">Kentucky</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/louisiana">Louisiana</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/maine">Maine</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/maryland">Maryland</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/massachusetts">Massachusetts</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/michigan">Michigan</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/minnesota">Minnesota</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/mississippi">Mississippi</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/missouri">Missouri</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/montana">Montana</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/nebraska">Nebraska</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/nevada">Nevada</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/new-hampshire">New Hampshire</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/new-jersey">New Jersey</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/new-mexico">New Mexico</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/new-york">New York</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/north-carolina">North Carolina</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/north-dakota">North Dakota</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/ohio">Ohio</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/oklahoma">Oklahoma</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/oregon">Oregon</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/pennsylvania">Pennsylvania</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/rhode-island">Rhode Island</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/south-carolina">South Carolina</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/south-dakota">South Dakota</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/tennessee">Tennessee</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/texas">Texas</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/utah">Utah</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/vermont">Vermont</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/virginia">Virginia</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/washington">Washington</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/west-virginia">West Virginia</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/wisconsin">Wisconsin</a></li>
	<li><a href="/resources/whats-happening-in-your-state/states/wyoming">Wyoming</a></li>
</ul>
</div>
<br>
<br>',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'State Specific Information',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box box-orange ',
    'css_id' => 'states',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'ecc3aaf4-43af-48f6-8271-e399f17fe0f9';
  $display->content['new-ecc3aaf4-43af-48f6-8271-e399f17fe0f9'] = $pane;
  $display->panels['row1left'][5] = 'new-ecc3aaf4-43af-48f6-8271-e399f17fe0f9';
  $pane = new stdClass();
  $pane->pid = 'new-6263b151-74a7-4a17-ba0d-24a67b748ec4';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><a href="https://thinkcollege.net/projects/national-coordinating-center/get-news-updates-from-national-coordinating-center"><img alt="Think College newsletter header" class="img-responsive" src="/sites/default/files/images/New-email-header-2021.jpg" /></a></p>

<p>Learn all about our <strong><a href="/projects/national-coordinating-center/get-news-updates-from-national-coordinating-center">monthly newsletter</a></strong> and sign up for our mailing list.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'OUR MONTHLY NEWSLETTER',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box box-orange',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '6263b151-74a7-4a17-ba0d-24a67b748ec4';
  $display->content['new-6263b151-74a7-4a17-ba0d-24a67b748ec4'] = $pane;
  $display->panels['row1left'][6] = 'new-6263b151-74a7-4a17-ba0d-24a67b748ec4';
  $pane = new stdClass();
  $pane->pid = 'new-524259a0-7676-4a45-8aa2-8b186dc1a33a';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>The Think College National Coordinating Center provides coordination, technical assistance, training, and evaluation for Transition and Postsecondary Education Programs for Students with Intellectual Disabilities (TPSID).&nbsp;The NCC also provides on-demand technical assistance, training&nbsp;resources, and support to all college programs for students with ID, families and students.&nbsp;We develop and disseminate&nbsp;resources aimed at increasing&nbsp;knowledge of the evidence-based practices needed to develop, implement, and evaluate high-quality higher education opportunities for students with intellectual disability.&nbsp;Think College NCC is funded by the US Department of Education, Office of Postsecondary Education.&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'project-intro-box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '524259a0-7676-4a45-8aa2-8b186dc1a33a';
  $display->content['new-524259a0-7676-4a45-8aa2-8b186dc1a33a'] = $pane;
  $display->panels['row1right'][0] = 'new-524259a0-7676-4a45-8aa2-8b186dc1a33a';
  $pane = new stdClass();
  $pane->pid = 'new-c5a3dbb3-d0ba-4d33-8be6-613d5fecb24b';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_25';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'NCCarticles',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c5a3dbb3-d0ba-4d33-8be6-613d5fecb24b';
  $display->content['new-c5a3dbb3-d0ba-4d33-8be6-613d5fecb24b'] = $pane;
  $display->panels['row1right'][1] = 'new-c5a3dbb3-d0ba-4d33-8be6-613d5fecb24b';
  $pane = new stdClass();
  $pane->pid = 'new-31c26356-55e4-4aae-bc41-1fe8e2eb51bd';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'TPSID GRANTEES AND ASSOCIATED SITES',
    'body' => '<p>Transition and Postsecondary Programs for Students with Intellectual Disability, or TPSID, are model demonstration projects funded by the US Department of Education. &nbsp;The NCC collects and analyzes data on&nbsp;program design and student experiences from each TPSID program in order to increase knowledge about the impact and outcomes of postsecondary education for students with intellectual disability. &nbsp;<br />
<a href="/projects/national-coordinating-center/what-is-a-tpsid"><strong>Learn more about the TPSID grantees.</strong></a></p>

<p>The interactive map below shows the location of TPSID grantees and associated sites. Some grantees work statewide to develop multiple college programs, while others develop one program at their own institution. Since 2010, there have been 123 IHE involved as a TPSID grantee or program site.&nbsp; These have been funded in three rounds of funding: 2010-2015, 2015- 2020, and 2020 - 2025.&nbsp;</p>

<div class="tableauPlaceholder" id="viz1636566758569" style="position: relative"><noscript><a href=\'#\'><img alt=\'Dashboard 2 \' src=\'https:&#47;&#47;public.tableau.com&#47;static&#47;images&#47;TP&#47;TPSIDSites&#47;Dashboard2&#47;1_rss.png\' style=\'border: none\' /></a></noscript><object class="tableauViz" style="display:none;"><param name="host_url" value="https%3A%2F%2Fpublic.tableau.com%2F" /><param name="embed_code_version" value="3" /><param name="site_root" value="" /><param name="name" value="TPSIDSites/Dashboard2" /><param name="tabs" value="no" /><param name="toolbar" value="yes" /><param name="static_image" value="https://public.tableau.com/static/images/TP/TPSIDSites/Dashboard2/1.png" /><param name="animate_transition" value="yes" /><param name="display_static_image" value="yes" /><param name="display_spinner" value="yes" /><param name="display_overlay" value="yes" /><param name="display_count" value="yes" /><param name="language" value="en-US" /><param name="filter" value="publish=yes" /></object></div>
<script type=\'text/javascript\'>                    var divElement = document.getElementById(\'viz1636566758569\');                    var vizElement = divElement.getElementsByTagName(\'object\')[0];                    if ( divElement.offsetWidth > 800 ) { vizElement.style.width=\'100%\';vizElement.style.height=(divElement.offsetWidth*0.75)+\'px\';} else if ( divElement.offsetWidth > 500 ) { vizElement.style.width=\'100%\';vizElement.style.height=(divElement.offsetWidth*0.75)+\'px\';} else { vizElement.style.width=\'100%\';vizElement.style.height=\'727px\';}                     var scriptElement = document.createElement(\'script\');                    scriptElement.src = \'https://public.tableau.com/javascripts/api/viz_v1.js\';                    vizElement.parentNode.insertBefore(scriptElement, vizElement);                </script>',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'TPSID GRANTEES AND ASSOCIATED SITES',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box box-orange',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '31c26356-55e4-4aae-bc41-1fe8e2eb51bd';
  $display->content['new-31c26356-55e4-4aae-bc41-1fe8e2eb51bd'] = $pane;
  $display->panels['row1right'][2] = 'new-31c26356-55e4-4aae-bc41-1fe8e2eb51bd';
  $pane = new stdClass();
  $pane->pid = 'new-51797b96-4e50-4bae-856d-3738727844d2';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<ul>
	<li class="pb20"><a href="https://www.ahead.org/home" target="_blank"><img alt="AHEAD logo" src="/sites/default/files/images/ahead-logo400x600.png" style="float: right; margin: 5px; height: 200px; width: 300px;" />Association On Higher Education And Disability (AHEAD)</a>: &nbsp;AHEAD is a member organization for&nbsp;disability resource professionals, student affairs personnel, ADA coordinators, diversity officers&nbsp;and others who are invested in creating welcoming higher education experiences for disabled individuals. AHEAD assists the NCC with arrangments for its annual TPSID Project Director Meeting&nbsp;and is conducting a&nbsp;survey of&nbsp;disability support professionals regarding their experiences with and attitudes toward college programs for students with ID.</li>
	<li><a href="https://www.aucd.org/template/index.cfm" target="_blank"><img alt="AUCD logo" src="/sites/default/files/images/aucd_words_logo.png" style="float: right; margin: 5px; height: 200px; width: 300px;" />Association of University Centers on Disabilities (AUCD)</a>:&nbsp;The Association of University Centers on Disabilities (AUCD) is a membership organization that supports a national network of university-based interdisciplinary programs.&nbsp; AUCD supports the National Coordinating Center&nbsp;by tracking state and federal legislation&nbsp;related to postsecondary education for students with ID&nbsp;and coordinates&nbsp;activities related to&nbsp;the development of leadership and advocacy skills in students with disabilities.&nbsp;</li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'NCC Partners',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box box-orange infolist',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '51797b96-4e50-4bae-856d-3738727844d2';
  $display->content['new-51797b96-4e50-4bae-856d-3738727844d2'] = $pane;
  $display->panels['row1right'][3] = 'new-51797b96-4e50-4bae-856d-3738727844d2';
  $pane = new stdClass();
  $pane->pid = 'new-62a87a6a-50a3-41a2-ab5f-fcc22790a291';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>NCC is funded by the US Department of Education, Office of Postsecondary Education, Grant # P407B200001. It is a project of the Institute for Community Inclusion at University of Massachusetts Boston.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Funding Information',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box box-orange',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '62a87a6a-50a3-41a2-ab5f-fcc22790a291';
  $display->content['new-62a87a6a-50a3-41a2-ab5f-fcc22790a291'] = $pane;
  $display->panels['row1right'][4] = 'new-62a87a6a-50a3-41a2-ab5f-fcc22790a291';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['national_coordinating_center'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'public_policy_affinity_group';
  $page->task = 'page';
  $page->admin_title = 'Public Policy Affinity Group';
  $page->admin_description = '';
  $page->path = 'ta-training/affinity-groups/public-policy';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_public_policy_affinity_group__panel';
  $handler->task = 'page';
  $handler->subtask = 'public_policy_affinity_group';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'The Public Policy Affinity Group is a platform for online discussion related to policy and legislation affecting inclusive higher education at the state and federal levels.',
        ),
      ),
    ),
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Public Policy Affinity Group';
  $display->uuid = 'ef766b94-e745-488b-92d5-77b187df7344';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_public_policy_affinity_group__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-14f466ea-86ce-4b67-864b-512717da7abc';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'logo',
    'body' => '<p><img alt="Public Policy Affinity Group Logo" class="img-responsive" src="/sites/default/files/images/Public%20Policy.png" /></p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '14f466ea-86ce-4b67-864b-512717da7abc';
  $display->content['new-14f466ea-86ce-4b67-864b-512717da7abc'] = $pane;
  $display->panels['row1left'][0] = 'new-14f466ea-86ce-4b67-864b-512717da7abc';
  $pane = new stdClass();
  $pane->pid = 'new-85706c79-0cd7-434c-9d81-586a8d54216c';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Denise Rozell" class="center-block img-thumbnail img-responsive" src="/sites/default/files/files/images/staff-photos/small_denise_rozell.jpg" style="height: 100px; width: 100px;" /><br />
<strong>Denise Rozell</strong>, Director of Policy Innovation at the Association of University Centers on Disabilities (AUCD).<br />
<a href="mailto:drozell@aucd.org">drozell@aucd.org</a><br />
Direct: 240.821.9465<br />
<a href="http://www.aucd.org/">aucd.org</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Affinity Group Facilitator',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '85706c79-0cd7-434c-9d81-586a8d54216c';
  $display->content['new-85706c79-0cd7-434c-9d81-586a8d54216c'] = $pane;
  $display->panels['row1left'][1] = 'new-85706c79-0cd7-434c-9d81-586a8d54216c';
  $pane = new stdClass();
  $pane->pid = 'new-0963dfc9-af77-493c-a43d-a9ee7c77bfd9';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'Affinity Group-Public Policy-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0963dfc9-af77-493c-a43d-a9ee7c77bfd9';
  $display->content['new-0963dfc9-af77-493c-a43d-a9ee7c77bfd9'] = $pane;
  $display->panels['row1left'][2] = 'new-0963dfc9-af77-493c-a43d-a9ee7c77bfd9';
  $pane = new stdClass();
  $pane->pid = 'new-419e6b4e-ba34-4426-b835-378c29a3f591';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Intro',
    'body' => '<p>The Public Policy Affinity Group was designed to allow online discussion related to policy and legislation affecting inclusive higher education at the state and federal levels. What we realized over time was that policy is an important aspect of all of the affinity group topics, and should&nbsp;be integrated&nbsp;in the regularly scheduled meetings.</p>

<p><strong>Effective October 2020, the Public Policy Affinity Group will not hold regular meetings.</strong> You may continue to contact Denise Rozell with any questions, and consider joining other Affinity Groups to stay informed about important issues related to inclusive higher education.</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '419e6b4e-ba34-4426-b835-378c29a3f591';
  $display->content['new-419e6b4e-ba34-4426-b835-378c29a3f591'] = $pane;
  $display->panels['row1right'][0] = 'new-419e6b4e-ba34-4426-b835-378c29a3f591';
  $pane = new stdClass();
  $pane->pid = 'new-3fcd43f6-5052-4708-8f5b-a0c01f7c611a';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>The Public Policy Affinity Group will not be meeting anymore. Instead, policy issues will be addressed as appropriate within each of the other Affinity Groups.&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Next Meeting',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3fcd43f6-5052-4708-8f5b-a0c01f7c611a';
  $display->content['new-3fcd43f6-5052-4708-8f5b-a0c01f7c611a'] = $pane;
  $display->panels['row1right'][1] = 'new-3fcd43f6-5052-4708-8f5b-a0c01f7c611a';
  $pane = new stdClass();
  $pane->pid = 'new-cebe161c-b771-43f9-8a79-c16d3e26351a';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>The last&nbsp;joint meeting of the Think College Vocational Rehabilitation, Public Policy, and Student Credentials Affinity Groups was&nbsp;<strong>August 12, 2020</strong>. At this session we welcomed three&nbsp;guest speakers,&nbsp;<strong>Mary Hauff,</strong>&nbsp;advocate and parent from Minnesota, and&nbsp;<strong>Lauren Bruno and Jennifer Cremers</strong>, University of Iowa REACH program, will share an overview of the program’s use of WorkKeys as a tool to increase access to evidence-based credentials earned by students with ID. The recording can be found&nbsp;<strong><a href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affini-1">here</a></strong>.&nbsp;</p>

<hr />
<p>A crossover Affinity Group meeting with the Vocational Rehabilitation and Student Credentials groups was held on <strong>April 1, 2020</strong>. All resources can be found <strong><a href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affini-0">here</a></strong>, including the recording, transcript, a special PowerPoint, and a summary handout.</p>

<hr />
<p>The last meeting was a(nother) special crossover meeting with the Vocational Rehabilitation Affinity Group and the Student Credentials Affinity Group, held on <strong>Wednesday,&nbsp;November 6 at 2pm Eastern</strong>. The recording and agenda from that meeting can be found <strong><a href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affinity">here</a></strong>.&nbsp;</p>

<hr />
<p>The August 7, 2019 Public Policy group was a special combined Affinity Group meeting, along with the Student Credentials and Vocational Rehabilitation groups. The recording and transcript can be found <a href="https://thinkcollege.net/resource/combined-vr-policy-credentials-affinity-group-meeting-august-2019"><strong>here</strong></a>.&nbsp;</p>

<hr />
<p>A special meeting was held on <strong>May 7</strong>.&nbsp;At this meeting with TPSIDs, Frank Smith and Meg Grigal from the Think College National Coordinating Center, explained proposed changes to the Integrated Postsecondary Education Data System (IPEDS) and the impact this would have on inclusive PSE.&nbsp;A recording of this meeting and a summary document can be found <a href="https://thinkcollege.net/resource/federal-legislation/special-meeting-about-ipeds-integrated-postsecondary-education-data">here</a>.&nbsp;</p>

<hr />
<p>The Public Policy group met on&nbsp;<strong>Thursday, April 18 2019</strong>. You can find the recording and handouts <a href="https://thinkcollege.net/resource/advocacy-outreach/public-policy-affinity-group-meeting-april-2019">here</a>.&nbsp;</p>

<hr />
<p>The group met on&nbsp;<strong>Thursday, January 17, 2019</strong>. During this call we&nbsp;discussed the new Congress, your new State legislative sessions, the Higher Ed Act, what to anticipate in the coming year, and some new material we have developed. You can find the recording and additional materials <a href="https://thinkcollege.net/resource/advocacy-outreach/public-policy-affinity-group-meeting-january-2019">here</a>.&nbsp;</p>

<hr />
<p>The Public Policy Affinity Group met on&nbsp;<strong>Thursday, September 13, 2018</strong>, where we discussed how to infuence policy at&nbsp;Vocational Rehabilitation to better support inclusive postsecondary education.&nbsp; The recording of the meeting and the meeting notes can be found <a href="https://thinkcollege.net/resource/federal-legislation/public-policy-affinity-group-meeting">here</a>.</p>

<hr />
<p>The Public Policy Affinity Group met on&nbsp;<strong>Thursday, February 22, 2018</strong>. All handouts, the Power Point, and the recording from the meeting, can be found in our <a href="https://thinkcollege.net/resource/advocacy-outreach/public-policy-affinity-group-meeting-november-2017">resource library</a>.&nbsp;</p>

<p>At this meeting, we discussed the pending reauthorization of the federal Higher Education Opportunity Act, and considered the following questions:&nbsp;What does that mean for TPSIDs created under the law and others that have inclusive higher education programs for students with intellectual disabilities? What can you do? Who should you be talking to about your programs? What are you hearing in the field about HEOA?&nbsp;</p>

<hr />
<p>The second meeting of the Public Policy Affinity Group was held <strong>November 30, 2017</strong>. Invited guest,&nbsp;Chris Rosa, Interim Vice Chancellor of Student Affairs, City University of New York, spoke on behalf of CUNYs TPSID consortium on how they are moving forward to influence their legislature on behalf of all the programs.</p>

<p>The recording and power point presentation can be found in our <a href="https://thinkcollege.net/resource/advocacy-outreach/public-policy-affinity-group-meeting-november-2017">resource library</a>.&nbsp;</p>

<hr />
<p>The first meeting was held on <strong>June 8, 2017</strong>.&nbsp;At the meeting we:</p>

<ul>
	<li>Reviewed the purpose of the Public Policy Affinity Group</li>
	<li>Previewed materials being developed for the Project Directors meeting</li>
	<li>Heard from Martha E. Mock, Ph.D. Director, Institute for Innovative Transition at the University of Rochester and Margo Vreeburg Izzo, Ph.D., Program Director, The Ohio State University Nisonger Center about their experiences with public policy related to inclusive higher education in their respective states.</li>
</ul>

<p>Listen to recording of first meeting: <a href="http://aucd.adobeconnect.com/pq7rublcjs3j/">http://aucd.adobeconnect.com/pq7rublcjs3j/</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Notes from past meetings ',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'cebe161c-b771-43f9-8a79-c16d3e26351a';
  $display->content['new-cebe161c-b771-43f9-8a79-c16d3e26351a'] = $pane;
  $display->panels['row1right'][2] = 'new-cebe161c-b771-43f9-8a79-c16d3e26351a';
  $pane = new stdClass();
  $pane->pid = 'new-2df3eda8-64c4-400f-b456-c71170800d76';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Email <a href="mailto:drozell@aucd.org">Denise Rozell</a> with your ideas!</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Have Any Other Ideas for the Public Policy Affinity Group?',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2df3eda8-64c4-400f-b456-c71170800d76';
  $display->content['new-2df3eda8-64c4-400f-b456-c71170800d76'] = $pane;
  $display->panels['row1right'][3] = 'new-2df3eda8-64c4-400f-b456-c71170800d76';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['public_policy_affinity_group'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'research_affinity_group';
  $page->task = 'page';
  $page->admin_title = 'Affinity Group on Research in Inclusive Higher Education';
  $page->admin_description = '';
  $page->path = 'ta-training/affinity-groups/research';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_research_affinity_group__panel';
  $handler->task = 'page';
  $handler->subtask = 'research_affinity_group';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'Discussion group for researchers examining postsecondary education for people with intellectual disability',
        ),
      ),
    ),
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Research Affinity Group';
  $display->uuid = '85474850-e893-4a6d-8fae-41dcbc1263ca';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_research_affinity_group__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-47fce7b9-63fe-428f-ad40-989703dc8cd5';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'logo',
    'body' => '<p><img alt="Research Affinity Group Logo" class="img-responsive" src="/sites/default/files/images/Research.png" /></p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '47fce7b9-63fe-428f-ad40-989703dc8cd5';
  $display->content['new-47fce7b9-63fe-428f-ad40-989703dc8cd5'] = $pane;
  $display->panels['row1left'][0] = 'new-47fce7b9-63fe-428f-ad40-989703dc8cd5';
  $pane = new stdClass();
  $pane->pid = 'new-d57879fb-625f-4bea-bdc4-7a7b449410a7';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Clare Papay" class="center-block img-thumbnail img-responsive" src="/sites/default/files/files/images/staff-photos/clare-papay.png" style="width: 100px; height: 100px;" /></p>

<p><strong>Clare Papay</strong>, Ph.D.<br />
Senior Research Associate, Think College<br />
<a href="mailto:clare.papay@umb.edu">clare.papay@umb.edu</a></p>
<hr />
<p><strong><img alt="" class="center-block img-thumbnail img-responsive" src="/sites/default/files/images/research%20cofac.png" style="width: 100px; height: 100px;" /></strong></p>

<p><strong>John Andresen, PhD</strong><br />
Research Associate, Indiana University\'s UCEDD<br />
<a href="mailto:andresjm@iu.edu" rel="noopener" target="_blank" title="null">andresjm@iu.edu</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'AFFINITY GROUP CO-FACILITATORs',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd57879fb-625f-4bea-bdc4-7a7b449410a7';
  $display->content['new-d57879fb-625f-4bea-bdc4-7a7b449410a7'] = $pane;
  $display->panels['row1left'][1] = 'new-d57879fb-625f-4bea-bdc4-7a7b449410a7';
  $pane = new stdClass();
  $pane->pid = 'new-2a959ad9-bb35-4a9c-8bc4-af5af4c84a0e';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'ag-email-sub',
    'body' => '<p>Sign up to receive email updates for one or&nbsp;more Affinity Groups.</p>

<p><a class="btn btn-primary" href="https://nam10.safelinks.protection.outlook.com/?url=https%3A%2F%2Fforms.gle%2FJe4msZRDoko3MkTk9&amp;data=04%7C01%7CSheila.Johnson%40umb.edu%7C1c5ce26b3b6d4ecec8b708d97ed48538%7Cb97188711ee94425953c1ace1373eb38%7C0%7C0%7C637680273491490073%7CUnknown%7CTWFpbGZsb3d8eyJWIjoiMC4wLjAwMDAiLCJQIjoiV2luMzIiLCJBTiI6Ik1haWwiLCJXVCI6Mn0%3D%7C1000&amp;sdata=E3TaxZFtHcw4W624XgIs%2BDfhaV7nSEMX3EdrEpH2Gvo%3D&amp;reserved=0" role="button" target="_blank">Sign Up Now!</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Stay Informed by Email',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2a959ad9-bb35-4a9c-8bc4-af5af4c84a0e';
  $display->content['new-2a959ad9-bb35-4a9c-8bc4-af5af4c84a0e'] = $pane;
  $display->panels['row1left'][2] = 'new-2a959ad9-bb35-4a9c-8bc4-af5af4c84a0e';
  $pane = new stdClass();
  $pane->pid = 'new-76328a6c-1e7a-4e7b-81ef-5e1e32b139e5';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'AffinityGroup-Research-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '76328a6c-1e7a-4e7b-81ef-5e1e32b139e5';
  $display->content['new-76328a6c-1e7a-4e7b-81ef-5e1e32b139e5'] = $pane;
  $display->panels['row1left'][3] = 'new-76328a6c-1e7a-4e7b-81ef-5e1e32b139e5';
  $pane = new stdClass();
  $pane->pid = 'new-f4326ff2-6f40-4e89-a73f-87ac038bd4db';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<ul>
	<li><a href="https://docs.google.com/spreadsheets/d/1CmpZgklviyp33rsmNDbm19x4UKLNVyz2yj9natGti9w/edit?usp=sharing" target="_blank">Member directory</a></li>
	<li><a href="https://docs.google.com/document/d/1bQMhj16DIw6A47udfDBTbUHKy8pSebb8Infh2Bp4Ksg/edit?usp=sharing" target="_blank">Agendas</a></li>
	<li><a href="https://drive.google.com/drive/folders/0B1K4n4fVUIGTZDJzSWNkd2RtS00?usp=sharing" target="_blank">Folder of all member documents</a></li>
	<li><a href="https://docs.google.com/spreadsheets/d/1sy_2FnWHx_UPzMuH1-5r9-f00qu4Yq7tSDHB5Guci2M/edit?usp=sharing" target="_blank">Tell us your research interests, needs, and add name to member directory</a></li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Member links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box external-links-list',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f4326ff2-6f40-4e89-a73f-87ac038bd4db';
  $display->content['new-f4326ff2-6f40-4e89-a73f-87ac038bd4db'] = $pane;
  $display->panels['row1left'][4] = 'new-f4326ff2-6f40-4e89-a73f-87ac038bd4db';
  $pane = new stdClass();
  $pane->pid = 'new-843207ed-64ae-4aff-a30c-05b36bfe51e3';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Intro',
    'body' => '<p>Welcome to the Think College Affinity Group on Research in Inclusive Higher Education</p>

<p>The purpose of the Affinity Group is to support members to:</p>

<ul>
	<li>Learn about research that is happening in the field of inclusive higher education.</li>
	<li>Connect with each other and explore possible collaborations, and</li>
	<li>Share tools and resources.</li>
</ul>

<p>This Affinity Group is designed for people who are currently involved in research in inclusive higher education or those who would like to become more involved. The activities of the group will be relevant for those working directly in inclusive higher education as well as in related disciplines (e.g., transition, rehabilitation, disability services). We have a particular focus on supporting emerging scholars (master’s and doctoral candidates). At our meetings and other events, we explore current research agendas, tools, findings, needs, and challenges related to inclusive higher education.</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'intro',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '843207ed-64ae-4aff-a30c-05b36bfe51e3';
  $display->content['new-843207ed-64ae-4aff-a30c-05b36bfe51e3'] = $pane;
  $display->panels['row1right'][0] = 'new-843207ed-64ae-4aff-a30c-05b36bfe51e3';
  $pane = new stdClass();
  $pane->pid = 'new-9a46d3bc-3222-487b-9fba-780dd09474f5';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><strong><a href="https://communityinclusion.zoom.us/j/99788743035?pwd=eFZaVXhzMzFXY2dPeDZsaVl1cElnZz09">Permanent Zoom meeting room</a></strong></p>

<p><strong><a href="https://docs.google.com/document/d/1bQMhj16DIw6A47udfDBTbUHKy8pSebb8Infh2Bp4Ksg/edit">Rolling meeting agenda</a>&nbsp;</strong>all agendas and notes can be found here</p>

<p>All meetings take place from 1-2pm ET unless otherwise noted</p>

<ul>
	<li>Thursday, April 21, 2022</li>
	<li>Wednesday, July 27, 2022</li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Meeting Schedule',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9a46d3bc-3222-487b-9fba-780dd09474f5';
  $display->content['new-9a46d3bc-3222-487b-9fba-780dd09474f5'] = $pane;
  $display->panels['row1right'][1] = 'new-9a46d3bc-3222-487b-9fba-780dd09474f5';
  $pane = new stdClass();
  $pane->pid = 'new-c529e044-8aac-4ee1-b177-c9f41704e0a0';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Click on the links below to access recordings from past meetings.&nbsp;</p>

<p><strong>January 20, 2022 </strong>(recording upon request)</p>

<p><strong><a href="https://icimedia.wistia.com/medias/4ysgmqswlt">February 25, 2021</a></strong></p>

<p><strong><a href="https://icimedia.wistia.com/medias/nqvxqvqm7i">November 3, 2020</a></strong></p>

<p><strong><a href="https://thinkcollege.net/resource/transition-research/research-affinity-group-meeting-august-2020">August 11, 2020</a></strong></p>

<p><strong><a href="https://thinkcollege.net/resource/transition-research/doctoral-student-subgroup-of-research-affinity-group-may-2020">May 28, 2020:</a> </strong>this was a special meeting of the doctoral student subgroup.&nbsp;</p>

<p><strong><a href="https://thinkcollege.net/resource/transition-research/research-affinity-group-meeting-may-2020">May 12, 2020</a></strong></p>

<p><strong><a href="https://thinkcollege.net/resource/transition-research/research-affinity-group-meeting-november-2019-0">February 11, 2020</a></strong></p>

<p><strong><a href="https://thinkcollege.net/resource/transition-research/research-affinity-group-meeting-november-2019-0">November 13, 2019</a></strong></p>

<p><strong><a href="https://thinkcollege.net/resource/transition-research/research-affinity-group-meeting-august-2019">August 13, 2019</a></strong></p>

<p><strong><a href="https://thinkcollege.net/resource/transition-research/research-affinity-group-meeting-april-2019">April 2, 2019</a></strong></p>

<p><a href="https://thinkcollege.net/resource/transition-research/research-affinity-group-meeting-january-2019-0"><strong>January 22, 2019</strong></a></p>

<p><strong><a href="https://thinkcollege.net/resource/transition-research/research-affinity-group-meeting-october-2018">October 10, 2018</a></strong></p>

<p><a href="https://thinkcollege.net/resource/transition-research/research-affinity-group-meeting-july-2018"><strong>July 24, 2018</strong></a></p>

<p><strong>April 24th, 2018.&nbsp;</strong>&nbsp;Sorry, no recording available!</p>

<p><strong><a href="http://thinkcollege.net/events/research-affinity-group-meeting/research-affinity-group-meeting-0" target="_blank">January 31st, 2018</a></strong></p>

<p><strong><a href="http://thinkcollege.net/events/research-affinity-group-meeting/research-affinity-group-meeting" target="_blank">September 12th, 2017</a></strong></p>

<p><strong><a href="http://connectpro97884399.adobeconnect.com/p9385swvaj3/" target="_blank">April 25th, 2017</a></strong></p>

<p><strong><a href="http://connectpro97884399.adobeconnect.com/p2pq6qtlc7j1/" target="_blank">June 13th, 2017</a></strong></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Past Meetings',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c529e044-8aac-4ee1-b177-c9f41704e0a0';
  $display->content['new-c529e044-8aac-4ee1-b177-c9f41704e0a0'] = $pane;
  $display->panels['row1right'][2] = 'new-c529e044-8aac-4ee1-b177-c9f41704e0a0';
  $pane = new stdClass();
  $pane->pid = 'new-a729dc06-a58b-4ba9-b0d6-7abf5ceadae3';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><b>&nbsp;</b>Send an email to <a href="mailto:thinkcollegeTA@gmail.com">thinkcollegeTA@gmail.com</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Have other ideas for the Affinity Group on Research?',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a729dc06-a58b-4ba9-b0d6-7abf5ceadae3';
  $display->content['new-a729dc06-a58b-4ba9-b0d6-7abf5ceadae3'] = $pane;
  $display->panels['row1right'][3] = 'new-a729dc06-a58b-4ba9-b0d6-7abf5ceadae3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['research_affinity_group'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'statewide_alliances_affinity_group';
  $page->task = 'page';
  $page->admin_title = 'statewide-alliances-affinity-group';
  $page->admin_description = '';
  $page->path = 'ta-training/affinity-groups/statewide-alliances';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_statewide_alliances_affinity_group__panel';
  $handler->task = 'page';
  $handler->subtask = 'statewide_alliances_affinity_group';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Statewide Alliances Affinity Group';
  $display->uuid = '4996ec2a-e4d2-44a4-9e4f-71d974d5caa6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_statewide_alliances_affinity_group__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5b3a2bb9-f99e-471a-bdc6-22d5c6449ffe';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'logo',
    'body' => '<p><img alt="Student Credentials Affinity Group" class="img-responsive" src="/sites/default/files/images/statealliances_logo.png" /></p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5b3a2bb9-f99e-471a-bdc6-22d5c6449ffe';
  $display->content['new-5b3a2bb9-f99e-471a-bdc6-22d5c6449ffe'] = $pane;
  $display->panels['row1left'][0] = 'new-5b3a2bb9-f99e-471a-bdc6-22d5c6449ffe';
  $pane = new stdClass();
  $pane->pid = 'new-94c1ef6c-f209-4072-b78b-f19c2f36e6a6';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Susanna Miller-Raines" class="center-block img-thumbnail img-responsive" src="/sites/default/files/images/Susanna%20Miller-Raines.jpg" /></p>

<p><strong>Susanna Miller-Raines</strong></p>

<p>Regional Alliances Manager<br />
Think College Inclusive Higher Education Network</p>

<p><a href="mailto:susanna.millerraines@umb.edu?subject=Statewide%20Alliances">susanna.millerraines@umb.edu</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'AFFINITY GROUP FACILITATOR',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94c1ef6c-f209-4072-b78b-f19c2f36e6a6';
  $display->content['new-94c1ef6c-f209-4072-b78b-f19c2f36e6a6'] = $pane;
  $display->panels['row1left'][1] = 'new-94c1ef6c-f209-4072-b78b-f19c2f36e6a6';
  $pane = new stdClass();
  $pane->pid = 'new-82b959d9-e101-45a7-bcba-facb51cfad76';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Sign up to receive email updates for one or&nbsp;more Affinity Groups.</p>

<p><a class="btn btn-primary" href="https://nam10.safelinks.protection.outlook.com/?url=https%3A%2F%2Fforms.gle%2FJe4msZRDoko3MkTk9&amp;data=04%7C01%7CSheila.Johnson%40umb.edu%7C1c5ce26b3b6d4ecec8b708d97ed48538%7Cb97188711ee94425953c1ace1373eb38%7C0%7C0%7C637680273491490073%7CUnknown%7CTWFpbGZsb3d8eyJWIjoiMC4wLjAwMDAiLCJQIjoiV2luMzIiLCJBTiI6Ik1haWwiLCJXVCI6Mn0%3D%7C1000&amp;sdata=E3TaxZFtHcw4W624XgIs%2BDfhaV7nSEMX3EdrEpH2Gvo%3D&amp;reserved=0" role="button" target="_blank">Sign Up Now!</a></p>',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'STAY INFORMED BY EMAIL',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '82b959d9-e101-45a7-bcba-facb51cfad76';
  $display->content['new-82b959d9-e101-45a7-bcba-facb51cfad76'] = $pane;
  $display->panels['row1left'][2] = 'new-82b959d9-e101-45a7-bcba-facb51cfad76';
  $pane = new stdClass();
  $pane->pid = 'new-acdff023-0983-4bb9-a133-78e69ccc478f';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_19';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'AffinityGroup-StatewideAlliances-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'acdff023-0983-4bb9-a133-78e69ccc478f';
  $display->content['new-acdff023-0983-4bb9-a133-78e69ccc478f'] = $pane;
  $display->panels['row1left'][3] = 'new-acdff023-0983-4bb9-a133-78e69ccc478f';
  $pane = new stdClass();
  $pane->pid = 'new-8cd125be-6412-480a-beb9-299c7240ee80';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'intro',
    'body' => '<p>The purpose of this group is to give an opportunity to existing and potential inclusive postsecondary education programs and partners to discuss how and why these statewide alliances are important, how to maintain them, and more. Anyone working on any type of formal or informal state-level connection, proposing systems change through alliances and consortium, or those who are simply curious about how these alliances can work, are welcome.</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8cd125be-6412-480a-beb9-299c7240ee80';
  $display->content['new-8cd125be-6412-480a-beb9-299c7240ee80'] = $pane;
  $display->panels['row1right'][0] = 'new-8cd125be-6412-480a-beb9-299c7240ee80';
  $pane = new stdClass();
  $pane->pid = 'new-f3a018b8-0e7a-4eb5-b8f7-95d9d9a6450c';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><strong><a href="http://zoom.us/j/91750502598"><span style="background-color:white"><span style="font-family:&quot;Arial&quot;,sans-serif"><span style="color:#333333">Permanent Zoom meeting room link</span></span></span></a></strong></p>

<p><span style="background-color:white"><span style="font-family:&quot;Arial&quot;,sans-serif"><span style="color:#333333"><strong><a href="http://docs.google.com/document/d/1_3ZO4c4UjLlmBz6UY8RFLkfv3UOWc9jdQSqDXZiuW8U/edit">Rolling agenda link</a></strong> all agendas and notes can be found here</span></span></span></p>

<p><span style="background-color:white"><span style="font-family:&quot;Arial&quot;,sans-serif"><span style="color:#333333">Meeting dates</span></span></span></p>

<ul>
	<li><span style="background-color:white"><span style="font-family:&quot;Arial&quot;,sans-serif"><span style="color:#333333">March 21, 2022</span></span></span><br />
	<b id="docs-internal-guid-4169fac4-7fff-d96e-7c54-9b5b4fef39a0">Topic: How do you decide on what schools to expand to next? </b></li>
	<li><span style="background-color:white"><span style="font-family:&quot;Arial&quot;,sans-serif"><span style="color:#333333">May 19, 2022</span></span></span><br />
	<strong><span style="background-color:white"><span style="font-family:&quot;Arial&quot;,sans-serif"><span style="color:#333333">Topic: TBA</span></span></span></strong></li>
</ul>

<p><span style="background-color:white"><span style="font-family:&quot;Arial&quot;,sans-serif"><span style="color:#333333">The group meets from 3-4pm ET, unless otherwise noted.</span></span></span></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Meeting Schedule',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f3a018b8-0e7a-4eb5-b8f7-95d9d9a6450c';
  $display->content['new-f3a018b8-0e7a-4eb5-b8f7-95d9d9a6450c'] = $pane;
  $display->panels['row1right'][1] = 'new-f3a018b8-0e7a-4eb5-b8f7-95d9d9a6450c';
  $pane = new stdClass();
  $pane->pid = 'new-76614adf-a21a-4d57-a0bb-845b88be3008';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Notes from past&nbsp;meetings are available at&nbsp;<strong><a href="https://docs.google.com/document/d/1_3ZO4c4UjLlmBz6UY8RFLkfv3UOWc9jdQSqDXZiuW8U/edit">here</a></strong>.&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Past Meetings',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '76614adf-a21a-4d57-a0bb-845b88be3008';
  $display->content['new-76614adf-a21a-4d57-a0bb-845b88be3008'] = $pane;
  $display->panels['row1right'][2] = 'new-76614adf-a21a-4d57-a0bb-845b88be3008';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['statewide_alliances_affinity_group'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tpsid_events';
  $page->task = 'page';
  $page->admin_title = 'tpsid-events';
  $page->admin_description = '';
  $page->path = 'about/tpsid/tpsid-events';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'perm',
        'not' => FALSE,
        'settings' => array(
          'perm' => 'access content',
        ),
      ),
      1 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 7,
            1 => 3,
            2 => 14,
          ),
        ),
      ),
    ),
  );
  $page->menu = array(
    'name' => 'main-menu',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => 'TPSID Events',
    'type' => 'normal',
    'weight' => '0',
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tpsid_events__panel';
  $handler->task = 'page';
  $handler->subtask = 'tpsid_events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'TPSID Events';
  $display->uuid = '8ccbfdae-61ca-4e35-abe1-e6e4c235fb82';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_tpsid_events__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-55ad164d-7cc6-4cde-be03-1eea8ae51e60';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Upcoming Events',
    'body' => '&nbsp;
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Upcoming Events',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => 'tc-home-twitter-block',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '55ad164d-7cc6-4cde-be03-1eea8ae51e60';
  $display->content['new-55ad164d-7cc6-4cde-be03-1eea8ae51e60'] = $pane;
  $display->panels['middle'][0] = 'new-55ad164d-7cc6-4cde-be03-1eea8ae51e60';
  $pane = new stdClass();
  $pane->pid = 'new-7101c42c-9f2a-45cd-8440-3f2405cb0f94';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<h4>​​​​​Wednesday April 20, 2022, 3:00 - 4:00&nbsp;pm eastern</h4>

<p><strong><a href="https://communityinclusion.zoom.us/j/99919813456">LINK TO MEETING</a></strong></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'FY22: Quarter 3 online meeting',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'info-box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7101c42c-9f2a-45cd-8440-3f2405cb0f94';
  $display->content['new-7101c42c-9f2a-45cd-8440-3f2405cb0f94'] = $pane;
  $display->panels['middle'][1] = 'new-7101c42c-9f2a-45cd-8440-3f2405cb0f94';
  $pane = new stdClass();
  $pane->pid = 'new-e7f5e974-3683-45f9-85c9-1ea656f7e1ef';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<h4>July 18 and 19, 2022<br />
Cleveland, OH</h4>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'TPSID Project Director Meeting',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'info-box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e7f5e974-3683-45f9-85c9-1ea656f7e1ef';
  $display->content['new-e7f5e974-3683-45f9-85c9-1ea656f7e1ef'] = $pane;
  $display->panels['middle'][2] = 'new-e7f5e974-3683-45f9-85c9-1ea656f7e1ef';
  $pane = new stdClass();
  $pane->pid = 'new-b3a3c124-5abe-467a-8740-339081e8f33a';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'past events title',
    'body' => '&nbsp;',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Past Events',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => 'tc-home-twitter-block',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b3a3c124-5abe-467a-8740-339081e8f33a';
  $display->content['new-b3a3c124-5abe-467a-8740-339081e8f33a'] = $pane;
  $display->panels['middle'][3] = 'new-b3a3c124-5abe-467a-8740-339081e8f33a';
  $pane = new stdClass();
  $pane->pid = 'new-ff1a8ba6-de71-4c80-8b68-a360a4c90252';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => ' ',
    'body' => '<h4>Thursday, Jan 27, 2022,&nbsp; 3:00 - 4:00 pm eastern</h4>

<hr />
<h4><a href="https://communityinclusion.zoom.us/rec/share/q1JJ-my7IQ1vmpr5132wEYOZvqZYTAIa8fV_os1ms_LsRhc-RJOZz7tsOgLPIz-6.uulVX10d-di-os-s?startTime=1643313797000"><b>Meeting recording</b></a></h4>

<h4><a href="/sites/default/files/files/PPT%20handout_tpsid%20fy22Q2-1-27-22.pdf" target="_blank"><b>PPT handout</b></a></h4>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'FY22: Quarter 2 online meeting',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'info-box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'ff1a8ba6-de71-4c80-8b68-a360a4c90252';
  $display->content['new-ff1a8ba6-de71-4c80-8b68-a360a4c90252'] = $pane;
  $display->panels['middle'][4] = 'new-ff1a8ba6-de71-4c80-8b68-a360a4c90252';
  $pane = new stdClass();
  $pane->pid = 'new-91df911a-448c-4e06-85e1-c7c4d0607959';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Data Collection, Analysis, and Reporting System webinar',
    'body' => '<h4>Presented live on Monday, November 29, 2021 by Sean Nagamatsu and Eric Folk from the University of Hawaii</h4>

<p>This webinar for TPSID staff shares&nbsp;a data collection tool&nbsp;developed by the TPSID staff at the University of Hawaii they call "DCARS". &nbsp;It is used to record and track student progress toward academic, personal, and project goals as well as to track support provision. Use of this system provides the ability to monitor project fidelity indicators, as well as progress toward TPSID, NIRS, and USDOE data collection and reporting. And since the system is continuously updated, it can be used to provide timely updates concerning individual student performance and program data&nbsp;between reporting periods.</p>

<h3 style="margin: 0in;"><a href="https://fast.wistia.net/embed/channel/e0vajbd98r?wchannelid=e0vajbd98r&amp;wvideoid=vuseg04tob"><font face="Calibri, sans-serif"><span style="font-size: 14.6667px;"><b>Watch recording</b></span></font></a></h3>

<p style="margin:0in">&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Data Collection, Analysis, and Reporting System (DCARS) Webinar',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'info-box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '91df911a-448c-4e06-85e1-c7c4d0607959';
  $display->content['new-91df911a-448c-4e06-85e1-c7c4d0607959'] = $pane;
  $display->panels['middle'][5] = 'new-91df911a-448c-4e06-85e1-c7c4d0607959';
  $pane = new stdClass();
  $pane->pid = 'new-9cf9b2fa-4c44-48f7-9e3f-d9a5972c1dcc';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<h4>Tuesday, Oct. 26,&nbsp;2021, 3:00&nbsp; - 4:00 pm eastern</h4>

<hr />
<h4><a href="https://communityinclusion.zoom.us/rec/share/nPXzdq3CI_D_JwGR7BaWKbL4BBSmKSHvQE4UPHF4K7L0Tj_p88L9ek7ENvBZaDpZ.QWGIH5bZmE_P7T04">Meeting Recording</a></h4>

<h4><a href="/sites/default/files/files/FY22_Q1_tpsidmtngPPT_handout.pdf">PPT handout</a></h4>

<h4><a href="/sites/default/files/files/NCC_TSPID%20Survey_Report2021.pdf">TPSID Annual Survey: Report of Findings</a></h4>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'FY 2022 Quarter 1 online meeting',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'info-box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '9cf9b2fa-4c44-48f7-9e3f-d9a5972c1dcc';
  $display->content['new-9cf9b2fa-4c44-48f7-9e3f-d9a5972c1dcc'] = $pane;
  $display->panels['middle'][6] = 'new-9cf9b2fa-4c44-48f7-9e3f-d9a5972c1dcc';
  $pane = new stdClass();
  $pane->pid = 'new-5653cafd-cf81-4ece-9031-fa52a6443691';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Project Director Meeting',
    'body' => '<h4>Monday July 19 and Tuesday, July 20, 2021</h4>

<hr />
<h4>Recordings of all PD Meeting sessions are <a href="https://fast.wistia.com/embed/channel/kaof5i0b7i">now available.</a></h4>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Project Director Meeting',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'info-box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '5653cafd-cf81-4ece-9031-fa52a6443691';
  $display->content['new-5653cafd-cf81-4ece-9031-fa52a6443691'] = $pane;
  $display->panels['middle'][7] = 'new-5653cafd-cf81-4ece-9031-fa52a6443691';
  $pane = new stdClass();
  $pane->pid = 'new-0bc66e59-7e19-43de-98e2-37818bf0a162';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'FY21 Quarter 3 Online Meeting ',
    'body' => '<h4>Wednesday, April 28, 2021, 3:00 - 4:00 pm Eastern time</h4>

<h4>&nbsp;</h4>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'FY21 Quarter 3 Online Meeting ',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'info-box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '0bc66e59-7e19-43de-98e2-37818bf0a162';
  $display->content['new-0bc66e59-7e19-43de-98e2-37818bf0a162'] = $pane;
  $display->panels['middle'][8] = 'new-0bc66e59-7e19-43de-98e2-37818bf0a162';
  $pane = new stdClass();
  $pane->pid = 'new-98a63273-6abb-4f43-9ff5-2d0aa3edd582';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'FY21 Quarter 2 Online Meeting',
    'body' => '<h4>Tuesday, January 26, 2021, 3:00 - 4:00 pm Eastern time</h4>

<h4><b><a href="https://communityinclusion.zoom.us/rec/play/gJkBrKSBfZnzPl2JQMZrERfMszyDknNOQEVbDDMe7X6QZhEhYydlLe3mI6iEX2pQNALPBs3QtftSL2qf.fUZIEmvpVdxUdNjC?continueMode=true">Link to meeting recording</a>&nbsp;</b>(Passcode: 60pC?.%9)</h4>

<p><a href="/sites/default/files/files/TPSIDmtng_1-26-21_PPT_handout.pdf"><b>PPT handout</b></a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'FY21 Quarter 2 Online Meeting',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'info-box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '98a63273-6abb-4f43-9ff5-2d0aa3edd582';
  $display->content['new-98a63273-6abb-4f43-9ff5-2d0aa3edd582'] = $pane;
  $display->panels['middle'][9] = 'new-98a63273-6abb-4f43-9ff5-2d0aa3edd582';
  $pane = new stdClass();
  $pane->pid = 'new-8517b262-6b05-40a3-ba9f-44eca3352a2c';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Get to Know the TPSID Projects',
    'body' => '<h4>Recorded Thursday, November 12, 2020&nbsp; 3:00&nbsp;- 4:00 pm&nbsp;Eastern time</h4>

<h4><a href="https://fast.wistia.net/embed/channel/e0vajbd98r?wchannelid=e0vajbd98r&amp;wvideoid=x7n2oecfwt"><strong>Link to meeting recording</strong></a></h4>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Get to Know the TPSID Projects',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'info-box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '8517b262-6b05-40a3-ba9f-44eca3352a2c';
  $display->content['new-8517b262-6b05-40a3-ba9f-44eca3352a2c'] = $pane;
  $display->panels['middle'][10] = 'new-8517b262-6b05-40a3-ba9f-44eca3352a2c';
  $pane = new stdClass();
  $pane->pid = 'new-5ebd41c0-650e-4208-b114-82ff0b3dc439';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'FY21 Quarter 1 Online Meeting',
    'body' => '<h4>Recorded Wednesday, October 27, 2020, 3:00 - 4:00 pm Eastern time</h4>

<h4><a href="https://icimedia.wistia.com/medias/uf1fa6m4h5"><strong>Link to meeting recording</strong></a></h4>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Get to Know the National Coordinating Center',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'info-box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '5ebd41c0-650e-4208-b114-82ff0b3dc439';
  $display->content['new-5ebd41c0-650e-4208-b114-82ff0b3dc439'] = $pane;
  $display->panels['middle'][11] = 'new-5ebd41c0-650e-4208-b114-82ff0b3dc439';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tpsid_events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'transition_leadership';
  $page->task = 'page';
  $page->admin_title = 'Transition Leadership';
  $page->admin_description = '';
  $page->path = 'projects/transition-leadership-project';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_transition_leadership__panel';
  $handler->task = 'page';
  $handler->subtask = 'transition_leadership';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
      'row2left' => NULL,
      'row2right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Transition Leadership';
  $display->uuid = '67cc1709-9567-445a-94f6-b1a8368bdb6b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_transition_leadership__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b2ad5be5-8dc4-4efe-a9c0-3601031285bc';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Transition Leadership Project Logo" class="img-responsive" src="/sites/default/files/images/transition-leadership_logo.png" /></p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b2ad5be5-8dc4-4efe-a9c0-3601031285bc';
  $display->content['new-b2ad5be5-8dc4-4efe-a9c0-3601031285bc'] = $pane;
  $display->panels['row1left'][0] = 'new-b2ad5be5-8dc4-4efe-a9c0-3601031285bc';
  $pane = new stdClass();
  $pane->pid = 'new-e6848cbf-ead3-402c-b77f-54f6249b5e68';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><a class="btn btn-block btn-huge btn-dk-blue" href="/projects/transition-leadership/transition-leadership-program" type="button">About</a>
<a class="btn btn-block btn-huge btn-dk-blue" href="/projects/transition-leadership/transition-leadership-team-members" type="button">Team Members</a>
<a class="btn btn-block btn-huge btn-dk-blue" href="/projects/transition-leadership/testimonials" type="button">Testimonials</a><a class="btn btn-block btn-huge btn-dk-blue" href="mailto:maria.paiewonsky@umb.edu" type="button">Contact Us</a></p>
<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e6848cbf-ead3-402c-b77f-54f6249b5e68';
  $display->content['new-e6848cbf-ead3-402c-b77f-54f6249b5e68'] = $pane;
  $display->panels['row1left'][1] = 'new-e6848cbf-ead3-402c-b77f-54f6249b5e68';
  $pane = new stdClass();
  $pane->pid = 'new-e1171b3f-1758-46c2-85bd-7ecf6c472dc9';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>&nbsp;</p>

<p><img alt="Maria Paiewonsky." class="center-block img-thumbnail img-responsive" src="/sites/default/files/images/maria-paiewonsky.png" style="height: 200px; width: 200px;" /></p>

<p><strong>Maria Paiewonsky,&nbsp;Ed.D.</strong></p>

<p><a href="mailto:Maria.Paiewonsky@umb.edu">Maria.Paiewonsky@umb.edu</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Program Director',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e1171b3f-1758-46c2-85bd-7ecf6c472dc9';
  $display->content['new-e1171b3f-1758-46c2-85bd-7ecf6c472dc9'] = $pane;
  $display->panels['row1left'][2] = 'new-e1171b3f-1758-46c2-85bd-7ecf6c472dc9';
  $pane = new stdClass();
  $pane->pid = 'new-9bd24227-9f64-4adc-a4aa-e4ddfd26fe68';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_30';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'TLresources',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '9bd24227-9f64-4adc-a4aa-e4ddfd26fe68';
  $display->content['new-9bd24227-9f64-4adc-a4aa-e4ddfd26fe68'] = $pane;
  $display->panels['row1left'][3] = 'new-9bd24227-9f64-4adc-a4aa-e4ddfd26fe68';
  $pane = new stdClass();
  $pane->pid = 'new-2d000323-af49-42ed-beb6-ec3abcc02274';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>For individuals who want or need to keep up with their transition services professional development, here are a few suggestions:</p>

<ul>
	<li><a href="http://transitionta.org/" target="_blank">The National Technical Assistance Center on Transition: The Collaborative (NTACT:C)&nbsp;</a></li>
	<li><a href="https://thinkcollege.net/tc-events-upcoming" target="_blank">Think College Events</a>&nbsp;</li>
	<li><a href="https://beta.communityinclusion.org/news" target="_blank">Institute for Community Inclusion</a></li>
	<li><a href="https://transitiontn.org/" target="_blank">Tennessee Transition</a></li>
	<li><a href="https://tinyurl.com/tm6eyfr4" target="_blank">Transcen Online</a></li>
	<li><a href="https://transitioncoalition.org/" target="_blank">Transition Coalition</a></li>
	<li><a href="https://centerontransition.org/training/index.html" target="_blank">Center on Transition Innovations, Virginia Commonwealth University</a></li>
	<li><a href="https://www.ou.edu/education/centers-and-partnerships/zarrow" target="_blank">Zarrow Center for Learning Enrichment</a></li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Stay Up to Date ',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2d000323-af49-42ed-beb6-ec3abcc02274';
  $display->content['new-2d000323-af49-42ed-beb6-ec3abcc02274'] = $pane;
  $display->panels['row1left'][4] = 'new-2d000323-af49-42ed-beb6-ec3abcc02274';
  $pane = new stdClass();
  $pane->pid = 'new-46604c5b-21b2-4011-805f-034d0d2ce905';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Transition leadership involves the transition from high school to adult life for young people with a wide range of disabilities. Our certificate program bridges the gap between special education and adult services by creating a cohort of professionals who connect these two fields. Students who successfully complete the certificate track will be well positioned to excel in a new role: that of transition specialist.&nbsp; The UMB Transition Leadership program is a fully online, 18-credit course of study. Six courses are offered over four semesters, leading to the Graduate Certificate in Special Education with a Concentration in Transition Leadership. Candidates with this certification are prepared for transition specialist positions in schools, inclusive dual enrollment programs, and agencies and community provider agencies that offer pre-employment transition services.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'project-intro-box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '46604c5b-21b2-4011-805f-034d0d2ce905';
  $display->content['new-46604c5b-21b2-4011-805f-034d0d2ce905'] = $pane;
  $display->panels['row1right'][0] = 'new-46604c5b-21b2-4011-805f-034d0d2ce905';
  $pane = new stdClass();
  $pane->pid = 'new-a41523c2-1eac-4b60-a6a9-27795a65fbef';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_27';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'TLarticles',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'tlp-article-panel ie-news ',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a41523c2-1eac-4b60-a6a9-27795a65fbef';
  $display->content['new-a41523c2-1eac-4b60-a6a9-27795a65fbef'] = $pane;
  $display->panels['row1right'][1] = 'new-a41523c2-1eac-4b60-a6a9-27795a65fbef';
  $pane = new stdClass();
  $pane->pid = 'new-d6b07dc0-8df5-4a3d-8085-cace460458b0';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '4894',
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd6b07dc0-8df5-4a3d-8085-cace460458b0';
  $display->content['new-d6b07dc0-8df5-4a3d-8085-cace460458b0'] = $pane;
  $display->panels['row1right'][2] = 'new-d6b07dc0-8df5-4a3d-8085-cace460458b0';
  $pane = new stdClass();
  $pane->pid = 'new-218ab725-de61-408b-a557-1f4ebf1ce042';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Standards',
    'body' => '<p>This certificate is based on national transition specialist standards identified by the <a href="https://exceptionalchildren.org/standards">Council of Exceptional Children’s Division on Career Development and Transition’s Transition Specialist Standards</a>. Graduates of the program are eligible to apply for <a href="https://dcdt.org/dcdt-individual-teacher-certification">DCDT’s Provisional or Professional Certification in Transition Services</a>. For candidates in Massachusetts, eligible graduates will be instructed how to apply for the <a href="https://www.doe.mass.edu/licensure/endorsements/transition-specialist.html">MA DESE Transition Specialist Endorsement</a></p>

<p><img alt="" src="/sites/default/files/images/DCDT%20long.png" style="width: 300px; height: 85px;" /></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'National Transition Specialist Standards',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '218ab725-de61-408b-a557-1f4ebf1ce042';
  $display->content['new-218ab725-de61-408b-a557-1f4ebf1ce042'] = $pane;
  $display->panels['row1right'][3] = 'new-218ab725-de61-408b-a557-1f4ebf1ce042';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['transition_leadership'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vocational_rehabilitation_affinity_group';
  $page->task = 'page';
  $page->admin_title = 'Vocational Rehabilitation Affinity Group';
  $page->admin_description = '';
  $page->path = 'ta-training/affinity-groups/vocational-rehabilitation';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_vocational_rehabilitation_affinity_group__panel';
  $handler->task = 'page';
  $handler->subtask = 'vocational_rehabilitation_affinity_group';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Vocational Rehabilitation Affinity Group';
  $display->uuid = '64b8f5ee-916b-462c-8565-c0cf5e419fac';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_vocational_rehabilitation_affinity_group__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b348c947-4143-4198-a74e-f78ed60f1997';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'logo',
    'body' => '<p><img alt="Voc Rehab affinity group logo" class="img-responsive" src="/sites/default/files/images/Voc%20Rehab.png" /></p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b348c947-4143-4198-a74e-f78ed60f1997';
  $display->content['new-b348c947-4143-4198-a74e-f78ed60f1997'] = $pane;
  $display->panels['row1left'][0] = 'new-b348c947-4143-4198-a74e-f78ed60f1997';
  $pane = new stdClass();
  $pane->pid = 'new-85d98049-76a1-4178-8a72-2030a351a875';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Russell Thelin" class="center-block img-thumbnail img-responsive" src="/sites/default/files/files/images/staff-photos/russell-thelin-thumb.jpg" style="width: 100px; height: 100px;" /></p>

<p><strong>Russell Thelin</strong>, MS, LVRC CRC<br />
Senior Policy Fellow<br />
<a href="mailto:russell.thelin@umb.edu">russell.thelin@umb.edu</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'AFFINITY GROUP FACILITATOR',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '85d98049-76a1-4178-8a72-2030a351a875';
  $display->content['new-85d98049-76a1-4178-8a72-2030a351a875'] = $pane;
  $display->panels['row1left'][1] = 'new-85d98049-76a1-4178-8a72-2030a351a875';
  $pane = new stdClass();
  $pane->pid = 'new-491afe86-61ba-42a8-8526-15a53525b89d';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>Sign up to receive email updates for one or&nbsp;more Affinity Groups.</p>

<p><a class="btn btn-primary" href="https://nam10.safelinks.protection.outlook.com/?url=https%3A%2F%2Fforms.gle%2FJe4msZRDoko3MkTk9&amp;data=04%7C01%7CSheila.Johnson%40umb.edu%7C1c5ce26b3b6d4ecec8b708d97ed48538%7Cb97188711ee94425953c1ace1373eb38%7C0%7C0%7C637680273491490073%7CUnknown%7CTWFpbGZsb3d8eyJWIjoiMC4wLjAwMDAiLCJQIjoiV2luMzIiLCJBTiI6Ik1haWwiLCJXVCI6Mn0%3D%7C1000&amp;sdata=E3TaxZFtHcw4W624XgIs%2BDfhaV7nSEMX3EdrEpH2Gvo%3D&amp;reserved=0" role="button" target="_blank">Sign Up Now!</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'STAY INFORMED BY EMAIL',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '491afe86-61ba-42a8-8526-15a53525b89d';
  $display->content['new-491afe86-61ba-42a8-8526-15a53525b89d'] = $pane;
  $display->panels['row1left'][2] = 'new-491afe86-61ba-42a8-8526-15a53525b89d';
  $pane = new stdClass();
  $pane->pid = 'new-8c150212-98ca-4911-87a3-321b23704421';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'AffinityGroup-VocationalRehab-Resources',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8c150212-98ca-4911-87a3-321b23704421';
  $display->content['new-8c150212-98ca-4911-87a3-321b23704421'] = $pane;
  $display->panels['row1left'][3] = 'new-8c150212-98ca-4911-87a3-321b23704421';
  $pane = new stdClass();
  $pane->pid = 'new-066fd5f6-9ded-40fb-bc9b-863e7c04a23c';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p class="lead">Welcome to the Think College Affinity Group on Vocational Rehabilitation. The purpose of the Affinity Group is to:</p>

<ul>
	<li>Create an online community for review and discussion of issues,&nbsp;strategies and results related to&nbsp;the partnership between Vocational Rehabilitation (VR) agencies and colleges &amp; universities,</li>
	<li>Share promising practices and consider new ideas for programs,</li>
	<li>Exchange tips, develop intra-/inter-state&nbsp;partnerships, and</li>
	<li>Form support connections</li>
</ul>

<p>This Affinity Group is designed for people associated with VR, higher education programs for students with intellectual disability, and&nbsp;allied organizations that would like to become more involved. The activities of the group will be relevant for those working directly to building or enhancing the partnership between VR and higher education programs.&nbsp;A particular focus will be on considering current promising practices and identifying methods of innovation/expansion in the partnerships that advance the results for mutual clients/students of these programs.<br />
&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '066fd5f6-9ded-40fb-bc9b-863e7c04a23c';
  $display->content['new-066fd5f6-9ded-40fb-bc9b-863e7c04a23c'] = $pane;
  $display->panels['row1right'][0] = 'new-066fd5f6-9ded-40fb-bc9b-863e7c04a23c';
  $pane = new stdClass();
  $pane->pid = 'new-e53af85a-fa4a-41a8-beb6-91b5afc12f95';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p dir="ltr" role="presentation"><a href="http://communityinclusion.zoom.us/j/98092070179">Permanent Zoom meeting room</a></p>

<p dir="ltr" role="presentation"><a href="https://docs.google.com/document/d/1MVAHFiBdeR46WkJSIauaXCWnMCjr4b-HRl7SZM64r7I/edit">Rolling agenda</a>&nbsp;&nbsp;all agendas and notes can be found here</p>

<p dir="ltr" role="presentation"><b id="docs-internal-guid-e43c00c8-7fff-5632-d88c-5fe0f96f1ce9">All meetings are held from 2:00-3:30pm Eastern, unless otherwise noted</b></p>

<ul dir="ltr">
	<li role="presentation">May 4, 2022</li>
	<li role="presentation">August 3, 2022</li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Future Meetings',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e53af85a-fa4a-41a8-beb6-91b5afc12f95';
  $display->content['new-e53af85a-fa4a-41a8-beb6-91b5afc12f95'] = $pane;
  $display->panels['row1right'][1] = 'new-e53af85a-fa4a-41a8-beb6-91b5afc12f95';
  $pane = new stdClass();
  $pane->pid = 'new-ebbff583-9296-48a3-bf6e-db5ad5cf8bfc';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><em>The Vocational Rehabilitation Affinity Group holds meetings quarterly and typically includes&nbsp;a short presentation, legislative and policy updates,&nbsp;as well as informal sharing at each meeting. Click on the links below to access recordings, meeting agendas,&nbsp;and other resources&nbsp;from past meetings.&nbsp;</em></p>

<p><strong>Topic: Building Relationships with VR - Lessons from Groundhog Day</strong><br />
<strong>Date: </strong>February 2, 2022<br />
<strong>Summary: </strong>The group discussed experiences and techniques to establish, build, and advance relationships between Vocational Rehabilitation (VR) and inclusive post-secondary education (IPSE). The group reviewed the Addressing the Policy Tangle report regarding needed alignment of services and collaboration among agencies and institutions of higher education. The group discussion included the most common reasons cited by VR agencies as to why they cannot or do not support IPSE.</p>

<p><strong><a href="https://thinkcollege.net/resource/vocational-rehabilitation/vocational-rehabilitation-affinity-group-2-2-2022">Meeting recording - February 2022</a><br />
<a href="https://sites.ed.gov/idea/idea-files/qa-increasing-postsecondary-opportunities-success-for-students-youth-with-disabilities-sept-17-2019/">Regulatory intent language regarding the capacity for VR to support IPSE</a></strong><br />
<strong><a href="https://thinkcollege.net/resource/federal-legislation/addressing-the-policy-tangle-students-with-intellectual-disability-and">Addressing the Policy Tangle</a></strong></p>

<hr />
<p><strong>Date:</strong>&nbsp;November 3, 2021</p>

<p><strong>Topic:</strong>&nbsp;Oklahoma VR and IPSE: History and Evolution</p>

<p><strong>Presenter:</strong>&nbsp;Julie Lackey, Oklahoma</p>

<p><strong>Summary:</strong>&nbsp;Julie Lackey spoke about the history and evolution of relationships to advance IPSE within Oklahoma, including their VR agency as a critical player. Covering the effort from 2018 to the current time, Julie talked about the skills and effort to build relationships with VR, higher education, legislators, Dept. of Education, and more that have moved VR IPSE support from none to supporting students in three different programs within the state.</p>

<p><strong><a href="/sites/default/files/files/VR%20Affinity%20Group%2011_3_21%20summary.docx">Meeting notes</a></strong></p>

<hr />
<p><strong>Date:</strong>&nbsp;February 3, 2021</p>

<p><strong><a data-mce-href="https://docs.google.com/document/d/1MVAHFiBdeR46WkJSIauaXCWnMCjr4b-HRl7SZM64r7I/edit" href="https://docs.google.com/document/d/1MVAHFiBdeR46WkJSIauaXCWnMCjr4b-HRl7SZM64r7I/edit">Meeting notes</a>&nbsp;</strong></p>

<hr />
<p><strong>Date:</strong>&nbsp;November 5</p>

<p><em>Details and meeting resources are unavailable</em></p>

<hr />
<p><strong>Date:</strong>&nbsp;August 12, 2020</p>

<p><strong>Topic:</strong>&nbsp;Joint meeting of the Think College Vocational Rehabilitation, Public Policy, and Student Credentials Affinity Groups</p>

<p><strong>Presenters:</strong>&nbsp;Mary Hauff,&nbsp;Lauren Bruno and Jennifer Cremers</p>

<p><strong>Summary:</strong>&nbsp;Mary Hauff,&nbsp;advocate and parent from Minnesota, and&nbsp;Lauren Bruno and Jennifer Cremers, University of Iowa REACH program, shared an overview of the program’s use of WorkKeys as a tool to increase access to evidence-based credentials earned by students with ID.</p>

<p><strong><a data-mce-href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affini-1" href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affini-1">Meeting notes and recording are available here</a>.&nbsp;</strong></p>

<hr />
<p><strong>Date:</strong>&nbsp;April 1, 2020</p>

<p><strong>Topic:</strong>&nbsp;Joint meeting of the Think College Vocational Rehabilitation, Public Policy, and Student Credentials Affinity Groups</p>

<p><strong><a data-mce-href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affini-0" href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affini-0">Meeting resources are available&nbsp;</a><a data-mce-href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affini-0" href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affini-0">here</a></strong></p>

<hr />
<p><strong>Date:</strong>&nbsp;November 6, 2019</p>

<p><strong>Topic:</strong>&nbsp;Joint meeting of the Think College Vocational Rehabilitation, Public Policy, and Student Credentials Affinity Groups</p>

<p><strong><a data-mce-href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affini-0" href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affini-0">Meeting resources are available&nbsp;</a><a data-mce-href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affinity" href="https://thinkcollege.net/resource/vocational-rehabilitation-advocacy-outreach-accreditation-and-credentials/combined-affinity">here</a></strong></p>

<hr />
<p><strong>Date:</strong>&nbsp;August 7, 2019</p>

<p><strong>Topic:</strong>&nbsp;Joint meeting of the Think College Vocational Rehabilitation, Public Policy, and Student Credentials Affinity Groups</p>

<p><strong><a data-mce-href="https://thinkcollege.net/resource/combined-vr-policy-credentials-affinity-group-meeting-august-2019" href="https://thinkcollege.net/resource/combined-vr-policy-credentials-affinity-group-meeting-august-2019">Meeting resources are available&nbsp;here</a></strong></p>

<hr />
<p style="margin-top:0in; margin-right:0in; margin-bottom:7.5pt; margin-left:0in"><b>Date:</b> May 1, 2019<br />
<strong><a href="https://thinkcollege.net/resource/vocational-rehabilitation/vocational-rehabilitation-affinity-group-meeting-may-2019">Meeting resources available here</a></strong></p>

<hr />
<p><b>Date: </b>February 6, 2019</p>

<p><strong><a href="https://thinkcollege.net/resource/vocational-rehabilitation/vocational-rehabilitation-affinity-group-meeting-february-2019">Meeting resources available here</a></strong></p>

<hr />
<p style="margin-top:0in; margin-right:0in; margin-bottom:7.5pt; margin-left:0in"><strong><span style="background:white"><span style="font-family:&quot;Lato&quot;,sans-serif"><span style="color:#333333"><a href="https://docs.google.com/document/d/1qh8SaoC7D8JTsWzOQfP-M2dClP8PJ4nckNMbYsEbPyQ/edit#bookmark=id.525ph4n37z82">See the agenda for notes on 2018 meetings.</a></span></span></span></strong></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Past Meetings',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ebbff583-9296-48a3-bf6e-db5ad5cf8bfc';
  $display->content['new-ebbff583-9296-48a3-bf6e-db5ad5cf8bfc'] = $pane;
  $display->panels['row1right'][2] = 'new-ebbff583-9296-48a3-bf6e-db5ad5cf8bfc';
  $pane = new stdClass();
  $pane->pid = 'new-485959dd-588f-4b35-b116-a612eca5d427';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><b>&nbsp;</b>Send an email to <a href="mailto:Russ.Thelin@umb.edu?subject=Ideas%20for%20VR%20Affinity%20Group">Russ.Thelin@umb.edu</a> or&nbsp;<a href="mailto:thinkcollegeTA@gmail.com">thinkcollegeTA@gmail.com</a>.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Have other ideas for the Affinity Group on Vocational Rehabilitation?',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '485959dd-588f-4b35-b116-a612eca5d427';
  $display->content['new-485959dd-588f-4b35-b116-a612eca5d427'] = $pane;
  $display->panels['row1right'][3] = 'new-485959dd-588f-4b35-b116-a612eca5d427';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vocational_rehabilitation_affinity_group'] = $page;

  return $pages;

}
