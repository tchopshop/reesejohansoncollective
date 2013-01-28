$(document).ready(function() {

//COUNTDOWN TIMER SECTION
		
	$("#time").countdown({
		date: "january 10, 2013 12:35",//MODIFY THIS DATE TO YOUR WEBSITE LAUNCH DATE
		//onComplete: function( event ) {},
		leadingZero: true
	});
	
//EMAIL FORM AJAX HANDLERS

	    $(function(){
	   		$('#contact_form').submit(function(e){
	    		e.preventDefault();
	    		var form = $(this);
	    		var post_url = form.attr('action');
	    		var post_data = form.serialize();
	    		$('#loader', form).html('<img src="loader.gif" /> Please Wait...');
	    			$.ajax({
	    				type: 'POST',
	    				url: post_url,
	    				data: post_data,
	    				success: function(msg) {
	    					$('#messages').html(msg).fadeIn(500);
	    				}
	    			});
	    		});
	    });
	    
//TWITTER SCRIPT

	getTwitters('tweet', { 
	  	id: 'reesejohanson',//ADD IN YOUR OWN TWITTER ID HERE
	  	count: 4, 
	  	enableLinks: true, 
	  	ignoreReplies: true, 
	  	clearContents: true,
	  	template: '"%text%" <a href="http://twitter.com/%user_screen_name%/statuses/%id_str%/">%time%</a>'
	});

});