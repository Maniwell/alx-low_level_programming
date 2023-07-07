#!/bin/bash

gcc -c *.c

# Create a static library from the object files
ar rcs liball.a *.o

# Clean up the object files
rm *.o
