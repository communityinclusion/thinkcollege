<?php
  /* Only show info if there are no facets or search terms chosen */
  $x = drupal_get_query_parameters();
?>

<?php if ( !(array_key_exists('search_api_views_fulltext', $x))  && !(array_key_exists('f', $x))): ?>
  <div class="info-box">
    <p class="lead">Welcome to the Think College resource library!</p>
    <p>Here you will find hundreds of carefully selected resources on a wide range
    of topics related to postsecondary education for people with intellectual
    disabilities including transition, applying to and paying for college,
    setting up and maintaining a college program, relevant legislation,
    competitive employment, living in the community, accessing benefits, and more.</p>
    <p>Do you know of a resource that would be appropriate for our library?
    Let us know! Email <a href="mailto:Rebecca.Lazo@umb.edu">Rebecca.Lazo@umb.edu</a>.
    </p>
  </div>
<?php endif; ?>