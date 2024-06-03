<?php
  /* Only show info if there are no facets or search terms chosen */
  $x = drupal_get_query_parameters();
?>

<?php if ( !(array_key_exists('search_api_views_fulltext', $x))  && !(array_key_exists('f', $x))): ?>
  <div class="info-box">
    <p class="lead">Welcome to the Think College resource library!</p>
    <p> The library includes carefully selected resources on a wide range of topics related to postsecondary education for people with intellectual disability.
</p><p>
Use the filters on the left to narrow your search by topic, and click on Advanced Filters to refine by project, audience, media type, or publication type. If you are having trouble finding the resources you need, please contact us at <a href="mailto:thinkcollegeTA@umb.edu">thinkcollegeTA@umb.edu</a></p>
  </div>
<?php endif; ?>
