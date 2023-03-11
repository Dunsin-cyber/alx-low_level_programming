#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -cr libail.a *.o
