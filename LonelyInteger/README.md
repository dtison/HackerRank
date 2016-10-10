Lonely Integer
==============

C++ code [passes all tests](https://www.hackerrank.com/challenges/lonely-integer) on 2016/10/10

Original [Lonely Integer](https://www.hackerrank.com/challenges/lonely-integer) challenge.

std::accumulator() works by using a custom binary_op function that does
a bitwise xor on consecutive elements.  This is an optimization based
on this statement in the challenge:   

```every element in  occurs exactly twice except for one unique element.````

Otherwise, you could use either an array or hash map, count all
the # appearances of each char, and determine which one has only
count = 1.