(function($) {

  /**
   * Individual employment - if gross wages / hours < $10, then show minimum wage
   * stuff.
   */

 Drupal.behaviors.startScan = {
     attach: function (context, settings) {
      if(!$('.saveLeave').length) $('#program-record-node-form').before('<p><strong>Be sure to <a href=\"#\" class=\"saveLeave btn btn-success form-submit\"><span class=\"icon glyphicon glyphicon-ok\" aria-hidden=\"true\"></span> SAVE</a> this form after going through the tabs and entering your information!</strong></p>');
        if(!$('#scholLinks').length)$('#edit-field-prog-scholarship-link').before('<div id="scholLinks"><p>Provide web links to scholarships available to students in your program below</p></div>');
$('ul.vertical-tabs-list li a').addClass('inComplete');
   $( document ).one('ready',scanFieldsets);

   $('th').text('Order').hide();


$('fieldset div.form-type-textarea .form-textarea').each(function(i, elem) {
  if($(elem).val() && !$(elem).closest('fieldset').hasClass('showQues')) { $(elem).closest('fieldset').addClass('showQues'); }
});

 if(!$('#saveWarn').length ) $('#edit-submit').after('<p id="saveWarn">&nbsp</p>');
/*$(".vertical-tabs-list").attr('id','save_target');
$(window).scroll(function(){
    $("#edit-actions").css("top", Math.max(20, 510 - $(this).scrollTop()));
});
$(".vertical-tabs-list").attr('id','save_target');
 $(window).scroll(function(){
    $(".admin-menu #edit-actions").css("top", Math.max(20, 1200 - $(this).scrollTop()));
}); */
  $('h1.page-header em').hide();

$('a.saveLeave').bind("click tap", saveAndLeave);


 }

 }

 Drupal.behaviors.surveynodeformStripCommas  = {
   attach: function (context, settings) {
 $('#program-record-node-form').submit(removeCommas);
   }
 }

   Drupal.behaviors.scanVertTab = {
       attach: function (context, settings) {
         $('.nav-tabs > li').bind("mouseenter touchstart",scanFieldsets);
$( document ).one('ready',scanFieldsets);
}
}
Drupal.behaviors.scanOpenTab = {
    attach: function (context, settings) {
      $('a.openTab').bind("mouseenter touchstart",scanFieldsets);
$( document ).one('ready',scanFieldsets);
}
}
Drupal.behaviors.checkSaved = {
    attach: function (context, settings) {
var unsaved = false;

$(":input").change(function(){
    unsaved = true;
    console.log(unsaved);
});
$("select").change(function(){
    unsaved = true;
});
$('#edit-submit').on("click focus",function(){
    unsaved = false;
});
$(window).on('beforeunload', function(e){
if(unsaved) {
    e.preventDefault();
    return "You have unsaved changes on this page. Do you want to leave this page and discard your changes or stay on this page?";
  }
});
}
}




 Drupal.behaviors.alternateTab = {
     attach: function (context, settings) {
       $(document).on('click', 'a.openTab', function (event) {


        setTimeout(function(){
          linkToTab();
        }, 1500);


       });
     }
   }


  Drupal.behaviors.programnodeformDecEnforceNumeric = {
    attach: function (context, settings) {

    $('.field-type-number-decimal input').keydown(isNumber);
  }

} ;

    Drupal.behaviors.programnodeformIntEnforceNumeric = {
      attach: function (context, settings) {

      $('.field-type-number-integer input').keydown(isNumber);
    }

} ;

Drupal.behaviors.programnodeformTextCheck = {
  attach: function (context, settings) {
$('.form-type-textfield input').keydown(checkText);
}
};

Drupal.behaviors.programnodeformremoveIntWarn = {
  attach: function (context, settings) {

  $('.field-type-number-integer input').bind("blur",removeNumWarn);

  }

} ;

Drupal.behaviors.programnodeformremoveDecWarn = {
  attach: function (context, settings) {

  $('.field-type-number-decimal input').bind("blur",removeNumWarn);

  }

} ;

Drupal.behaviors.programnodeformMakeActive = {

  attach: function (context, settings) {



  $('.vertical-tabs-panes > fieldset').bind("mouseenter touchstart",makeActiveTab);


  }

} ;

Drupal.behaviors.programnodeformNotReq = {

  attach: function (context, settings) {
$('#edit-field-address-und-0-premise').addClass('notReq');
$('#edit-field-prog-addl-scholarships-und-0-value').addClass('notReq');
$('#edit-field-prog-scholarship-link-und-0-title').addClass('notReq');
$('#edit-field-prog-scholarship-link-und-0-url').addClass('notReq');
$('#edit-field-prog-scholarship-link-und-1-title').addClass('notReq');
$('#edit-field-prog-scholarship-link-und-1-url').addClass('notReq');
$('#edit-field-prog-scholarship-link-und-2-title').addClass('notReq');
$('#edit-field-prog-scholarship-link-und-2-url').addClass('notReq');
$('#edit-field-prog-program-website-und-0-url').addClass('notReq');
$('#edit-field-prog-summer-info-link-und-0-title').addClass('notReq');
$('#edit-field-prog-summer-info-link-und-0-url').addClass('notReq');
$('#edit-field-prog-admiss-link-und-0-url').addClass('notReq');
$('#edit-field-prog-more-course-detail-und-0-value').addClass('notReq');
$('#edit-field-prog-vocational-credential-und-0-value').addClass('notReq');
$('#edit-field-prog-when-will-progr-start-und').addClass('notReq');
$('#edit-field-prog-program-email-und-0-email').addClass('notReq');
$('#edit-field-prog-other-credent-und-0-value').addClass('notReq');
$('#edit-field-prog-school-dist-und-0-value').addClass('notReq');
$('#edit-field-prog-school-dist-contact-und-0-value').addClass('notReq');
$('#edit-field-prog-schl-dist-email-und-0-email').addClass('notReq');
}
};

Drupal.behaviors.programnodeformCheckEmptyFields = {

  attach: function (context, settings) {


  $('ul.vertical-tabs-list li a').bind("click",emptyFieldWarn);



  }

} ;






function removeCommas() {
if(!$('#edit-title').val() || $('#edit-title').val() == '') $('#edit-title').val("Program name here") ;
  $('.field-type-number-decimal input').each(function(i, el) {
    if($(el).val() != "" ) {
        $(el).val($(el).val().replace(/,/g, ''));
    }
  });



    $('.field-type-number-integer input').each(function(i, el) {
      if($(el).val() != "" ) {
          $(el).val($(el).val().replace(/,/g, ''));
      }
    });

}

function saveAndLeave(event) {
    // Remember the link href
    var href = this.href;

    // Don't follow the link
    event.preventDefault();
      $('#edit-submit').click();

}


function isNumber(evt) {

if (evt.which != 9 && evt.which != 188 && evt.which != 37 && evt.which != 39 && evt.which != 190 && evt.which != 17 && evt.which != 86 && evt.which != 91 && evt.which != 67) {
          var theEvent = evt || window.event;
          var key = theEvent.keyCode || theEvent.which;
          key = String.fromCharCode(key);
          if (key.length == 0) return;
          var regex = /^[0-9\b]+$/;

          if (!regex.test(key)) {
            if(!(theEvent.keyCode >= 96 && theEvent.keyCode <= 105)) {
            if (!$(this).prev('p').hasClass('reqNumwarn')) {
            $(this).before('<p class="reqNumwarn">Numbers, decimals, and commas only in this field.</p>') }
              theEvent.returnValue = false;
              if (theEvent.preventDefault) theEvent.preventDefault();

            }
          } else { if($(this).hasClass('redLine'))  $(this).removeClass('redLine'); }
        }
}



function checkText(evt) {
  var theEvent = evt || window.event;
  var key = theEvent.keyCode || theEvent.which;
  key = String.fromCharCode(key);
  if (key.length == 0) return;
          var theEvent = evt || window.event;
          var key = theEvent.keyCode || theEvent.which;
          key = String.fromCharCode(key);

      if($(this).hasClass('redLine'))  $(this).removeClass('redLine');


}


function removeNumWarn() {
if ($(this).prev('p').hasClass('reqNumwarn')) {
var warnP = $(this).prev('p');
  setTimeout(function(){
    $(warnP).remove();
  }, 500);
}
return;

}

function popNumSpans(spanclass,numvar) {
$('.' + spanclass).each(function(i, elem) { if(numvar) {$(elem).html(numvar); } else { $(elem).html(''); } });
}

function linkToTab(evt) {
linkURL = $(location).attr('href');
 hashLink = window.location.hash;

 // alert(linkURL);
$('.vertical-tabs-panes fieldset').each(function(i, el) {



if($(el).hasClass('active')) { $(el).removeClass('active');
    $(el).find('> div').removeClass('in');
 } });
  $('.vertical-tabs-list li a').each(function(i, elm) {
$(elm).attr( 'aria-expanded', 'false').parent('li').removeClass('active selected');
  });


$('.vertical-tabs-panes fieldset' + hashLink).addClass('active').find('> div').addClass('in');
$('a[href="' + hashLink + '"]').attr( 'aria-expanded', 'true').parent('li').addClass('active selected');



}

function commifyNum(rawnum){
    var x = rawnum;
  rawnum = x.toString().replace(/,/g, "").replace(/\B(?=(\d{3})+(?!\d))/g, ",");
  return rawnum;
}

function processNumVars(idstring, typeint) {

 returnvar = $('#' + idstring).val() ? (typeint == false ? commifyNum(parseInt($('#'+ idstring).val().replace(/,/g, ''),10)) : parseInt($('#'+ idstring).val().replace(/,/g, ''),10)) : '';
 return returnvar;
}



function scanFieldsets () {

//  alert(Drupal.settings.programnodeform);

  var origID = '';
  $('.vertical-tabs-panes > fieldset').each(function(i, el) {

if ($(el).hasClass('active') ) {origID = $(el).attr('id');}

      else {  $(el).addClass('active'); }
 makeActiveTab.call($(el));
 $(el).removeClass('active');
 $(el).removeClass('activeTwo');
  });
$('.vertical-tabs-list li a').each(function(i, elem) {


  $(elem).removeClass('activeTwo');

});

$('#' + origID).addClass('active');
}

function makeActiveTab() {
if ($(this).hasClass('active') && !$(this).hasClass('activeTwo'))  { $(this).addClass('activeTwo')}
var fieldID = $(this).attr('id');
var currentTab = $('a[href="#' + fieldID + '"]');
if (!currentTab.hasClass('activeTwo')) currentTab.addClass('activeTwo');
var countempty = 0;
if(!$('#edit-field-save-and-return').hasClass('fieldReq'))$('#edit-field-save-and-return').addClass('fieldReq');
/* $('span.reqP').each(function(i, el) {

      $(el).remove();

}); */


$('div.field-widget-options-buttons:visible').each(function(i, el) {

      if(!$(el).hasClass('fieldReq') && !$(el).parents('.checkGroup').length > 0) { $(el).addClass('fieldReq');}

});


$('div.checkGroup:visible').each(function(i, el) {
     if (!$('input:checkbox:checked',this).length > 0)  { if(!$(this).hasClass('redLine')) $(this).addClass('redLine'); } else { if ($(this).hasClass('redLine')) { $(this).removeClass('redLine'); }
   }

});


/* $('.activeTwo .redLine').each(function(i, el) {

      $(el).after('<span class="reqP"> * </span>');

}); */

$('div.vertical-tabs-panes > fieldset.active div > input.form-text').each(function(i, elem) {
if( $(elem).is(":visible") && !$(elem).parent().hasClass('visDiv')) {
$(elem).parent().addClass('visDiv');
 } else { if ( !$(elem).is(":visible") && $(elem).parent().hasClass('visDiv')) {
 $(elem).parent().removeClass('visDiv');
 }

 }


});

$('div.vertical-tabs-panes > fieldset.active div > textarea').each(function(i, elem) {
if( $(elem).is(":visible") && !$(elem).parent().hasClass('visDiv')) {
$(elem).parent().addClass('visDiv');
 } else { if ( !$(elem).is(":visible") && $(elem).parent().hasClass('visDiv')) {
 $(elem).parent().removeClass('visDiv');
 }

 }


});

$('div.vertical-tabs-panes > fieldset.active div > select').each(function(i, elem) {
if( $(elem).is(":visible") && !$(elem).parent().hasClass('visDiv')) {
$(elem).parent().addClass('visDiv');
 } else { if ( !$(elem).is(":visible") && $(elem).parent().hasClass('visDiv')) {
 $(elem).parent().removeClass('visDiv');
 }

 }


});

$('div.vertical-tabs-panes > fieldset.activeTwo .fieldReq').each(function(i, elem) {
 groupId = $(elem).attr('id');



 if (!$('#' + groupId + ' input').is(":checked")) { countempty += 1;
   if (!$('#' + groupId).hasClass('redLine')){ $('#' + groupId).addClass('redLine'); }

} else { if ($('#' + groupId).hasClass('redLine')){ $('#' + groupId).removeClass('redLine'); }  }



});



$('div.vertical-tabs-panes > fieldset.activeTwo .visDiv > input.form-text').each(function(i, elem) {
if(  !$(elem).val() && !$(elem).hasClass('notReq')) { countempty += 1;

if (!$(elem).hasClass('redLine')){ $(elem).addClass('redLine');}
 } else { if ($(elem).hasClass('redLine')){ $(elem).removeClass('redLine');} }





});
$('div.vertical-tabs-panes > fieldset.activeTwo .visDiv > textarea').each(function(i, elem) {
if(  !$(elem).val() && !$(elem).hasClass('notReq')) { countempty += 1;

if (!$(elem).hasClass('redLine')){ $(elem).addClass('redLine');}
 } else { if ($(elem).hasClass('redLine')){ $(elem).removeClass('redLine');} }





});
$('div.vertical-tabs-panes > fieldset.activeTwo .visDiv > select').each(function(i, elem) {
if(  !$(elem).val() && !$(elem).hasClass('notReq')) { countempty += 1;

if (!$(elem).hasClass('redLine')){ $(elem).addClass('redLine');}
 }
else if ($(elem).prop('id') == 'edit-field-fac-non-work-yn-partic-und' && $(elem).val() == '-1') {  countempty += 1;

if (!$(elem).hasClass('redLine')){ $(elem).addClass('redLine');}
 }
 else { if ($(elem).hasClass('redLine')){ $(elem).removeClass('redLine');} }





});

$('div.vertical-tabs-panes > fieldset.activeTwo .visDiv > select').each(function(i, elem) {
if(  (!$(elem).val() || $(elem).val() == '_none')  && !$(elem).hasClass('notReq')) { countempty += 1;

if (!$(elem).hasClass('redLine')){ $(elem).addClass('redLine');}
 } else { if ($(elem).hasClass('redLine')){ $(elem).removeClass('redLine');} }





});
$('div.vertical-tabs-panes > fieldset.activeTwo .visDiv > textarea').each(function(i, elem) {
if(  (!$(elem).val())  && !$(elem).hasClass('notReq')) { countempty += 1;

if (!$(elem).hasClass('redLine')){ $(elem).addClass('redLine');}
 } else { if ($(elem).hasClass('redLine')){ $(elem).removeClass('redLine');} }





});

if (countempty < 1) { if (!$(currentTab).hasClass('tabFilled')) {$(currentTab).addClass('tabFilled');}  if ($(currentTab).hasClass('inComplete')) {$(currentTab).removeClass('inComplete');}} else { if ($(currentTab).hasClass('tabFilled')) {$(currentTab).removeClass('tabFilled');} if (!$(currentTab).hasClass('inComplete')) {$(currentTab).addClass('inComplete');} }
$('.field-type-number-decimal input').each(function(i, el) {
  if($(el).val().length ) {
   commafield = $(el).val().replace(/(\d)(?=(\d\d\d)+(?!\d))/g, "$1,");

$(el).val(commafield);

  }
});


$('.field-type-number-integer input').each(function(i, el) {
  if($(el).val().length ) {
   commafield = $(el).val().replace(/(\d)(?=(\d\d\d)+(?!\d))/g, "$1,");

$(el).val(commafield);

  }
});

}

function emptyFieldWarn() {
 var warnText = "";

var centerPopup = $('div.vertical-tabs-panes');

if (!$(this).hasClass('activeTwo')) {
  var lastlink = $('.vertical-tabs-list li a.activeTwo').attr("href");
  var heading =$('.vertical-tabs-list li a.activeTwo').text();
  var queryString =  $(location).attr('pathname');

  $('div.vertical-tabs-panes > fieldset.activeTwo .fieldReq').each(function(i, elem) {
   groupId = $(elem).attr('id');
   var radioLabel = $('label[for="' + groupId + '"]').text().length ? $('label[for="' + groupId + '"]').text() : $('label[for="' + groupId + '-und"]').text();


   if (!$('#' + groupId + ' input').is(":checked")) { warnText += "<li>" + radioLabel + "</li>";
  // $('#' + groupId).addClass('redLine');

  }



  });

$('div.vertical-tabs-panes > fieldset.activeTwo .visDiv > input.form-text').each(function(i, elem) {
if(  !$(elem).val() && !$(elem).hasClass('notReq')) {
var label = "<li>" + $('label[for="'+ $(elem).attr('id')+'"]').text() + "</li>";
// $(elem).addClass('redLine');
 warnText += label;}

});


 var tabfilled = false;
$('#idd_popup #popupText').empty() ;
if (warnText != "") {

   $('#idd_popup #popupText').append("<p>The following fields are required in the section <strong>" + heading + "</span></strong></p><ul>" + warnText + "</ul>");
  /* $('#idd_popup').popup({
                 tooltipanchor: centerPopup,
              autoopen: true,
              horizontal: 'center',
              vertical: 'center',
              type: 'overlay',
              closeelement: '.basic_close',
            transition: 'all 0.9s'
          }); */

} else { tabfilled = true;    if(tabfilled) { if (!$(this).hasClass('tabFilled'))$('.vertical-tabs-list li a.activeTwo').addClass('tabFilled'); if ($(this).hasClass('inComplete'))$('.vertical-tabs-list li a.activeTwo').removeClass('inComplete'); }}
$('.vertical-tabs-list li a').each(function(i, el) {

      $(el).removeClass('activeTwo');


});


$('.vertical-tabs-panes > fieldset').each(function(i, el) {

      $(el).removeClass('activeTwo');


});

/*setTimeout(function(){
  $('#idd_popup').popup('hide');
}, 5000); */

 }

}



})(jQuery);
