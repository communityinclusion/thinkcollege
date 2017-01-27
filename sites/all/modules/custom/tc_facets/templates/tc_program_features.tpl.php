<h2 class="block-title">
  <div class="tc-facet-title">
    <span class="facet-title">Program Features</span>
  </div>
</h2>
<?php
  // Dual Enrollment
  $whole_block_de = block_load('facetapi','KA5QG3mUdAl4CWJKXaleJaI0xLV9mABI');
  $renderable_array_de = _block_get_renderable_array(_block_render_blocks(array($whole_block_de)));
  print drupal_render($renderable_array_de);

  // Financial Aid
  $whole_block_fa = block_load('facetapi','GKkN44mzr0b0a0Uvm7LabhsT3ymIHPyc');
  $renderable_array_fa = _block_get_renderable_array(_block_render_blocks(array($whole_block_fa)));
  print drupal_render($renderable_array_fa);

  // length of programme
  $whole_block_lp = block_load('facetapi','QvTDdqhn4mIrmS8bZMVB8KCXEQ6bq3YG');
  $renderable_array_lp = _block_get_renderable_array(_block_render_blocks(array($whole_block_lp)));
  print drupal_render($renderable_array_lp);

  $x = sizeof($renderable_array_de);
  // A facet with no values will have 3 children, with renderable data 4 children.
  if (sizeof($renderable_array_de) > 3) {
    echo '<div class="aside">*Note that students who are dually enrolled might not be eligible for financial aid or housing</div>';
  }


