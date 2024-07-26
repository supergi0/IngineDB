#include "../include/parser/parser.hpp"

extern bool error_occured;

node* mknode(const char* token){
    node *newnode = new node();
    if (newnode == NULL) {
        return NULL;
    }
    newnode->token = strdup(token);
    if (newnode->token == NULL) {
        delete newnode;
        return NULL;
    }
    return newnode;
}

int parseInput(const char* input) {

    node* parsetree_head = getParseTree(input);

    if (parsetree_head != NULL) {
        printf("Parsing complete.");
    } else {
        printf("Parsing failed.");
        error_occured = false;
    }

    return 0;
}