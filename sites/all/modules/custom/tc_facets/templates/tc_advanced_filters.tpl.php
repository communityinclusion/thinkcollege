<!-- <button id="tc-adv-filters" class="btn btn-primary" type="button"
        data-toggle="collapse" data-target="#collapseAdvancedFilters"
        aria-expanded="false" aria-controls="collapseAdvancedFilters">
  ADVANCED FILTERS
</button> -->
<?php
$adv_classes="collapse";
$params = drupal_get_query_parameters();
if (sizeof($params) != 0) {
  if (isset($params['f'])) {
    $tpsid = preg_grep('/(tc_tpsid)/', $params['f']);
    $pubpri = preg_grep('/(field_prog_public_or_privat)/', $params['f']);
    $school = preg_grep('/(tc_school_type:2-year community college or junior college)/', $params['f']);
    $length = preg_grep('/(field_prog_length_years:1 year)/', $params['f']);
    $coursetype = preg_grep('/(tc_credit_courses/', $params['f']);
    if (($tpsid && sizeof($tpsid) > 0) || ($pubpri && sizeof($pubpri) > 0) || ($school && sizeof($school) > 0) || ($length && sizeof($length) > 0) || ($coursetype && sizeof($coursetype) > 0)) {
      $adv_classes = "collapse in";
    }
  }
}
?>
<div class="" id="collapseAdvancedFilters">
    <?php
    // Type of Disability
    $whole_block = block_load('facetapi','xebpqfp0bvfa3ornoj5qoimterfrxoot');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);
    // public / private
    $whole_block = block_load('facetapi','vqmkt1ucjsq01vwf5numawcjhodoiedi');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);
    //Courses for credit
    $whole_block = block_load('facetapi','astiugfdmhurkhhjux4bljbzotqnpfrf');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);
    // type of school
    $whole_block = block_load('facetapi','3qrtavafumrt3dyzncd7af23zwtwlwr4');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);

    // length of programme
    $whole_block = block_load('facetapi','bnovxlwqhbzj2dcar0un5zrvskatr4ti');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);

    // TPSID?
    $whole_block = block_load('facetapi','8FCGdfKRz0Zf9K9kTQwGhnNZX2jV9g6H');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);
    ?>
</div>
