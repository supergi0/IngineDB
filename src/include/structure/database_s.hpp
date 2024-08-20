#pragma once

#include "table_s.hpp"

class Database {
public:
    std::string name;
    std::vector<Table> table_array;

    Database(std::string name) : name(name), table_array() {}

    std::vector<std::string> get_tables();

    bool remove(std::string name);

    bool add(std::string name);

    bool exists(std::string name);
};