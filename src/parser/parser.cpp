#include "../include/parser/parser.hpp"

int parseInput(const char* input) {

    node* parsetree_head = getParseTree(input);

    if (parsetree_head != NULL) {
        printTree(parsetree_head);
        printf("Parsing complete.\n");
    } else {
        printf("Parsing failed.\n");
    }

    return 0;
}