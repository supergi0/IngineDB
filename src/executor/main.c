#include "../include/parser/parser.h"

int main() {
    char *input = "SELECT * from helloworld;";

    parseInput(input);

    return 0;
}