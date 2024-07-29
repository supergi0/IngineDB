# output/Makefile

OUTPUT_OBJ := output.o
PRINTER_OBJ := printer.o
MESSAGE_OBJ := message.o

.PHONY: all clean

all: $(OUTPUT_OBJ)

$(OUTPUT_OBJ): $(PRINTER_OBJ) $(MESSAGE_OBJ)
	ld -r -o $@ $^

$(PRINTER_OBJ): printer.cpp
	g++ -c $< -o $@

$(MESSAGE_OBJ): message.cpp
	g++ -c $< -o $@

clean:
	rm -f $(OUTPUT_OBJ) $(PRINTER_OBJ) $(MESSAGE_OBJ)
