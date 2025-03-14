#!/bin/bash

files=("0-isupper.c" "0-memset.c" "0-strcat.c" "1-isdigit.c" "1-memcpy.c" "1-strncat.c"
       "100-atoi.c" "2-strchr.c" "2-strlen.c" "2-strncpy.c" "3-islower.c" "3-puts.c"
       "3-strcmp.c" "3-strspn.c" "4-isalpha.c" "4-strpbrk.c" "5-strstr.c" "6-abs.c"
       "9-strcpy.c" "_putchar.c")
ob_file=()
for file in "${files[@]}"; do
	gcc -c "$file" -o "${file%.c}.o"
	ob_file+=("${file%.c}.o")
done

clib="ar rc liball.a "
for fl in "${ob_file[@]}"; do
	clib+="$fl "
done

eval "$clib"
ranlib liball.a
