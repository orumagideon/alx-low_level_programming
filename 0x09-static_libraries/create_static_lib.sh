#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -с *.c
ar -rc liball.a *.0
ranlib liball.a
