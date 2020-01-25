<?php

$command = 'ping -c 1 google.com' . $_GET['input'];
system($command)

?>