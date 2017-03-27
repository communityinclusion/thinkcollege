<h3 class="block-title">
  <div class="tc-facet-title">
    <span class="facet-title">Program Features</span>
  </div>
</h3>
<?php
  // Dual Enrollment

//  $delta = facetapi_hash_delta(facetapi_build_delta('search_api@dev_solr_server', 'block', 'tc_dual_enroll'));
  $delta = 'KA5QG3mUdAl4CWJKXaleJaI0xLV9mABI';
  print render(module_invoke('facetapi', 'block_view', $delta));


//  $whole_block_de = block_load('facetapi','ka5qg3MuDaL4cwjkxALEjAi0Xlv9Mabi');
//  $renderable_array_de = _block_get_renderable_array(_block_render_blocks(array($whole_block_de)));
//  print drupal_render($renderable_array_de);

  // Financial Aid
//  $whole_block_fa = block_load('facetapi','GKkN44mzr0b0a0Uvm7LabhsT3ymIHPyc');
//  $renderable_array_fa = _block_get_renderable_array(_block_render_blocks(array($whole_block_fa)));
//  print drupal_render($renderable_array_fa);
  $delta = 'GKkN44mzr0b0a0Uvm7LabhsT3ymIHPyc';
  print render(module_invoke('facetapi', 'block_view', $delta));

  // length of programme
//  $whole_block_lp = block_load('facetapi','c4QKVeEbjlARazcQU7OOaYqzQb56k9TF');
//  $renderable_array_lp = _block_get_renderable_array(_block_render_blocks(array($whole_block_lp)));
//  print drupal_render($renderable_array_lp);
  $delta = 'c4QKVeEbjlARazcQU7OOaYqzQb56k9TF';
  print render(module_invoke('facetapi', 'block_view', $delta));

  $x = sizeof($renderable_array_de);
  // A facet with no values will have 3 children, with renderable data 4 children.
  if (sizeof($renderable_array_de) > 3) {
    echo '<div class="aside">*Note that students who are dually enrolled might not be eligible for financial aid or housing</div>';
  }


