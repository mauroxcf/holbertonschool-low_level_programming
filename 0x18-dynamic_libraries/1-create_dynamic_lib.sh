#!/bin/bash
 gcc -Wall -fPIC -c *.c &&  gcc -shared -o libal.so *.o
 