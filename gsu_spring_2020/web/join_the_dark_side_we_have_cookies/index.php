<?php
    $cookie_name = "flag";
    $cookie_value = base64_encode("gsuCTF{omnomnomnomnomnomnomnom}");
    setcookie($cookie_name, $cookie_value);
?>

<!DOCTYPE html>
<html>
<body>
<img src="cookie_monster.jpg" width="100%" height="100%">	
</body>
</html> 