#pragma once

#include "../basic.hpp"

typedef struct node {
    struct node* children[20];
    char* token;
} node;

node* mknode(const char* token);

node* getParseTree(const char* input);
