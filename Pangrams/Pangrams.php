<?php
$_fp = fopen("php://stdin", "r");

    $string = fgets($_fp);
    $counts = [];
    foreach (range('a', 'z') as $letter) {
        $counts [$letter] = 0;
    }

    $length = strlen ($string);
    for ($i = 0; $i < $length; $i++) {
        $char = strtolower (substr ($string, $i, 1));
        $counts[$char]++;
    }

    $total = 0;
    foreach ($counts as $val) {
        if ($val > 0) {
            $total++;
        }
    }

    if ($total == 27) {
        echo 'pangram';
    } else {
        echo 'not pangram';
    }
?>