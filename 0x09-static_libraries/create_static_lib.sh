#!/bin/bash

for source_files in *.c;

do object_file="${source_file%.c}.o"
	gcc -c "$source_file" -o "$object_file"
done

ar -rc liball.a *.o
