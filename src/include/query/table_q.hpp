#pragma once

#include "../parser/parser.hpp"
#include "../structure/database_manager_s.hpp"
#include "../output/output.hpp"

Response createTable(node *root);

Response dropTable(node *root);

Response showTable();

Response insertTable(node *root);