# query/Makefile

DATABASE_OBJ := database.o
ANALYZER_OBJ := analyzer.o
TABLE_OBJ := table.o
QUERY_OBJ := query.o
AT_FILE_OBJ := at_file.o

.PHONY: all clean

all: $(QUERY_OBJ)

$(QUERY_OBJ): $(ANALYZER_OBJ) $(DATABASE_OBJ) $(TABLE_OBJ) $(AT_FILE_OBJ)
	ld -r -o $@ $^

$(DATABASE_OBJ): database.cpp
	g++ -c $< -o $@

$(ANALYZER_OBJ): analyzer.cpp
	g++ -c $< -o $@

$(TABLE_OBJ): table.cpp
	g++ -c $< -o $@

$(AT_FILE_OBJ): at_file.cpp
	g++ -c $< -o $@

clean:
	rm -f $(DATABASE_OBJ) $(ANALYZER_OBJ) $(TABLE_OBJ) $(QUERY_OBJ) $(AT_FILE_OBJ)
