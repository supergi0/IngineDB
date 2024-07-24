#pragma once

#include "./basic.hpp"

// To identify what each column is storing
enum class DataType {
    INT,
    FLOAT,
    CHAR,
    VARCHAR
};

// To define a collective type of data allowed in a cell, size occupied would be the maximum of all i.e. char* ptr 8 bytes
union DataValue {
    int int_value;
    float float_value;
    char char_value;
    std::string varchar_value;
};

// Size would be 8 bytes Datavalue + 1 byte boolean i.e. 9 bytes per cell
struct Cell {
    DataValue value;
    bool is_null;
};

struct Row {
    std::vector<Cell> cell_array; // array of Cells
};

struct Column {
    std::string column_name;
    DataType type;
};

struct Table {
    std::string name;
    std::vector<Column> column_array; // Array of Columns
    std::vector<Row> row_array; // Array of Rows
    int column_count;
    int row_count;
};

struct Database {
    std::string name;
    std::vector<Table> table_array; // Array of tables
    int table_count;
};


struct DatabaseManager {
    std::vector<std::shared_ptr<Database>> database_array; // Array of Databases
    std::shared_ptr<Database> current_database; // Pointer to current Database
    int database_count;
};

extern DatabaseManager database_manager;