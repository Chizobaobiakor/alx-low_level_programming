#!/bin/bash
gccc -fpic -c *.c
gcc -shared *.o -o liball.so
