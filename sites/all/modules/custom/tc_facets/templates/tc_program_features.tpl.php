<h3 class="block-title">
  <div class="tc-facet-title">
    <span class="facet-title">Program Features</span>
  </div>
</h3>
<?php
  $module = 'facetapi';
  $hook = 'block_view';

  // Dual Enrollment/ Serves HS students.
  $delta = 'KA5QG3mUdAl4CWJKXaleJaI0xLV9mABI';
  $x = module_invoke($module, $hook, $delta);
  print render($x);

  // Financial Aid.
  $delta = 'GKkN44mzr0b0a0Uvm7LabhsT3ymIHPyc';
  $y = module_invoke($module, $hook, $delta);
  print render($y);

  // Housing
  $delta = 'QvTDdqhn4mIrmS8bZMVB8KCXEQ6bq3YG';
  $z = module_invoke($module, $hook, $delta);
  print render($z);

  // Particular school district
  $delta = 'Msm1jZU9r6FFAzfFekVp0Syud67glduW';
  $a = module_invoke($module, $hook, $delta);
  print render($a);

  // Only put Dual enrollment note on if dual enroll facet is shown.
  if ($x != null) {
  echo '<div class="aside">*Note that students who are dually enrolled might not be eligible for financial aid or housing</div>';
}


