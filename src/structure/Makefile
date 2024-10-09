# structure/Makefile

STRUCTURE_OBJ := structure.o
DATABASE_OBJ := database.o
COLUMN_OBJ := column.o

.PHONY: all clean

all: $(STRUCTURE_OBJ)

$(STRUCTURE_OBJ): $(DATABASE_OBJ) $(COLUMN_OBJ)
	ld -r -o $@ $^

$(DATABASE_OBJ): database_s.cpp
	g++ -c $< -o $@

$(COLUMN_OBJ): column_s.cpp
	g++ -c $< -o $@

clean:
	rm -f $(STRUCTURE_OBJ) $(DATABASE_OBJ) $(COLUMN_OBJ)