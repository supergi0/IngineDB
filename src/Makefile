# Main Makefile

SUBDIRS := cli executor output parser query
INGDB := ingdb

CLI_OBJ := cli/main.o
EXECUTOR_OBJ := executor/executor.o
QUERY_OBJ := query/query.o
PARSER_OBJ := parser/parser.o
OUTPUT_OBJ := output/output.o

.PHONY: all clean $(SUBDIRS)

all: $(SUBDIRS)
	$(MAKE) --no-print-directory -C cli
	g++ $(CLI_OBJ) $(EXECUTOR_OBJ) $(QUERY_OBJ) $(OUTPUT_OBJ) $(PARSER_OBJ) -o $(INGDB)
	./ingdb

$(SUBDIRS):
	$(MAKE) --no-print-directory -C $@

run: all
	./$(INGDB)

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) --no-print-directory -C $$dir clean; \
	done
	rm -f $(INGDB)