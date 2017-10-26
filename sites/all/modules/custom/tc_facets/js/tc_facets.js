/**
 * @file
 * thinkcollege_boot.js
 *
 * Provides general enhancements to the thinkcollege_boot theme.
 */

var Drupal = Drupal || {};

(function($, Drupal){
  "use strict";

  /*
   * Smooth scrolling for Program Record ScrollSpy stuff.
   */
  Drupal.behaviors.thinkcollegeResourceSearchSelectAllSubtopics = {
    attach: function (context) {
      // TODO: Figure out how to "unselect" the "Select all".
      // TODO: Figure out the spacing between the checkbox and the text issue.

      // Loop around all the subtopic trees.
      $('section.field_resourc_topics li.expanded ul.expanded').each(function( index ) {
        var selectAllHref = '';
        // Loop around each subtopics tree's subtopics
        $('li', this).each(function( index ) {
          // Extract the querystring variables for each subtopic and add to variable.
          //  The .substring(17) bit removed "/resource-search?".
          selectAllHref += "&" + $('a', this).attr('href').substring(17);
        });

        // Add the new Select all link to the top of each subtopic list.
        $(this).prepend('<li class="leaf"><a href="/resource-search?' + selectAllHref + '" class="facetapi-active"><i class="fa fa-check-square-o"></i>&nbsp;Select all</a></li>');
      });
    }
  };

})(jQuery, Drupal);
