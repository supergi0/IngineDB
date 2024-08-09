#pragma once

#include "./database.hpp"
#include "./table.hpp"
#include "../parser/parser.hpp"

Response analyzeQuery(const char* input);