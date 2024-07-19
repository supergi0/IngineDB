#include "../include/parser/parser.h"

int main() {
    FILE *file;
    char *input = "SELECT * from helloworld;";

    node* parsetree_head = getParseTree(input);

    if (parsetree_head != NULL) {
        printtree(parsetree_head);
        printf("Parsing complete.\n");
    } else {
        printf("Parsing failed.\n");
    }

    return 0;
}