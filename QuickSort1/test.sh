#!/bin/bash

app="${PWD##*/}"
cat input.txt | ./$app;