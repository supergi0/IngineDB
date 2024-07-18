#!/bin/bash

cd ..

BASE_DIR=$(pwd)

# Compile the lexer and parser
flex lexer.l && bison -d --yacc parser.y && cc -c y.tab.c -o parser.o && cc -c main.c -o main.o && cc main.o parser.o -o executethis

# Cleanup lex, parser files, and object files
rm lex.yy.c y.tab.c y.tab.h parser.o main.o

# Check if executethis was successfully created before proceeding
if [ ! -f executethis ]; then
    echo "Compilation failed, executethis not found."
    exit 1
fi

# Iterate over each directory in $BASE_DIR/tests/
find $BASE_DIR/tests -mindepth 1 -maxdepth 1 -type d | while read dir; do
    # Make a copy of executethis for each directory
    cp executethis "${dir}/executethis_copy"
    if [ -f "${dir}/sql1.txt" ]; then
        # Move the copy into the directory
        mv "${dir}/executethis_copy" "${dir}/executethis"
        # Change directory to $dir
        cd "$dir"
        # Execute it
        OUTPUT=$(./executethis)
        echo "$OUTPUT"

        # get parse tree
        cp ../tree.py ./
        python3 tree.py
        rm tree.py
        rm output.ps
         
        # Change back to the base directory
        cd $BASE_DIR
        # Remove the executable from the directory after use
        rm "${dir}/executethis"
    else
        echo "sql1.txt not found in $dir"
        # Remove the unused copy if sql1.txt is not found
        rm "${dir}/executethis_copy"
    fi
done

# Remove the original executethis
rm executethis