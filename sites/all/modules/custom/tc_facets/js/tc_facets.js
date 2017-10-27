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
      // TODO: Figure out the spacing between the checkbox and the text issue.

      // Loop around all the subtopic trees.
      $('section.field_resourc_topics li.expanded ul.expanded').each(function( index ) {
        var selectAllHref = '';
        var querystring = '';
        var param = '';
        var tid = '';
        var f = [];
        var selectAllCheckbox = '';
        // Loop around each subtopics tree's subtopics
        $('li', this).each(function( index ) {
          // Set the default value for the Select all checkbox.
          selectAllCheckbox = 'fa-square-o';

          // Extract the querystring variables for each subtopic and add to variable.
          //  The .substring(17) bit removes "/resource-search?".
          querystring = parseQueryString(unescape($('a', this).attr('href').substring(17)));

          // Parse the querystring and build an array of unique field_resource_topics
          //   for each subtopic tree.
          for (const prop in querystring) {
            param = String(`${querystring[prop]}`);
            if (param.substring(0, 20) == 'field_resourc_topics') {
              tid = param.substring(21);
              if ((f.indexOf(tid) == -1) && parseInt(tid) > 0) {
                f.push(tid);
              }
            }
          }

          // Remove the "first" class since the "Select all" will now be first.
          $(this).removeClass('first');
        });

        // Build the querystring.
        // TODO: Incorporate querystring parameters from the user's current URL.
        //   Here's what needs to happen:
        //   1.  Parse the current URL's querystring variables, add new field_resourc_topics
        //       values to the f array. - maybe this is already happening?
        //   2.  Add add non-field_resourc_topics querystring variables to selectAllHref.
        //   3.  If the current querystring contains all the subtopics as the current f
        //       array, then set selectAllCheckbox = 'fa-check-square-o'; (this way, the
        //       Select all box will be checked if the user manually selected all the
        //       subtopics themselves.


        for (var i = 0, len = f.length; i < len; i++) {
          selectAllHref += escape('f[' + i + ']') + '=' + escape('field_resourc_topics:' + f[i]) + '&';
        }

        $(this).prepend('<li class="leaf first"><a href="/resource-search?' + selectAllHref + '" class="facetapi-inactive"><i class="fa ' + selectAllCheckbox + '"></i>&nbsp;Select all</a></li>');
      });
    }
  };

  // From https://www.joezimjs.com/javascript/3-ways-to-parse-a-query-string-in-a-url/
  var parseQueryString = function( queryString ) {
    var params = {}, queries, temp, i, l;
    // Split into key/value pairs
    queries = queryString.split("&");
    // Convert the array of strings into an object
    for ( i = 0, l = queries.length; i < l; i++ ) {
        temp = queries[i].split('=');
        params[temp[0]] = temp[1];
    }
    return params;
  };

  function getQueryVariable(variable) {
    var query = window.location.search.substring(1);
    var vars = query.split("&");
    for (var i=0;i<vars.length;i++) {
      var pair = vars[i].split("=");
      if(pair[0] == variable){return pair[1];}
    }
    return(false);
  }

})(jQuery, Drupal);
