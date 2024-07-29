# query/Makefile

QUERY_DB_OBJ := database.o
ANALYZER_OBJ := analyzer.o

.PHONY: all clean

all: $(QUERY_DB_OBJ) $(ANALYZER_OBJ)

$(QUERY_DB_OBJ): database.cpp
	g++ -c $< -o $@

$(ANALYZER_OBJ): analyzer.cpp
	g++ -c $< -o $@

clean:
	rm -f $(QUERY_DB_OBJ) $(ANALYZER_OBJ)
