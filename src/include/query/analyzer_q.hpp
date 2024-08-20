#pragma once

#include "./database_q.hpp"
#include "./table_q.hpp"
#include "../parser/parser.hpp"

Response analyzeQuery(const char* input);

void executeQueries(node* root);