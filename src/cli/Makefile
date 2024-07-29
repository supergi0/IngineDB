# cli/Makefile

CLI_OBJ := main.o

.PHONY: all clean

all: $(CLI_OBJ)

$(CLI_OBJ): main.cpp
	g++ -c $< -o $@

clean:
	rm -f $(CLI_OBJ)