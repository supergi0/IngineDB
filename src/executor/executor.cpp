#include "../include/parser/parser.h"

int main() {
    const char *input = "SELECT * from helloworld;";

    parseInput(input);

    return 0;
}