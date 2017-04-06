<h3 class="block-title">
  <div class="tc-facet-title">
    <span class="facet-title">Program Features</span>
  </div>
</h3>
<?php
  // Dual Enrollment/ Serves HS students.
  $delta = 'KA5QG3mUdAl4CWJKXaleJaI0xLV9mABI';
  print render(module_invoke('facetapi', 'block_view', $delta));

  // Financial Aid.
  $delta = 'GKkN44mzr0b0a0Uvm7LabhsT3ymIHPyc';
  print render(module_invoke('facetapi', 'block_view', $delta));

  // length of programme.
  $delta = 'QvTDdqhn4mIrmS8bZMVB8KCXEQ6bq3YG';
  print render(module_invoke('facetapi', 'block_view', $delta));

  // Only put Dual enrollment note on if dual enroll facet is shown.
  $x = module_invoke('facetapi', 'block_view', $delta);
  if ($x != null) {
  echo '<div class="aside">*Note that students who are dually enrolled might not be eligible for financial aid or housing</div>';
}


