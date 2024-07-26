#pragma once

#include "./database.hpp"
#include "../parser/parser.hpp"

Response analyzeQuery(const char* input);
Response traverseNode(node* curr);