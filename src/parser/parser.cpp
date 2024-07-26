#include "../include/parser/parser.hpp"

extern bool error_occured;

int parseInput(const char* input) {

    node* parsetree_head = getParseTree(input);

    if (parsetree_head != NULL) {
        printTree(parsetree_head);
        printf("Parsing complete.");
    } else {
        printf("Parsing failed.");
        error_occured = false;
    }

    return 0;
}