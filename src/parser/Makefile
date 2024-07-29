# parser/Makefile

PARSER_OBJ := parser.o
PARSER_CPP_OBJ := parser_cpp.o
PARSER_Y_OBJ := parser_y.o

.PHONY: all clean

all: lex.yy.c y.tab.c y.tab.h $(PARSER_OBJ)

$(PARSER_OBJ): $(PARSER_CPP_OBJ) $(PARSER_Y_OBJ)
	ld -r -o $@ $^

$(PARSER_CPP_OBJ): parser.cpp
	g++ -c $< -o $@

$(PARSER_Y_OBJ): y.tab.c
	g++ -c $< -o $@

y.tab.h y.tab.c: parser.y
	bison -d --yacc -o y.tab.c --defines=y.tab.h $<

lex.yy.c: lexer.l
	flex -o $@ $<

clean:
	rm -f $(PARSER_OBJ) $(PARSER_CPP_OBJ) $(PARSER_Y_OBJ) lex.yy.c y.tab.c y.tab.h
