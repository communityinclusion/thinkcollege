(function($) {

 Drupal.behaviors.groupTopics = {
     attach: function (context, settings) {
       if(!$(' #edit-field-feature-in-section-und').hasClass('clearfix')) $('#edit-field-feature-in-section-und').addClass('clearfix');
    //  $(document).find( $( '#resource-node-form .form-item-field-resourc-topics-und')).prepend('<div class="floatCol topicCol">');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(0,10)).wrapAll( '<div class="floatCol firstCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(1,11)).wrapAll( '<div class="floatCol secondCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(2,12)).wrapAll( '<div class="floatCol thirdCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(3,13)).wrapAll( '<div class="floatCol fourthCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(4,14)).wrapAll( '<div class="floatCol fifthCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(5,15)).wrapAll( '<div class="floatCol sixthCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(6,16)).wrapAll( '<div class="floatCol seventhCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(7,17)).wrapAll( '<div class="floatCol eigthCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(8,18)).wrapAll( '<div class="floatCol ninthCol" />');
$(document).find($( '#edit-field-feature-in-section-und > div').slice(9,19)).wrapAll( '<div class="floatCol tenthCol" />');
$(document).find($('.floatCol')).each(function(i, elem) { if(!$(elem).attr('data-mh','topicGrp')) $(elem).attr('data-mh','topicGrp');
});
//$(document).find($( '#resource-node-form #edit-field-feature-in-section-und')).append( '</div>' );

	$.fn.matchHeight._apply('floatCol')

}
}


})(jQuery);
