#directories
SRC := .
CLI := cli
EXECUTOR := executor
PARSER := parser
PRINT := printer
QUERY := query

#These are the object files to be linked!
CLI_OBJ := $(CLI)/main.o
EXECUTOR_OBJ := $(EXECUTOR)/executor.o
PARSER_CPP_OBJ := $(PARSER)/parser_cpp.o
PARSER_Y_OBJ := $(PARSER)/parser_y.o
PARSER_OBJ := $(PARSER)/parser.o
PRINT_OBJ := $(PRINT)/print.o
QUERY_DB_OBJ := $(QUERY)/database.o
ANALYZER_OBJ := $(QUERY)/analyzer.o



#This is the executable file
INGDB := ingdb



# Run all and clean
all: run clean



#run
run : parse query print analyze execute cli executable
	./$(INGDB)



#get executable
executable : $(INGDB)

$(INGDB): $(CLI_OBJ) $(EXECUTOR_OBJ) $(ANALYZER_OBJ) $(PRINT_OBJ) $(QUERY_DB_OBJ) $(PARSER_OBJ)
	g++ $^ -o $@



# cli logic
cli: $(CLI_OBJ)

$(CLI_OBJ): $(CLI)/main.cpp
	g++ -c $< -o $@



# executor logic
execute : $(EXECUTOR_OBJ)

$(EXECUTOR_OBJ): $(EXECUTOR)/executor.cpp
	g++ -c $< -o $@



# analyzer logic
analyze : $(ANALYZER_OBJ)

$(ANALYZER_OBJ) : $(QUERY)/analyzer.cpp
	g++ -c $< -o $@



# print logic
print : $(PRINT_OBJ)

$(PRINT_OBJ) : $(PRINT)/print.cpp
	g++ -c $< -o $@



# Query logic
query: $(QUERY_DB_OBJ)

$(QUERY_DB_OBJ): $(QUERY)/database.cpp
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



# clean all obj and extra files
clean:
	rm -f $(PARSER_CPP_OBJ) $(PARSER)/lex.yy.c $(PARSER)/y.tab.c $(PARSER)/y.tab.h $(PARSER_Y_OBJ) $(EXECUTOR_OBJ) $(CLI_OBJ) $(INGDB) output.txt $(PARSER_OBJ) $(ANALYZER_OBJ) $(PRINT_OBJ) $(QUERY_DB_OBJ)