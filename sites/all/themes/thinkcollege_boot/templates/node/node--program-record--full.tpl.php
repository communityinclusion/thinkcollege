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
  <div>
    <div class="row">
      <div class="col-sm-12 program-heading">

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

        <div class="program-search-program-name">
          <?php print $title; ?>
        </div>

        <div class="program-university">
          <?php print render($content['field_prog_col_univ_name']); ?>
        </div>

        <div class="program-location">
          <?php print render($content['field_prog_city']); ?>, <?php print render($content['field_prog_state']); ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-sm-7 col-xs-12">
        <div class="row">
          <div class="col-sm-12">
            <div class="panel-body">
              <div class="media">
                <span class="pull-left">
                  <?php print render($content['field_prog_photo']); ?>
                </span>
                <div class="media-body">
                  <h4 class="media-heading">Description</h4>
                  <?php print render($content['body']); ?>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>

      <div class="col-sm-5 col-xs-12 program-search-info">
        <div class="row">
          <div class="col-xs-3">
            Address
          </div>
          <div class="col-xs-9">
            <?php print $title; ?>
            <?php print render($content['field_prog_street_address']); ?>
            <?php print render($content['field_prog_address_line_2']); ?>
            <?php print render($content['field_prog_city']); ?>,
            <?php print render($content['field_prog_state']); ?>
            <?php print render($content['field_zip_code']); ?>
          </div>
        </div>

        <div class="row">
          <div class="col-xs-3">
            Phone
          </div>
          <div class="col-xs-9">
            <?php print render($content['field_prog_contact_phone']); ?>
          </div>
        </div>

        <div class="row">
          <div class="col-xs-3">
            Web
          </div>
          <div class="col-xs-9">
            <?php print render($content['field_prog_program_website']); ?>
          </div>
        </div>

        <div class="row">
          <div class="col-xs-3">
            Contact
          </div>
          <div class="col-xs-9">
            <?php print render($content['field_progprogram_contact_person']); ?>
          </div>
        </div>

        <div class="row">
          <div class="col-xs-3">
            Email
          </div>
          <div class="col-xs-9">
            <?php print render($content['field_prog_program_contact_email']); ?>
          </div>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-sm-12 buttons">
        <a class="btn btn-danger" href="/collegesearch/favorite/<?php print $node->nid; ?>?destination=<?php print current_path(); ?>"><i style="color:#fff;" class="fa fa-heart fa-lg" aria-hidden="true"></i>Save</a>
        <a class="btn btn-danger" href="/printpdf/<?php print $node->nid; ?>"><i style="color:#fff;" class="fa fa-heart fa-lg" aria-hidden="true"></i>Print as PDF</a>
      </div>
    </div>

    <?php
    if (isset($content['field_prog_public_or_privat']) ||
        isset($content['field_prog_type_of_school']) ||
        isset($content['field_prog_is_was_tpsid']) ||
        isset($content['field_prog_hs_coll']) ||
        isset($content['field_how_many_students_total_at']) ||
        isset($content['field_prog_summer_prog_y_n'])):
    ?>
      <div class="program-box" id="general">
        <div class="row">
          <div class="col-sm-12">
            <h2>General</h2>
          </div>
          <div>
            <?php print render($content['field_prog_public_or_privat']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_type_of_school']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_is_was_tpsid']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_hs_coll']); ?>
          </div>
          <div>
            <?php print render($content['field_how_many_students_total_at']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_summer_prog_y_n']); ?>
          </div>
        </div>
      </div>
    <?php endif ?>

    <?php
    if (isset($content['field_prog_school_dist']) ||
        isset($content['field_prog_school_dist']) ||
        isset($content['field_prog_school_dist'])):
    ?>
      <div class="program-box" id="affiliates">
        <div class="row">
          <div class="col-sm-12">
            <h2>Affiliates</h2>
          </div>
          <div>
            <?php print render($content['field_prog_school_dist']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_school_dist_contact']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_schl_dist_email']); ?>
          </div>
        </div>
      </div>
    <?php endif ?>

    <?php
    if (isset($content['field_prog_tuition']) ||
        isset($content['field__prog_room_and_board']) ||
        isset($content['field_prog_other_costs']) ||
        isset($content['field_prog_other_costs_amount']) ||
        isset($content['field_prog_explain_other_costs']) ||
        isset($content['field_prog_ctp_y_n']) ||
        isset($content['field_prog_pay_methods']) ||
        isset($content['field_prog_addl_scholarships'])):
    ?>
      <div class="program-box" id="cost">
        <div class="row">
          <div class="col-sm-12">
            <h2>Cost</h2>
          </div>
          <div>
            <?php print render($content['field_prog_tuition']); ?>
          </div>
          <div>
            <?php print render($content['field__prog_room_and_board']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_other_costs']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_other_costs_amount']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_explain_other_costs']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_ctp_y_n']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_pay_methods']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_addl_scholarships']); ?>
          </div>
        </div>
      </div>
    <?php endif ?>

    <?php
    if (isset($content['field_prog_admiss_link']) ||
        isset($content['field_prog_admiss_requirements']) ||
        isset($content['field_prog_explain_other']) ||
        isset($content['field_prog_which_disabilities'])):
    ?>
      <div class="program-box" id="requirements">
        <div class="row">
          <div class="col-sm-12">
            <h2>Requirements</h2>
          </div>
          <div>
            <?php print render($content['field_prog_admiss_link']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_admiss_requirements']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_explain_other']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_which_disabilities']); ?>
          </div>
        </div>
      </div>
    <?php endif ?>

    <div class="program-box" id="academic">
      <div class="row">
        <div class="col-sm-12">
          <h2>Academic</h2>
        </div>
      </div>
    </div>

    <div class="program-box" id="housing">
      <div class="row">
        <div class="col-sm-12">
          <h2>Housing</h2>
        </div>
      </div>
    </div>

    <div class="program-box" id="extracurricular">
      <div class="row">
        <div class="col-sm-12">
          <h2>Extracurricular</h2>
        </div>
      </div>
    </div>

    <?php
    if (isset($content['field_prog_num_applied']) ||
        isset($content['field_prog_15_16_accepted'])):
    ?>
      <div class="program-box" id="acceptance-rates">
        <div class="row">
          <div class="col-sm-12">
            <h2>Acceptance, Rentention, and Completion Rates</h2>
          </div>
          <div>
            <?php print render($content['field_prog_num_applied']); ?>
          </div>
          <div>
            <?php print render($content['field_prog_15_16_accepted']); ?>
          </div>
        </div>
      </div>
    <?php endif ?>

  </div>

</article>
