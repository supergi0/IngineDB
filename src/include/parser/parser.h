// Interface to get the parse tree anywhere

#ifndef PARSER_H
#define PARSER_H

#include "../basic.h"

typedef struct node {
    struct node* children[20];
    char* token;
} node;

void printtree(node* head);

node* getParseTree(const char* input);

#endif