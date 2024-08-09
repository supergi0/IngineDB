#pragma once

#include "./database.hpp"
#include "../parser/parser.hpp"
#include "../output/output.hpp"

class DatabaseManager {
public:
    std::vector<Database> database_array;
    Database* current_database;

    DatabaseManager() : database_array(), current_database(nullptr) {}
};

extern DatabaseManager dbm;