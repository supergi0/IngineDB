#pragma once

#include "./database.hpp"
#include "../parser/parser.hpp"
#include "../output/output.hpp"

class DatabaseManager {
public:
    std::vector<Database> database_array;
    Database* current_database;

    DatabaseManager() : database_array(), current_database(nullptr) {}

    // defined functions for basic database operations

    Response createDatabase(node* root);

    Response dropDatabase(node* root);

    Response showDatabase();

    Response useDatabase(node* root);
};

extern DatabaseManager dbm;