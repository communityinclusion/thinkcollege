<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup templates
 */
//krumo($content);
global $base_url;
$classes .= ' node-program-record-full';
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="row">
    <div class="col-md-7 program-heading">
      <div class="program-search-program-name">
        <?php print $title; ?>
      </div>

      <div class="program-university">
        <?php print render($content['field_prog_col_univ_name']); ?>
      </div>

      <div class="program-location">
        <?php print $title; ?><br/>
        <?php print render($content['field_address']['#items'][0]['thoroughfare']); ?><br/>
        <?php
        if (isset($content['field_address']['#items'][0]['premise'])) {
          print render($content['field_address']['#items'][0]['premise']) . '<br/>';
        }
        ?>
        <?php print render($content['field_address']['#items'][0]['locality']); ?>,
        <?php print render($content['field_address']['#items'][0]['administrative_area']); ?>
        <?php print render($content['field_address']['#items'][0]['postal_code']); ?>
      </div>

      <div class="program_icon_box">

        <?php if($tc_tpsid_icon): ?>
          <div class="program_icon">
            <div class="tpsid_icon">TPSID</div>
          </div>
        <?php endif ?>

        <?php if($tc_financial_aid_icon): ?>
          <div class="program_icon">
            <div class="cost_icon">
              <img src="<?php print $base_url . '/' . drupal_get_path('theme', 'thinkcollege_boot'); ?>/images/financialaid.svg" alt="icon name">
            </div>
          </div>
        <?php endif ?>

        <?php if($tc_housing_icon): ?>
          <div class="program_icon">
            <div class="home_icon">
              <img src="<?php print $base_url . '/' . drupal_get_path('theme', 'thinkcollege_boot'); ?>/images/home.svg" alt="icon name">
            </div>
          </div>
        <?php endif ?>
      </div>

      <div class="well">
        <table class="program-contact-info">
          <tbody>
            <tr>
              <td>
                <?php
                if (isset($content['field_progprogram_contact_person']['#display_label'])) {
                  print $content['field_progprogram_contact_person']['#display_label'];
                }
                else {
                  print $content['field_progprogram_contact_person']['#title'];
                }
                ?>
              </td>
              <td><?php print $content['field_progprogram_contact_person'][0]['#markup']; ?></td>
            </tr>
            <tr>
              <td>
                <?php
                if (isset($content['field_prog_program_contact_email']['#display_label'])) {
                  print $content['field_prog_program_contact_email']['#display_label'];
                }
                else {
                  print $content['field_prog_program_contact_email']['#title'];
                }
                ?>
              </td>
              <td><?php print $content['field_prog_program_contact_email'][0]['#markup']; ?></td>
            </tr>
            <tr>
              <td>
                <?php
                if (isset($content['field_prog_contact_phone']['#display_label'])) {
                  print $content['field_prog_contact_phone']['#display_label'];
                }
                else {
                  print $content['field_prog_contact_phone']['#title'];
                }
                ?>
              </td>
              <td><?php print $content['field_prog_contact_phone'][0]['#markup']; ?></td>
            </tr>
            <tr>
              <td>
                <?php
                if (isset($content['field_prog_program_website']['#display_label'])) {
                  print $content['field_prog_program_website']['#display_label'];
                }
                else {
                  print $content['field_prog_program_website']['#title'];
                }
                ?>
              </td>
              <td><?php print render($content['field_prog_program_website'][0]); ?></td>
            </tr>
          </tbody>
        </table>
      </div>
    </div>

    <div class="col-md-5">
      <div class="print-block">
        <?php print theme('tc_favorite_button', array('nid' => $node->nid, 'size' => 'xs')); ?>
        <a href="/print/<?php print $node->nid; ?>" type="button" class="btn btn-default btn-xs"><i class="fa fa-print" aria-hidden="true"></i> Print</a>
        <a href="/printpdf/<?php print $node->nid; ?>" type="button" class="btn btn-default btn-xs"><i class="fa fa-file-pdf-o" aria-hidden="true"></i> Save to PDF</a>
      </div>
      <?php print render($content['field_lat_lon'][0]); ?>
    </div>
  </div>

  <div class="row">
    <div class="col-md-12">
      <?php print render($content['body']); ?>
    </div>
  </div>

  <?php
  if (isset($content['field_prog_public_or_privat']) ||
      isset($content['field_type_of_school_display']) ||
      isset($content['field_prog_other_explain']) ||
      isset($content['field_prog_is_was_tpsid']) ||
      isset($content['field_prog_hs_coll']) ||
      isset($content['field_how_many_students_total_at']) ||
      isset($content['field_prog_when_will_progr_start']) ||
      isset($content['field_prog_summer_prog_y_n']) ||
      isset($content['field_prog_summer_descrip']) ||
      isset($content['field_prog_summer_info_link'])):
  ?>
    <div class="program-box" id="general">
      <table class="table table-striped">
        <thead>
          <tr>
            <th colspan="2"><i class="fa fa-info-circle" aria-hidden="true"></i> General</th>
          </tr>
        </thead>
        <tbody>
          <?php // Each of these fields is rendered by field--program-record--full.tpl.php - this is what adds the <tr> and <td>. ?>
          <?php print render($content['field_prog_public_or_privat']); ?>
          <?php print render($content['field_type_of_school_display']); ?>
          <?php print render($content['field_prog_other_explain']); ?>
          <?php print render($content['field_prog_is_was_tpsid']); ?>
          <?php print render($content['field_prog_hs_coll']); ?>
          <?php print render($content['field_how_many_students_total_at']); ?>
          <?php print render($content['field_prog_when_will_progr_start']); ?>
          <?php print render($content['field_summer_program_display']); ?>
          <?php print render($content['field_prog_summer_info_link']); ?>
        </tbody>
      </table>
    </div>
  <?php endif ?>

  <?php
  if (isset($content['field_prog_school_dist']) ||
      isset($content['field_prog_school_dist']) ||
      isset($content['field_prog_school_dist'])):
  ?>
    <div class="program-box" id="affiliates">
      <table class="table table-striped">
        <thead>
        <tr>
          <th colspan="2"><i class="fa fa-users" aria-hidden="true"></i> Affiliates</th>
        </tr>
        </thead>
        <tbody>
        <?php print render($content['field_prog_school_dist']); ?>
        <?php print render($content['field_prog_school_dist_contact']); ?>
        <?php print render($content['field_prog_schl_dist_email']); ?>
        </tbody>
      </table>
    </div>
  <?php endif ?>

  <?php
  if (isset($content['field_prog_admit_deadline']) ||
    isset($content['field_prog_admiss_link']) ||
    isset($content['field_requirements_display'])):
    ?>
    <div class="program-box" id="requirements">
      <table class="table table-striped">
        <thead>
        <tr>
          <th colspan="2"><i class="fa fa-list" aria-hidden="true"></i> Requirements</th>
        </tr>
        </thead>
        <tbody>
        <?php print render($content['field_prog_admit_deadline']); ?>
        <?php print render($content['field_prog_admiss_link']); ?>
        <?php print render($content['field_requirements_display']); ?>
        <?php //print render($content['field_prog_which_disabilities']); ?>
        <?php //print render($content['field_prog_which_dis_specify']); ?>
        </tbody>
      </table>
    </div>
  <?php endif ?>

  <?php
  if (isset($content['field_prog_num_applied']) ||
    isset($content['field_prog_15_16_accepted']) ||
    isset($content['field_prog_explain_nums']) ||
    isset($content['field_prog_15_16_admit_rate']) ||
    isset($content['field_prog_retention_rate']) ||
    isset($content['field_prog_length_years'])):
    ?>
    <div class="program-box" id="acceptance-rates">
      <table class="table table-striped">
        <thead>
        <tr>
          <th colspan="2"><i class="fa fa-pie-chart" aria-hidden="true"></i> Acceptance, Retention, and Completion Rates</th>
        </tr>
        </thead>
        <tbody>
        <?php print render($content['field_prog_num_applied']); ?>
        <?php print render($content['field_prog_15_16_accepted']); ?>
        <?php print render($content['field_prog_explain_nums']); ?>
        <?php print render($content['field_prog_15_16_admit_rate']); ?>
        <?php print render($content['field_prog_retention_rate']); ?>
        <?php print render($content['field_prog_length_years']); ?>
        </tbody>
      </table>
    </div>
  <?php endif ?>

  <?php
  if (isset($content['field_prog_tuition']) ||
      isset($content['field_prog_room_and_board_displa']) ||
      isset($content['field_prog_specific_fees']) ||
      isset($content['field_prog_cost_of_the_program']) ||
      isset($content['field_prog_other_costs_display']) ||
      isset($content['field_prog_ctp_y_n']) ||
      isset($content['field_prog_students_pay_display']) ||
      isset($content['field_prog_addl_scholarships']) ||
      isset($content['field_prog_scholarship_link'])):
  ?>
    <div class="program-box" id="cost">
      <table class="table table-striped">
        <thead>
        <tr>
          <th colspan="2"><i class="fa fa-money" aria-hidden="true"></i> Cost</th>
        </tr>
        </thead>
        <tbody>
        <?php print render($content['field_prog_tuition']); ?>
        <?php print render($content['field_prog_room_and_board_displa']); ?>
        <?php print render($content['field_prog_specific_fees']); ?>
        <?php print render($content['field_prog_cost_of_the_program']); ?>
        <?php print render($content['field_prog_other_costs_display']); ?>
        <?php print render($content['field_prog_ctp_y_n']); ?>
        <?php print render($content['field_prog_students_pay_display']); ?>
        <?php print render($content['field_prog_addl_scholarships']); ?>
        <?php print render($content['field_prog_scholarship_link']); ?>
        </tbody>
      </table>
    </div>
  <?php endif ?>

  <?php
  if (isset($content['field_prog_course_types']) ||
    isset($content['field_prog_more_course_detail']) ||
    isset($content['field_students_take_courses_disp']) ||
    isset($content['field_prog_spec_courses_mor_info']) ||
    isset($content['field_prog_perc_acad_time']) ||
    isset($content['field_name_of_credential_degree_']) ||
    isset($content['field_please_select_any_all_of_t'])):
    ?>
    <div class="program-box" id="academic">
      <table class="table table-striped">
        <thead>
        <tr>
          <th colspan="2"><i class="fa fa-graduation-cap" aria-hidden="true"></i> Academic</th>
        </tr>
        </thead>
        <tbody>
        <?php print render($content['field_prog_course_types']); ?>
        <?php print render($content['field_prog_more_course_detail']); ?>
        <?php print render($content['field_students_take_courses_disp']); ?>
        <?php print render($content['field_prog_spec_courses_mor_info']); ?>
        <?php print render($content['field_prog_perc_acad_time']); ?>
        <?php print render($content['field_name_of_credential_degree_']); ?>
        <?php print render($content['field_please_select_any_all_of_t']); ?>
        </tbody>
      </table>
    </div>
  <?php endif ?>

  <?php
  /*
  if (isset($content['field_prog_course_types']) ||
    isset($content['field_prog_special_courses']) ||
    isset($content['field_prog_vocational_credential'])):*/
    ?>
    <div class="program-box" id="employment">
      <table class="table table-striped">
        <thead>
        <tr>
          <th colspan="2"><i class="fa" aria-hidden="true"></i> Employment</th>
        </tr>
        </thead>
        <tbody>
        </tbody>
      </table>
    </div>
  <?php //endif ?>

  <?php
  if (isset($content['field_prog_housing_y_n'])):
    ?>
    <div class="program-box" id="housing">
      <table class="table table-striped">
        <thead>
        <tr>
          <th colspan="2"><i class="fa fa-home" aria-hidden="true"></i> Housing</th>
        </tr>
        </thead>
        <tbody>
        <?php print render($content['field_prog_housing_y_n']); ?>
        </tbody>
      </table>
    </div>
  <?php endif ?>

  <?php
  if (isset($content['field_prog_student_orgs_y_n']) ||
    isset($content['field_prog_overall_time_dist']) ||
    isset($content['field_prog_extracurric_explain'])):
    ?>
    <div class="program-box" id="extracurricular">
      <table class="table table-striped">
        <thead>
        <tr>
          <th colspan="2"><i class="fa fa-list" aria-hidden="true"></i> Extracurricular</th>
        </tr>
        </thead>
        <tbody>
        <?php print render($content['field_prog_student_orgs_y_n']); ?>
        <?php print render($content['field_prog_overall_time_dist']); ?>
        <?php print render($content['field_prog_extracurric_explain']); ?>
        </tbody>
      </table>
    </div>
  <?php endif ?>

</article>
