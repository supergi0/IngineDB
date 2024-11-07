#pragma once

#include "./database_s.hpp"
#include "../parser/parser.hpp"
#include "../output/output.hpp"

class DatabaseManager
{
public:
    Database *current_database;
    std::vector<Database> database_array;

    DatabaseManager() : database_array(), current_database(nullptr) {}
};

extern DatabaseManager dbm;