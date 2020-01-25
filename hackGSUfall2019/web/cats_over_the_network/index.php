<?php

$host = $_GET['host'];
$port = $_GET['port'];

$conn = ' ' . $host . ' ' . $port;

blacklist = array('<','>','script', '%3C', '%3E');

foreach ($blacklist as $str) {
    if(strpos($conn, $str) !== false) {
        echo "XSS IS NOT THE ANSWER :((((";
	return;
    }
}   

$command = 'nc ' . $conn
exec($command, $storage);


?>

