#directories
SRC := .
CLI := cli
EXECUTOR := executor
PARSER := parser

#These are the object files to be linked!
CLI_OBJ := $(CLI)/main.o
EXECUTOR_OBJ := $(EXECUTOR)/executor.o
PARSER_CPP_OBJ := $(PARSER)/parser_cpp.o
PARSER_Y_OBJ := $(PARSER)/parser_y.o
PARSER_OBJ := $(PARSER)/parser.o

#This is the executable file
INGDB := ingdb

# Run all and clean
all: run clean

#run
run : parse execute cli executable
	./$(INGDB)

#get executable
executable : $(INGDB)

$(INGDB): $(CLI_OBJ) $(EXECUTOR_OBJ) $(PARSER_OBJ)
	g++ $^ -o $@

#cli logic
cli: $(CLI_OBJ)

$(CLI_OBJ): $(CLI)/main.cpp
	g++ -c $< -o $@

# executor logic
execute : $(EXECUTOR_OBJ)

$(EXECUTOR_OBJ): $(EXECUTOR)/executor.cpp
	g++ -c $< -o $@

# parsing logic
parse: $(PARSER)/lex.yy.c $(PARSER)/y.tab.c $(PARSER)/y.tab.h $(PARSER_Y_OBJ) $(PARSER_CPP_OBJ) $(PARSER_OBJ)

$(PARSER_OBJ) : $(PARSER_CPP_OBJ) $(PARSER_Y_OBJ)
	ld -r -o $@ $^

$(PARSER_CPP_OBJ): $(PARSER)/parser.cpp
	g++ -c $< -o $@

$(PARSER_Y_OBJ): $(PARSER)/y.tab.c
	g++ -c $< -o $@

$(PARSER)/y.tab.h $(PARSER)/y.tab.c: $(PARSER)/parser.y
	bison -d --yacc -o $@ --defines=$(PARSER)/y.tab.h $<

$(PARSER)/lex.yy.c: $(PARSER)/lexer.l
	flex -o $@ $<

clean:
	rm -f $(PARSER_CPP_OBJ) $(PARSER)/lex.yy.c $(PARSER)/y.tab.c $(PARSER)/y.tab.h $(PARSER_Y_OBJ) $(EXECUTOR_OBJ) $(CLI_OBJ) $(INGDB) output.txt $(PARSER_OBJ)