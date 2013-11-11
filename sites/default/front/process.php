<?php

session_start();

$_email_to = "you@email.com"; //ADD YOUR EMAIL ADDRESS HERE

$_lines_ = "\r\n";

$_flood_time_ = 10;

$_subject_ = "Contact form";

$today = gmdate ( "M d Y H:i:s" );

#############################################
## Main script below. Please do not edit unless you 
## change the language (text) only.
#############################################


function print_form($parray,$body) {
	global $_lines_;
        while (list($index, $sub) = each($parray)) {
				$index = preg_replace("/\*/", "", $index);
                $index = preg_replace("/_/", " ", $index);
            	if (preg_match('/submit/i',$index)){ continue;}
            	elseif (preg_match('/reset/i',$index)){ continue;}            
            	$body .= "$index:  ".htmlentities($sub)."$_lines_";
		}
		return $body;
}

function check_input(){
	global $flood;
    if (isset($_SESSION['FloodControl']) AND $_SESSION['FloodControl'] >= $flood){
       echo "Contact already sent";
       return false;
    }
    if(gettype($_POST)=="array") {
		while (list($index, $subarray) = each($_POST) ) {
			if(preg_match("/\*/", $index) && (($subarray == "") || ($subarray == " "))) {
				$index = preg_replace("/\*/", " ", $index);
				$index = preg_replace("/_/", " ", $index);
				echo"There is a problem with your submission. The field <span style=\"color:red\">$index</span> is required, please press the back button on your browser.</div>";
				return false;

			 } elseif(preg_match("/email/i", $index)){
               if(!preg_match('/^[-!#$%&\'*+\\.\/0-9=?A-Z^_`a-z{|}~]+'.'@'.'[-!#$%&\'*+\\/0-9=?A-Z^_`a-z{|}~]+\.'.'[-!#$%&\'*+\\.\/0-9=?A-Z^_`a-z{|}~]+$/', $subarray)){
               $index = preg_replace("/\*/", " ", $index);
               echo'The E-mail address you provided does not appear to be valid, please try again';
                                        
               return false;
                                }
			}
		}
		return true;
	} else {
        return false;
    }
} 

$flood = time()-$_flood_time_;

if ((isset($_POST['send']) AND $_POST['send']== "1")){
    if (check_input()){
            $_SESSION['FloodControl'] = time();
            $info ="On $today, a visitor submitted '$_subject_' from the your website.{$_lines_}{$_lines_}";
            $contact_body = print_form($_POST,$info);
            $headers = "From: $_email_to<{$_email_to}>\r\n";
            // send e-mail
            mail($_email_to, $_subject_, stripslashes($contact_body), $headers);

            echo "Message sent successfully\n";
            exit;
    }

}



?>