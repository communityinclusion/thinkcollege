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
   * Clamped-width.
   * Usage:
   *  <div data-clampedwidth=".myParent">This long content will force clamped width</div>
   *
   * Author: LV
   * Via: http://stackoverflow.com/questions/12536354/bootstrap-affix-plugin-with-fluid-layout
   */
  Drupal.behaviors.thinkcollegeAffixClampedWidth = {
    attach: function (context) {
      $('[data-clampedwidth]').each(function () {
        var elem = $(this);
        var parentPanel = elem.data('clampedwidth');
        var resizeFn = function () {
          var sideBarNavWidth = $(parentPanel).width() - parseInt(elem.css('paddingLeft')) - parseInt(elem.css('paddingRight')) - parseInt(elem.css('marginLeft')) - parseInt(elem.css('marginRight')) - parseInt(elem.css('borderLeftWidth')) - parseInt(elem.css('borderRightWidth'));
          elem.css('width', sideBarNavWidth);
        };

        resizeFn();
        $(window).resize(resizeFn);
      });
    }
  };

  /*
   * Set the width of menu blocks that use Bootstrap "affix".
   *
   * Via: http://stackoverflow.com/questions/18683303/bootstrap-3-0-affix-with-list-changes-width
   */
  Drupal.behaviors.thinkcollegeAffixFixWidth = {
    attach: function (context) {
      var $affixElement = $('section[data-spy="affix"]');
      $affixElement.width($affixElement.parent().width());
    }
  };

})(jQuery, Drupal);
