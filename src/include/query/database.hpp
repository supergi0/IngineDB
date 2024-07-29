#pragma once

#include "../structure.hpp"
#include "../response.hpp"
#include "../parser/parser.hpp"
#include "../output.hpp"

Response createDatabase(node* root);

Response useDatabase(node* root);

Response dropDatabase(node* root);

Response showDatabase();

