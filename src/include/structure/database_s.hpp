#pragma once

#include "table_s.hpp"

// Structure used while creating a table's column information
typedef struct Column_s
{
    std::string name;
    std::string type;
} Column_s;

class Database
{
public:
    std::string name;
    std::vector<Table> table_array;

    Database(std::string name) : name(name), table_array() {}

    bool add(std::string name, std::vector<Column_s> columns_information);
};