#!/bin/bash

# Navigate to the parser directory and generate the parser.o
cd parser
flex lexer.l && bison -d --yacc parser.y && g++ -c y.tab.c -o parser.o
g++ -c parser.cpp -o parser_impl.o # Compile parser.c into parser_impl.o
mv parser.o ../executor
mv parser_impl.o ../executor # Move parser_impl.o to the executor directory
rm lex.yy.c y.tab.c y.tab.h

# Navigate to the executor directory and compile and link everything
cd ../executor
g++ -c executor.cpp -o executor.o
g++ executor.o parser.o parser_impl.o -o executethis # Link main.o, parser.o, and parser_impl.o together

# Execute the binary if the previous command was successful
if [ $? -eq 0 ]; then
    ./executethis
    # Clean up
    rm parser.o executor.o executethis parser_impl.o output.txt
else
    echo "Compilation or linking failed."
fi