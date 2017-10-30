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
      // Grab and parse the current field_resourc_topics querystring variables.
      var i = 0;
      var param_string = '';
      var param_array = [];
      var querystringtopics = [];
      while (getQueryVariable(escape('f[' + i + ']')) != false) {
        //console.log(unescape(getQueryVariable(escape('f[' + i + ']'))));
        param_string = unescape(getQueryVariable(escape('f[' + i + ']')));
        param_array = param_string.split(":");
        if (param_array[0] == 'field_resourc_topics') {
          querystringtopics.push(parseInt(param_array[1]));
        }
        i++;
      }

      // Loop around all the subtopic trees.
      $('section.field_resourc_topics li.expanded ul.expanded').each(function( index ) {
        var selectAllHref = '';
        var topicquerystring = '';
        var tid = '';
        var f = [];
        var param = '';
        var selectAllCheckbox = '';
        // Loop around each subtopics tree's subtopics
        $('li', this).each(function( index ) {
          // Set the default value for the Select all checkbox.
          selectAllCheckbox = 'fa-square-o';

          // Extract the querystring variables for each subtopic and add to variable.
          //  The .substring(17) bit removes "/resource-search?".
          topicquerystring = parseQueryString(unescape($('a', this).attr('href').substring(17)));

          // Parse the querystring and build an array of unique field_resource_topics
          //   for each subtopic tree.
          // TO DO: THIS IS WRONG - WE ONLY WANT TO PUSH THE CURRENT TID - NOT ALL OF THEM.
          //        IT SHOULD BE THE LAST ONE OF THE field_resourc_topics.
          console.log(topicquerystring);
          for (const prop in topicquerystring) {
            param = String(`${topicquerystring[prop]}`);
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

        // At this point, the "f" array contains a list of all the subtopics per topic
        //   for each "Select all" link.

        // Build the querystring.
        // TODO: Incorporate querystring parameters from the user's current URL.
        //   Here's what needs to happen:
        //   1.  Parse the current URL's querystring variables, add new field_resourc_topics
        //       values to the f array. - maybe this is already happening? It seems to be,
        //       but I'm not sure how...
        //   2.  Add non-field_resourc_topics querystring variables to selectAllHref.
        //   3.  If the current querystring contains all the subtopics as the current f
        //       array, then set selectAllCheckbox = 'fa-check-square-o'; (this way, the
        //       Select all box will be checked if the user manually selected all the
        //       subtopics themselves.
        //console.log(querystringtopics);
        //console.log(f);

        // Look to see if the elements of f are all present in quertstringtopics.
        //   If so, that means the "Select all" box should be checked AND
        //   the "Select all" box should uncheck all subtopics if clicked.
        var found = true;
        var flen = f.length;
        for (var i = 0, flen; i < flen; i++) {
          if ($.inArray(parseInt(f[i]), querystringtopics) > -1) {
            found = true;
          } else {
            found = false;
          }
        }
        if (found == true) {
          selectAllCheckbox = 'fa-check-square-o';
          // Remove current subtopics from f (for unchecking all subtopics).
          var j = 0;
          for (var i = flen; i > -1; i--) {
            if ($.inArray(parseInt(f[i]), querystringtopics) > -1) {
              f.splice(i, 1);
            }
          }
        }

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
