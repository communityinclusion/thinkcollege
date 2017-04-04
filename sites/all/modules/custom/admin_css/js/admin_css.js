(function($) {

 Drupal.behaviors.groupTopics = {
     attach: function (context, settings) {
       if(!$('#resource-node-form  #edit-field-resourc-topics-und').hasClass('clearfix')) $('#resource-node-form  #edit-field-resourc-topics-und').addClass('clearfix');
    //  $(document).find( $( '#resource-node-form .form-item-field-resourc-topics-und')).prepend('<div class="floatCol topicCol">');
$(document).find($( '#resource-node-form  #edit-field-resourc-topics-und > div').slice(0,15)).wrapAll( '<div class="floatCol firstCol" />');
$(document).find($( '#resource-node-form  #edit-field-resourc-topics-und > div').slice(1,16)).wrapAll( '<div class="floatCol secondCol" />');
$(document).find($( '#resource-node-form  #edit-field-resourc-topics-und > div').slice(2,17)).wrapAll( '<div class="floatCol thirdCol" />');
$(document).find($( '#resource-node-form  #edit-field-resourc-topics-und > div').slice(3,18)).wrapAll( '<div class="floatCol fourthCol" />');
$(document).find($( '#resource-node-form  #edit-field-resourc-topics-und > div').slice(4,19)).wrapAll( '<div class="floatCol fifthCol" />');
$(document).find($( '#resource-node-form  #edit-field-resourc-topics-und > div').slice(5,20)).wrapAll( '<div class="floatCol sixthCol" />');
$(document).find($( '#resource-node-form  #edit-field-resourc-topics-und > div').slice(6,21)).wrapAll( '<div class="floatCol seventhCol" />');
$(document).find($( '#resource-node-form  #edit-field-resourc-topics-und > div').slice(7,22)).wrapAll( '<div class="floatCol eigthCol" />');
$(document).find($( '#resource-node-form  #edit-field-resourc-topics-und > div').slice(8,23)).wrapAll( '<div class="floatCol ninthCol" />');
$(document).find($( '#resource-node-form  #edit-field-resourc-topics-und > div').slice(9,24)).wrapAll( '<div class="floatCol tenthCol" />');
$(document).find($('.floatCol')).each(function(i, elem) { if(!$(elem).attr('data-mh','topicGrp')) $(elem).attr('data-mh','topicGrp');
});
//$(document).find($( '#resource-node-form #edit-field-resourc-topics-und')).append( '</div>' );

	$.fn.matchHeight._apply('floatCol')

}
}


})(jQuery);
