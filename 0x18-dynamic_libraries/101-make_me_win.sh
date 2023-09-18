#!/bin/bash
gcc -shared -o liball.so -fPIC
export LD_PRELOAD=.:$LD_LIBRARY_PATH
