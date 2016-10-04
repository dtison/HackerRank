<?php


$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$t);
for($a0 = 0; $a0 < $t; $a0++){
    fscanf($handle,"%s",$expression);

    if (checkBalance($expression)) {
        echo "YES\n";
    } else {
        echo "NO\n";
    }

}

// In this code Brace and Bracket are synonyms

// This could also be class BraceType
interface BraceType {
    const Null      = 0;
    const Curly     = 1;
    const Square    = 2;
    const Paren     = 3;
}

function getBracketType ($bracket) {
    if ($bracket == '[' || $bracket == ']') {
        return BraceType::Square;
    } elseif ($bracket == '{' || $bracket == '}') {
        return BraceType::Curly;
    } elseif ($bracket == '(' || $bracket == ')') {
        return BraceType::Paren;
    }
    return BraceType::Null;
}

function checkBalance ($string) {

    // Use array for the stack
    $brackets_stack = [];
    // Assume balanced until proven false
    $passes = true;

    $chars = str_split ($string);
    foreach ($chars as $char) {

        if (! $passes) {
            continue;
        }
        if ($char == '[' || $char == '{' || $char == '(') {
            array_push ($brackets_stack, $char);
        }

        if ($char == ']' || $char == '}' || $char == ')') {

            // Stack underflow would be unbalanced
            if (count ($brackets_stack) == 0) {
                $passes = false;
                continue;
            }

            $popped_char    = $brackets_stack[count ($brackets_stack) - 1];
            $popped_type    = getBracketType($popped_char);
            $char_type      = getBracketType($char);
            // Unequal type is unbalanced
            if ($popped_type != $char_type) {
                $passes = false;
                continue;
            }
            array_pop($brackets_stack);
        }

    }

    // If something's left on stack it's unbalanced
    if (count ($brackets_stack) > 0) {
        $passes = false;
    }
    return $passes;
}


?>
