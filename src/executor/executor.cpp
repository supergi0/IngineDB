#include "../include/parser/parser.hpp"

int main() {
    const char *input = "SELECT * from helloworld;";

    parseInput(input);

    return 0;
}