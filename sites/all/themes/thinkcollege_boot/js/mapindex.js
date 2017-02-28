'use strict';

//We get our data from dynamically generated JSON in a <script> tag on the page
var data = {
  'GA' : {
    'name' : 'Georgia',
    //'description' : 'georgia lorem ipsum dolor sit amet',
	//'pdf' : {
		//'link' : 'http://georgiapdflink.info',
		//'title' : 'GEORGIA PDF TITLE'
//	},
	//'pdf-2' : {
	//	'link' : 'http://georgiapdflink2.info',
	//	'title' : 'GEORGIA PDF-2 TITLE'
//	}
  },

  'FL' : {
    'name' : 'Florida',
  },

  'AL' : {
    'name' : 'Alabama',
  },

  'SC' : {
    'name' : 'South Carolina',
  },

  'NC' : {
    'name' : 'North Carolina',
  },

  'MS' : {
    'name' : 'Mississippi',
  },

  'TN' : {
    'name' : 'Tennessee',
  },

  'KY' : {
    'name' : 'Kentucky',
  },

  'VA' : {
    'name' : 'Virginia',
  },

  'ME' : {
    'name' : 'Maine',
  },

  'CA' : {
    'name' : 'California',
  },

  'NY' : {
    'name' : 'New York',
  },

  'WA' : {
    'name' : 'Washington',
  },

   'AK' : {
    'name' : 'Alaska',
  },

 'AZ' : {
    'name' : 'Arizona',
  },

 'AR' : {
    'name' : 'Arkansas',
  },

 'CO' : {
    'name' : 'Colorado',
  },

 'CT' : {
    'name' : 'Connecticut',
  },

 'DE' : {
    'name' : 'Delaware',
  },

 'HI' : {
    'name' : 'Hawaii',
  },

 'ID' : {
    'name' : 'Idaho',
  },

 'IL' : {
    'name' : 'Illinois',
  },

 'IN' : {
    'name' : 'Indiana',
  },

 'IA' : {
    'name' : 'Iowa',
  },

 'KS' : {
    'name' : 'Kansas',
  },

 'LA' : {
    'name' : 'Louisiana',
  },

 'MD' : {
    'name' : 'Maryland',
  },

 'MA' : {
    'name' : 'Massachusetts',
  },

 'MI' : {
    'name' : 'Michigan',
  },

 'MN' : {
    'name' : 'Minnesota',
  },

 'MO' : {
    'name' : 'Missouri',
  },
 'MT' : {
    'name' : 'Montana',
  },
   'NE' : {
    'name' : 'Nebraska',
  },
   'NV' : {
    'name' : 'Nevada',
  },
   'NH' : {
    'name' : 'New Hampshire',
  },
   'NJ' : {
    'name' : 'New Jersey',
  },
   'NM' : {
    'name' : 'New Mexico',
  },
   'ND' : {
    'name' : 'North Dakota',
  },
   'OH' : {
    'name' : 'Ohio',
  },
   'OK' : {
    'name' : 'Oklahoma',
  },
   'PA' : {
    'name' : 'Pennsylvania',
  },
   'RI' : {
    'name' : 'Rhode Island',
  },

   'SD' : {
    'name' : 'South Dakota',
  },
     'TX' : {
    'name' : 'Texas',
  },
     'UT' : {
    'name' : 'Utah',
  },
     'VT' : {
    'name' : 'Vermont',
  },
     'WV' : {
    'name' : 'West Virginia',
  },
     'WI' : {
    'name' : 'Wisconsin',
  },
   'WY' : {
    'name' : 'Wyoming',
  },


  'OR' : {
    'name' : 'Oregon',
  }
}

window.addEventListener('load', function(){
	var map = Map();
	map.init(data);
});

