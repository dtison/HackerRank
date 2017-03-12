#!/bin/bash

app="${PWD##*/}"
echo "Building $app.."
g++ -std=c++11  -o $app $app.cpp

