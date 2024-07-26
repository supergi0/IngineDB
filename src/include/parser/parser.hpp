#pragma once

#include "../basic.hpp"

typedef struct node {
    struct node* children[20];
    char* token;
} node;

node* mknode(const char* token);

int parseInput(const char* input);

node* getParseTree(const char* input);
