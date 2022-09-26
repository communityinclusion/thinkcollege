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
  Drupal.behaviors.thinkcollegeHideLoadSlideshow = {
    attach: function (context) {
      $(window).load(function() {
  // When the page has loaded
  $('#views_slideshow_cycle_main_slideshow_test-block').fadeIn(1700);
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

  /*
   * Hide Program Record ScrollSpy menu items if section is empty.
   */
  Drupal.behaviors.thinkcollegeHideProgramRecordScrollSpyMenuItem = {
    attach: function (context) {
      if ($('.node-program-record-full').length) {
        // Hide all ScrollSpy menu items.
        $('#block-menu-menu-program-record-scrollspy ul.menu li a').hide();

        // Loop through all the sections and show ScrollSpy menu items for each one.
        $('.node-program-record-full .program-box').each(function( index ) {
          $('#block-menu-menu-program-record-scrollspy ul.menu li a[href=#' + $(this).attr('id') + ']').show();
        });
      }
    }
  };

  /*
   * Smooth scrolling for Program Record ScrollSpy stuff.
   */
  Drupal.behaviors.thinkcollegeHideProgramRecordScrollSpySmooth = {
    attach: function (context) {
      $("#block-menu-menu-program-record-scrollspy ul.menu li a[href^='#']").on('click', function(e) {

        // prevent default anchor click behavior
        e.preventDefault();

        // store hash
        var hash = this.hash;

        // animate
        $('html, body').animate({
          scrollTop: $(hash).offset().top - 50
        }, 800, function(){
          // when done, add hash to url
          // (default click behaviour)
          window.location.hash = hash;
        });

      });
    }
  };

  Drupal.behaviors.slideshowResponsive = {
      attach: function (context) {

        $(window).resize(function() {
               $('.views-slideshow-cycle-main-frame').each(function(){
                   var heightImgNow = '';

                   $(this).find('.views-slideshow-cycle-main-frame-row').each(function(){
                           var thisDisplay = $(this).prop("style").display;
                           var thisImgHeight = $(this).find('img').height();
                           if(thisDisplay == 'block') {
                               heightImgNow = thisImgHeight;
                           }
                   });

                   if(heightImgNow != '') {
                       // set div height    = now image height.
                       $(this).height(heightImgNow);
                   }
               });
           });

    }
  }

  Drupal.behaviors.tcLearnVidWidth = {
      attach: function (context) {
    if ($('.field-name-field-tc-learn-sidebar').length) {
      $('.field-name-field-tc-learn-sidebar iframe').each(function(i, elem) { $(elem).hide();
         $(elem).closest('div.field-item').hide(); });
         $('.field-name-field-tc-learn-sidebar audio').each(function(i, elem) { $(elem).hide();
            $(elem).closest('div.field-item').hide(); });
      window.addEventListener('load', function() { resizeVids() });
      window.addEventListener('resize', function() { resizeVids() });

 }
 }
  };
function resizeVids() {
  $('.field-name-field-tc-learn-sidebar iframe').each(function(i, elem) { $(elem).hide();
     $(elem).closest('div.field-item').hide();
      var sidebarWidinit = $(elem).closest('div.field-name-field-tc-learn-sidebar').width();
    var  sidebarWid = (sidebarWidinit - 10);
  var sidebarHeight = (sidebarWid * .56);
  $(elem).width(sidebarWid);
  $(elem).height(sidebarHeight);
  $(elem).closest('div.field-item').show();
  $(elem).show();
  });

  $('.field-name-field-tc-learn-sidebar audio').each(function(i, elem) { $(elem).hide();
     $(elem).closest('div.field-item').hide();
      var sidebarWidinit = $(elem).closest('div.field-name-field-tc-learn-sidebar').width();
    var  sidebarWid = (sidebarWidinit - 10);
  $(elem).width(sidebarWid);
  $(elem).closest('div.field-item').show();
  $(elem).show();
  });

}


})(jQuery, Drupal);
