<?php

$host = $_GET['host'];
$port = $_GET['port'];
$command = 'nc ' . $host . ' ' . $port;
exec($command, $storage);


?>

