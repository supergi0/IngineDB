#pragma once

#include "./database.hpp"
#include "../parser/parser.hpp"
#include "../output/output.hpp"

class DatabaseManager {
private:
    std::vector<Database> database_array;
    Database* current_database;

public:
    DatabaseManager() : database_array(), current_database(nullptr) {}

    bool set_current(std::string name);

    std::string get_current();

    std::vector<std::string> get_databases();

    bool remove(std::string name);

    bool add(std::string name);

    bool isset();

    bool exists(std::string name);
};

extern DatabaseManager dbm;