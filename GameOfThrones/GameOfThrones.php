<?php

function canBePalindrome ($string) {

    $letter_counts = array_fill(0, 26, 0);
    // Find counts of each letter of string
    for ($i = 0; $i < strlen($string); $i++) {
        $index = ord (substr ($string, $i, 1)) - ord ('a');
        $letter_counts[$index]++;
    }
    // Determine if more than one letter occurs odd # of times
    $odd_count = 0;
    for ($i = 0; $i < 26 && $odd_count <= 1; $i++) {
        if (($letter_counts[$i] % 2) != 0) {
            $odd_count++;
        }
    }
    return ($odd_count <= 1);
}

$fp = fopen("php://stdin", "r");
fscanf($fp, "%s", $string);
echo canBePalindrome ($string) ? 'YES' : 'NO';

?>