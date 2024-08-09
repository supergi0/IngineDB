#pragma once

#include "../parser/parser.hpp"
#include "../structure/database_manager.hpp"
#include "../output/output.hpp"

Response createTable(node* root);

Response dropTable(node* root);

Response showTable();