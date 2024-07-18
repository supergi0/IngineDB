// Helper functions for generating the parse tree via parser.y

#ifndef PARSER_H
#define PARSER_H

#include "../basic.h"

typedef struct node {
    struct node* children[20];
    char* token;
} node;

#endif