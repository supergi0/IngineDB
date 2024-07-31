#pragma once

#include "table.hpp"

class Database {
public:
    std::string name;
    std::vector<Table> table_array;

    Database(std::string name) : name(name), table_array() {}
};