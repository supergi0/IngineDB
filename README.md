# IngeniumDB (In development)

## An in-memory RDBMS that uses SQL standard. Fully built in C, with parsing using Flex and Bison/YACC.


Use in parser folder

flex lexer.l && bison -d --yacc parser.y && cc -c y.tab.c -o parser.o && cc -c parser.c -o main.o && cc main.o parser.o -o executethis && ./executethis && rm lex.yy.c y.tab.c y.tab.h parser.o main.o executethis

for testing purposes