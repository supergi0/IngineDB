#pragma once

#include "./basic.hpp"
#include <memory>
#include <vector>
#include <string>
#include <variant>

// To identify what each column is storing
enum class DataType {
    INT,
    FLOAT,
    CHAR,
    VARCHAR
};

// To define a collective type of data allowed in a cell
using DataValue = std::variant<int, float, char, std::string>;

// Size would be the size of DataValue + 1 byte boolean
struct Cell {
    DataValue value;
    bool is_null;
};

struct Row {
    std::vector<std::unique_ptr<Cell>> cell_array; // array of Cells
};

struct Column {
    std::string column_name;
    DataType type;
};

struct Table {
    std::string name;
    std::vector<std::unique_ptr<Column>> column_array; // Array of Columns
    std::vector<std::unique_ptr<Row>> row_array; // Array of Rows
    int column_count;
    int row_count;
};

struct Database {
    std::string name;
    std::vector<std::unique_ptr<Table>> table_array; // Array of tables
    int table_count;
};

struct DatabaseManager {
    std::vector<std::unique_ptr<Database>> database_array; // Array of Databases
    std::unique_ptr<Database> current_database; // Pointer to current Database
    int database_count;
};

extern DatabaseManager database_manager;