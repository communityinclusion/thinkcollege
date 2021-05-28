<?php
/**
 * @file
 * Template for tc_3col.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display tc-multipass clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

    <div class="row">
    <div class="col-sm-12 tc-row1">
      <?php print $content['row1']; ?>
    </div>
  </div>

  <div class="row">
    <div class="col-md-4 tc-row2left">
      <?php print $content['row2left']; ?>
    </div>
    <div class="col-md-4 tc-row2center">
      <?php print $content['row2center']; ?>
    </div>
      <div class="col-md-4 tc-row2right">
      <?php print $content['row2right']; ?>
    </div>
  </div>

  <div class="row">
    <div class="col-md-4 tc-row3left">
      <?php print $content['row3left']; ?>
    </div>
    <div class="col-md-4 tc-row3center">
      <?php print $content['row3center']; ?>
    </div>
      <div class="col-md-4 tc-row3right">
      <?php print $content['row3right']; ?>
    </div>
  </div>

  <div class="row">
    <div class="col-md-4 tc-row4left">
      <?php print $content['row1left']; ?>
    </div>
    <div class="col-md-4 tc-row4center">
      <?php print $content['row4center']; ?>
    </div>
      <div class="col-md-4 tc-row4right">
      <?php print $content['row4right']; ?>
    </div>
  </div>


</div><!-- /.tc-3col -->
