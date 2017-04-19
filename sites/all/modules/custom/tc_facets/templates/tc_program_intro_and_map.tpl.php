<div class="info-box">
  <h2 style="border-bottom: #ccc 1px solid; padding-bottom: 10px;">
    Find a college that's right for you!
  </h2>

  <p class="lead">
    Find and compare information about <span style="color:#20527C"><?php echo $count; ?></span>
    college programs for students with intellectual disabilities! Search by
    program name, location, and other keywords. See "Advanced Search"
    for more options to help you narrow your search
    and build a list of schools that are a good match for you.
  </p>

  <hr/>

  <?php
  include(drupal_get_path('module', 'tc_facets') . '/templates/tc_state_program_count_map.tpl.php');
  ?>

  <hr/>

  <p class="small clearfix">
    The information included here was submitted to Think College by the
    college programs. Being listed here does not indicate or imply a
    Think College endorsement. There also may be programs available that
    have not reported to us. All programs listed here must be affiliated
    with an accredited college or university and serve students with
    intellectual disabilities. To let us know about a new program, or to
    make changes to a current program listing,
    please email <a href="mailto:thinkcollege@umb.edu">thinkcollege@umb.edu.</a>
  </p>

</div>

