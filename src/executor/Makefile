# executor/Makefile

EXECUTOR_OBJ := executor.o

.PHONY: all clean

all: $(EXECUTOR_OBJ)

$(EXECUTOR_OBJ): executor.cpp
	g++ -c $< -o $@

clean:
	rm -f $(EXECUTOR_OBJ)
