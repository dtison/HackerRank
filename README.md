# HackerRank
**My solutions to challenges on hackerrank.com**.

Most are in **PHP**, or **C++** for speed or other reasons. Some **Java** might be included at times.

If it's a Functional Programming challenge, it will be either **Scala** or **Haskell**. 

*Pull Requests*:  Pull requests accepted for a valid solution in a different language or a using a different algorithm.

If you find any problem with the solutions - for any reason, feel free to open an [issue](https://github.com/dtison/HackerRank/issues).

**Building the Solutions - C++ Example**

cd to Directory
Use ./build.sh

build.sh source:
```
app="${PWD##*/}"
echo "Building $app.."
g++ -std=c++11  -o $app $app.cpp
```

The C++ file will have the same name as the directory.


In the challenges where the whole program is built and tested, the test.sh script can be used to verify correct
results for the Sample Input values.

To run basic test based on the Sample Input's for the challenge,
Use ./test.sh

test.sh source:
```
app="${PWD##*/}"
cat input.txt | ./$app;
```


