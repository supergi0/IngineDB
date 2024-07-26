#pragma once

#include "../structure.hpp"
#include "../response.hpp"

Database::Database(std::string n) : name(std::move(n)) {}

DatabaseManager::DatabaseManager() : current_database(nullptr), count(0) {}

Response createDatabase(std::string &name);

Response useDatabase(std::string &name);

Response dropDatabase(std::string &name);

std::vector<std::string> showDatabase();

Response errorMessage(const std::string &type);

