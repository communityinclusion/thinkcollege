<?php
  /* Only show info if there are no facets or search terms chosen */
  $x = drupal_get_query_parameters();
?>

<?php if ( !(array_key_exists('search_api_views_fulltext', $x))  && !(array_key_exists('f', $x))): ?>
  <div class="info-box">
    <p class="lead">Welcome to the Think College resource library!</p>
    <p>Here you will find hundreds of carefully selected resources on a wide range of topics related to postsecondary education for people with intellectual disabilities. Topics include transition, applying to and paying for college, setting up and maintaining a college program, relevant legislation, competitive employment, living in the community, accessing benefits, and more.</p>

    <p>Use the filters on the left to narrow your search by topic, resource type, audience, or related Think College project. Think College has several currently funded projects and numerous past projects. Each project has a specific focus and may have written or produced associated products. The designation of a specific project on a resource means that it was either created from funds from that project or it was most relevant to that project. You can find more information on all <a href="/about/what-is-think-college">Think College projects here</a>.</p>
    <p>Here you will find hundreds of carefully selected resources on a wide range
    of topics related to postsecondary education for people with intellectual
    disabilities including transition, applying to and paying for college,
    setting up and maintaining a college program, relevant legislation,
    competitive employment, living in the community, accessing benefits, and more.</p>
    <p>Do you know of a resource that would be appropriate for our library? Let us know! Email <a href="mailto:Rebecca.Lazo@umb.edu">Rebecca.Lazo@umb.edu</a>.</p>
  </div>
<?php endif; ?>
