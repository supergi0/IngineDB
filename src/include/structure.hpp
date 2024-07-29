#pragma once

#include "./basic.hpp"

enum class DataType : uint8_t {
    INT,
    FLOAT,
    DOUBLE,
    CHAR,
    VARCHAR,
    BOOLEAN
};

class Table {
public:
    std::string name;

    Table(std::string name) : name(name) {}
};

class Database {
public:
    std::string name;
    std::vector<Table> table_array;

    Database(std::string name) : name(name), table_array() {}
};


class DatabaseManager {
public:
    std::vector<Database> database_array;
    Database* current_database;

    DatabaseManager() : database_array(), current_database(nullptr) {}
};

extern DatabaseManager dbm;