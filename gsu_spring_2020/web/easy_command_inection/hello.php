<?php

$command = 'ping -c 1 google.com' . $_GET['input'];

$blacklist = array('<','>','script', '%3C', '%3E');

foreach	($blacklist as $str) {
    if(strpos($command, $str) !== false) {
        echo "XSS IS NOT THE ANSWER :((((";
	return;
    }
}

system($command)

?>