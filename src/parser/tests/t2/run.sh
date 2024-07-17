#!/bin/bash

# Navigate to the parent directory where lexer.l and parser.y are located
cd ..
cd ..

TEST_FLAG=0

# Compile the lexer and parser
flex lexer.l
bison -d --yacc parser.y
cc y.tab.c

#Cleanup lex and parser files
rm lex.yy.c
rm y.tab.c
rm y.tab.h

# Move the compiled output to the current directory
mv a.out ./tests/t2

# Navigate back to the current directory
cd ./tests/t2

# Run the parser with the input file
OUTPUT=$(./a.out < sql1.txt)
EXIT_STATUS=$?

echo "$OUTPUT"

# Determine success based on TEST_FLAG and EXIT_STATUS
if [ "$TEST_FLAG" -eq 1 ] && [ "$EXIT_STATUS" -eq 0 ]; then
    echo "Update test successful."
elif [ "$TEST_FLAG" -eq 0 ] && [ "$EXIT_STATUS" -eq 1 ]; then
    echo "Update test successful."
else
    echo "Update test unsuccessful."
fi

# Cleanup executable
rm a.out
