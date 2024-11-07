#pragma once

#include "../basic.hpp"

typedef struct node
{
    struct node *children[MAX_PARSE_TREE_CHILDREN];
    char *token;
} node;

node *mknode(const char *token);

node *getParseTree(const char *input);

void deleteNode(node *head);