(function($) {

 Drupal.behaviors.groupTopics = {
   
     attach: function (context, settings) {
      if(!$('.form-item-field-resourc-topics-und p.warnSelect').length) { $('.form-item-field-resourc-topics-und label').after('<p class="warnSelect">Be careful selecting topics in the list below.  Use Cmd-click to insert on a Mac, or Ctrl-click on a Windows computer, if you think there may be previously selected topics. Otherwise, you may de-select topics that are already selected.</p>'); }
      if (!$('.form-item-field-resourc-authors-und p.warnSelect').length) {

        $('.form-item-field-resourc-authors-und label').after('<p class="warnSelect">The lastname, firstname terms have to have double quotes around them like so: "Lastname, Firstname" Additional terms should be separated by commas between the double quotes, like so: "Lastname1, Firstname1","Lastname2, Firstname2" and so on.</p>'); }

          if(!$('.form-item-field-resource-attachment-und-0-target-id p.warnSelect').length) { $('.form-item-field-resource-attachment-und-0-target-id label').after('<p class="warnSelect">Fill in the field below to create one (1) Resource that will be attached to this event, to which you can add files and links that will then show up at the bottom of this event.  If you want to add multiple files or links, add them to the single resource for this event.</p>'); }

       if(!$(' #edit-field-feature-in-section-und').hasClass('clearfix')) $('#edit-field-feature-in-section-und').addClass('clearfix');

    //  $(document).find( $( '#resource-node-form .form-item-field-resourc-topics-und')).prepend('<div class="floatCol topicCol">');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(0,8)).wrapAll( '<div class="floatCol firstCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(1,9)).wrapAll( '<div class="floatCol secondCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(2,10)).wrapAll( '<div class="floatCol thirdCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(3,11)).wrapAll( '<div class="floatCol fourthCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(4,12)).wrapAll( '<div class="floatCol fifthCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(5,13)).wrapAll( '<div class="floatCol sixthCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(6,14)).wrapAll( '<div class="floatCol seventhCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(7,15)).wrapAll( '<div class="floatCol eigthCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(8,16)).wrapAll( '<div class="floatCol ninthCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(9,17)).wrapAll( '<div class="floatCol tenthCol" />');
$(document).find($('.floatCol')).each(function(i, elem) { if(!$(elem).attr('data-mh','topicGrp')) $(elem).attr('data-mh','topicGrp');
});
//$(document).find($( '#resource-node-form #edit-field-feature-in-section-und')).append( '</div>' );

	$.fn.matchHeight._apply('floatCol')

}
}


})(jQuery);
