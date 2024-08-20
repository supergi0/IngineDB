#pragma once

#include "../parser/parser.hpp"
#include "../structure/database_manager_s.hpp"
#include "../output/output.hpp"

Response createDatabase(node* root);

Response dropDatabase(node* root);

Response showDatabase();

Response useDatabase(node* root);