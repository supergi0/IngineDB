# structure/Makefile

STRUCTURE_OBJ := structure.o
DATABASE_MANAGER_OBJ := database_manager.o

.PHONY: all clean

all: $(STRUCTURE_OBJ)

$(STRUCTURE_OBJ): $(DATABASE_MANAGER_OBJ)
	ld -r -o $@ $^

$(DATABASE_MANAGER_OBJ): database_manager.cpp
	g++ -c $< -o $@

clean:
	rm -f $(DATABASE_MANAGER_OBJ) $(STRUCTURE_OBJ)