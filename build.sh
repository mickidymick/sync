#!/bin/bash
gcc -o sync.so sync.c $(yed --print-cflags) $(yed --print-ldflags)