function Map() {

	/* TODO: Create a Map object with these functions and variables as methods and parameters
	(function(){

	})();
	*/
	var states = document.getElementsByClassName('state'),
		popover = document.getElementById('popover'),
		popoverChildren = Array.prototype.slice.call( popover.childNodes ),
		svgContent = document.getElementById('svg-content'),
		stateData;

	/*
	* Accepts state ID
	* Returns object with state data
	*/
	function getData(id) {
	  var currentState = {};
	  id = id.toUpperCase();
	  if(stateData.hasOwnProperty(id)) {
		currentState = stateData[id];
	  } else {
		currentState = {
			'name' : 'Data does not exist',
			'description' : 'Data does not exist'
		};
		triggerError(currentState.name);
		//console.log(currentState);
		//return false;
	  }
	  return currentState;
	}

	/*
	* Accepts State ID
	* Updates popover position
	*/
	function updatePopover(id, event) {
	  var data = getData(id);
	  var coords = getCoordinates(event);
	  if(!data) {
		hidePopover();
		return false;
	  }
	  refreshData(data);
	  showPopover();
	  changePosition(coords.x, coords.y);
	  return true;
	}

	function changePosition(x,y){
	  var popHeight = popover.offsetHeight,
		  popWidth = popover.offsetWidth,
		  svgWidth = svgContent.offsetWidth,
		  svgHeight = svgContent.offsetHeight;

	  popover.dataset.arrow = '';
	  console.log(svgHeight + ' ' + y);
	  if( (svgWidth - x) < popWidth / 2 ){
		console.log("popover on left");
		popover.dataset.arrow = "right";
		popover.style.left = ( ( (x - popWidth) - 15 ) + 'px' );
		popover.style.top = (y - (popHeight / 2) ) + 'px';
	  } else if ( (x > 0 ) && ( x < popWidth ) ){
		console.log('popover on right');
		popover.dataset.arrow = "left";
		popover.style.left = ( ( x+ 15 ) + 'px' );
		popover.style.top = (y - (popHeight / 2) ) + 'px';
	  } else if ( (svgHeight - y) < popHeight ){
	  	console.log('popover on top');
	  	popover.dataset.arrow = 'top';
	  	popover.style.left = ( x - ( popWidth / 2 ) ) + 'px';
	  	popover.style.top = ( ( y - popHeight ) - 15 ) + 'px';
	  }	else {
		popover.style.left = ( x - ( popWidth / 2 ) ) + 'px';
		popover.style.top = ( y + 15 ) + 'px';
	  }

	  return true;
	}


	/*
	* Accepts data and updates popover DIRECT children with data attribute
	*/
	function refreshData(data) {
	  Array.prototype.forEach.call(popoverChildren, function(child, i) {
		child.innerHTML = '';
		for (var key in data) {
			if(child.nodeType != 1) {
				break;
			}
			//console.log('"data-'+key+'"');
			if(child.nodeType == 1 && child.hasAttribute('data-'+key+'')) {
				if( child.hasAttribute('data-link') ) {
					child.href = data[key].link;
					child.innerHTML = data[key].title;
					return;
				}
				child.innerHTML = data[key];
				break;
			}
		}
	  });
	  return true;
	}

	/*
	* Accepts Event
	* Returns Object with X and Y of event
	*/
	function getCoordinates(event) {
	  var coords = {
		'x' : '',
		'y' : ''
	  };

	  coords.x = event.layerX;
	  coords.y = event.layerY;
	  return coords;
	}

	/*
	* Shows popover
	*/
	function showPopover() {
	  popover.classList.add('in');
	}


	/*
	* Hides popover
	*/
	function hidePopover() {
	  popover.classList.remove('in');
	}

	/*
	* triggers an error message
	*/

	function triggerError(message) {
	  console.log(message);
	}

	/*
	* accepts data, adds event listeners
	*/
	function init(data) {
		stateData = data;
		Array.prototype.forEach.call(states, function(state, i) {
		  state.addEventListener('mouseenter', function(e){
			e.stopPropagation();
			updatePopover(state.id, e);
		  });
		});

		svgContent.addEventListener('mouseenter', function(e){
		  hidePopover();
		});
	}

	return {
		init: init
	}
}
