#pragma once

#include "../structure.hpp"
#include "../response.hpp"

Response createDatabase(std::string &name);

Response useDatabase(std::string &name);

Response dropDatabase(std::string &name);

std::vector<std::string> showDatabase();

Response errorMessage(const std::string &type);

