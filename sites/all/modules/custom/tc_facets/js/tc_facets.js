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
   * Resource Search page "Select all" subtopics stuff.
   */
  Drupal.behaviors.thinkcollegeResourceSearchSelectAllSubtopics = {
    attach: function (context) {
      // Grab and parse the current field_resourc_topics query string variables.
      var i = 0;
      var param_string = '';
      var param_array = [];
      var queryStringTopics = [];
      while (getQueryVariable(escape('f[' + i + ']')) != false) {
        //console.log(unescape(getQueryVariable(escape('f[' + i + ']'))));
        param_string = unescape(getQueryVariable(escape('f[' + i + ']')));
        param_array = param_string.split(":");
        if (param_array[0] == 'field_resourc_topics') {
          queryStringTopics.push(parseInt(param_array[1]));
        }
        i++;
      }

      // Grab and store the non-field_resourc_topics query string values.
      var queryString = window.location.search;
      var queryStringArrayRaw = parseQueryString(queryString.substring(1));
      var queryStringSaved = [];
      for (var key in queryStringArrayRaw) {
        if (queryStringArrayRaw.hasOwnProperty(key)) {
          if (unescape(queryStringArrayRaw[key]).indexOf("field_resourc_topic") < 0) {
            queryStringSaved[unescape(key)] = unescape(queryStringArrayRaw[key]);
          }
        }
      }

      // Loop around all the subtopic trees.
      $('section.tc-resource-select-all li.expanded ul.expanded').each(function( index ) {
        var selectAllHref = '';
        var topicHrefVars = '';
        var tid = '';
        var subTopics = [];
        var param = '';
        var selectAllCheckbox = '';
        var selectAllTopics = [];
        selectAllTopics = queryStringTopics.slice(0);  // This is the proper way to copy an array!
        // Loop around each subtopics tree's subtopics
        $('li', this).each(function( index ) {
          // Set the default value for the Select all checkbox.
          selectAllCheckbox = 'fa-square-o';
          subTopics.push($('a', this).data("tctopicid"));

          // Remove the "first" class since the "Select all" will now be first.
          $(this).removeClass('first');
        });

        // At this point, the "subTopics" array contains a list of all the subtopics per topic
        //   for each "Select all" link.
        //   AND
        //   the "queryStringTopics" array contains a list of all subtopics currently
        //   selected.
        //   AND
        //   the "selectAllTopics" array will contain the subtopics for the current top-level
        //   topic.

        // Look to see if the elements of subTopics are all present in queryStringTopics.
        //   If so, that means the "Select all" box should be checked
        //   AND
        //   the "Select all" box should uncheck all subtopics if clicked.
        var found = true;
        var numberSelected = 0;
        var subTopicsLen = subTopics.length;
        for (var i = 0, subTopicsLen; i < subTopicsLen; i++) {
          if ($.inArray(parseInt(subTopics[i]), queryStringTopics) > -1) {
            numberSelected++;
          }
        }

        if (numberSelected == subTopicsLen) {  // All the subtopics are selected for the current topic, do unselect stuff.
          // Set the proper checkbox class.
          selectAllCheckbox = 'fa-check-square-o';

          // Remove current subtopics from selectAllTopics.
          var j;
          for (var i = 0, subTopicsLen; i < subTopicsLen; i++) {
            // For some crazy reason, each subTopic could be listed multiple times in
            //   the queryStringTopics. Be sure to remove them all with a do-while.
            do {
              j = $.inArray(parseInt(subTopics[i]), selectAllTopics);
              if (j > -1) {
                selectAllTopics.splice(j, 1);
              }
            } while (j > -1);
          }
        }
        else {
          // Add subTopics to queryStringTopics for the "Select all" link.
          for (var i = 0, subTopicsLen; i < subTopicsLen; i++) {
            selectAllTopics.push(subTopics[i]);
          }
        }

        // Build the new query string for the "Select all" href.
        for (var i = 0, len = selectAllTopics.length; i < len; i++) {
          selectAllHref += escape('f[' + i + ']') + '=' + escape('field_resourc_topics:' + selectAllTopics[i]) + '&';
        }

        // Add all the non-field_resourc_topics query string parameters to the SelectAll hrefs.
        for (var key in queryStringSaved) {
          if (queryStringSaved.hasOwnProperty(key)) {
            selectAllHref += escape(key) + '=' + escape(queryStringSaved[key]) + '&';
          }
        }

        $(this).prepend('<li class="leaf first"><a href="/resource-search?' + selectAllHref + '" class="facetapi-inactive"><i class="fa ' + selectAllCheckbox + '"></i>&nbsp;Select all</a></li>');
      });
    }
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

  // Via https://www.joezimjs.com/javascript/3-ways-to-parse-a-query-string-in-a-url/
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

})(jQuery, Drupal);
