#run all
all : parse execute cli executable 
	./ingdb

#get executable
executable : ingdb

ingdb : cli/main.o executor/executor.o parser/parser_cpp.o parser/parser_y.o
	g++ cli/main.o executor/executor.o parser/parser_cpp.o parser/parser_y.o -o ingdb

#cli logic
cli : cli/main.o

cli/main.o : cli/main.cpp
	g++ -c cli/main.cpp -o cli/main.o

# executor logic
execute : executor/executor.o

executor/executor.o : executor/executor.cpp
	g++ -c executor/executor.cpp -o executor/executor.o

# parsing logic
parse : parser/lex.yy.c parser/y.tab.c parser/y.tab.h parser/parser_y.o parser/parser_cpp.o 

parser/parser_cpp.o : parser/parser.cpp
	g++ -c parser/parser.cpp -o parser/parser_cpp.o

parser/parser_y.o : parser/y.tab.c 
	g++ -c parser/y.tab.c -o parser/parser_y.o

parser/y.tab.h parser/y.tab.c : parser/parser.y
	bison -d --yacc -o parser/y.tab.c --defines=parser/y.tab.h parser/parser.y

parser/lex.yy.c : parser/lexer.l
	flex -o parser/lex.yy.c parser/lexer.l

clean:
	rm -f parser/parser_cpp.o parser/lex.yy.c parser/y.tab.c parser/y.tab.h parser/parser_y.o executor/executor.o cli/main.o ingdb output.txt