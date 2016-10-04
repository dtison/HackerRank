<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%s",$s);

$length = strlen ($s);
$words = 1;
for ($i = 1; $i < $length; $i++) {
    $char = substr ($s, $i, 1);
    if(preg_match('/[A-Z]$/', $char)) {
        $words++;
    }
}
echo $words;
?>