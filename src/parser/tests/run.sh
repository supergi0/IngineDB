#!/bin/bash

# Navigate to the parent directory where lexer.l and parser.y are located
cd ..

# Compile the lexer and parser
flex lexer.l
bison -d --yacc parser.y
cc y.tab.c

#Cleanup lex and parser files
rm lex.yy.c
rm y.tab.c
rm y.tab.h

# Move the compiled output to the current directory
mv a.out ./tests

# Navigate back to the current directory
cd tests

# Run the parser with the input file
./a.out < sql1.txt

# Cleanup executable
rm a.out
