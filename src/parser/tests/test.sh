#!/bin/bash

cd ..

BASE_DIR=$(pwd)

# Compile the lexer and parser
flex lexer.l
bison -d --yacc parser.y
cc y.tab.c -o parser_executable

# Cleanup lex and parser files
rm lex.yy.c
rm y.tab.c
rm y.tab.h

# Check if parser_executable was successfully created before proceeding
if [ ! -f parser_executable ]; then
    echo "Compilation failed, parser_executable not found."
    exit 1
fi

# Iterate over each directory in $BASE_DIR/tests/
find $BASE_DIR/tests -mindepth 1 -maxdepth 1 -type d | while read dir; do
    # Make a copy of parser_executable for each directory
    cp parser_executable "${dir}/parser_executable_copy"
    if [ -f "${dir}/sql1.txt" ]; then
        # Move the copy into the directory
        mv "${dir}/parser_executable_copy" "${dir}/parser_executable"
        # Change directory to $dir
        cd "$dir"
        # Execute it
        OUTPUT=$(./parser_executable < "sql1.txt")
        echo "$OUTPUT"

        # get parse tree
        cp ../tree.py ./
        python3 tree.py
        rm tree.py
         
        # Change back to the base directory
        cd $BASE_DIR
        # Remove the executable from the directory after use
        rm "${dir}/parser_executable"
    else
        echo "sql1.txt not found in $dir"
        # Remove the unused copy if sql1.txt is not found
        rm "${dir}/parser_executable_copy"
    fi
done

# Remove the original parser_executable
rm parser_executable