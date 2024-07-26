#pragma once

#include "./basic.hpp"

enum class DataType : uint8_t {
    INT,
    FLOAT,
    CHAR,
    VARCHAR,
    BOOLEAN
};

union DataValue {
    bool bool_value;
    int int_value;
    float float_value;
    char char_value;
    char* varchar_value;
};

class Cell {
public:
    DataValue value;
};

class Row {
public:
    Cell* cell_array;
    std::bitset<INIT_COLUMNS> isnull;

    Row(int column_count) : cell_array(new Cell[column_count]), isnull() {}

    ~Row() { delete[] cell_array; }

    void resizeCellArray(int old_column_count, int new_column_count){
        Cell* new_cell_array = new Cell[new_column_count];

        // Resizing the cell_array
        int min_count = std::min(old_column_count,new_column_count);
        for(int i = 0; i < min_count; i++){
            new_cell_array[i] = cell_array[i];
        }
        delete[] cell_array;
        cell_array = new_cell_array;

        //need to implement bitset resizing logic as well afterwards, max column size is 64 for now
    }
};

class Column {
public:
    std::string name;
    DataType type;

    explicit Column(std::string n, DataType t) : name(std::move(n)), type(t) {}
};

class Table {
public:
    std::string name;
    std::vector<Column> column_array;
    std::vector<Row> row_array;
    int column_count;
    int row_count;

    explicit Table(std::string n) : name(std::move(n)) {}

    void add_column(std::string name, DataType type){
        column_array.emplace_back(std::move(name), type);
        
        int old_column_count = column_count;
        column_count++;

        for(auto &row : row_array){
            const_cast<Row&>(row).resizeCellArray(old_column_count,column_count);
        }
    }
};

class Database {
public:
    std::string name;
    std::vector<Table> table_array;

    explicit Database(std::string n);
};

class DatabaseManager {
public:
    std::vector<Database> database_array;
    Database* current_database;
    int count;

    DatabaseManager();
};

DatabaseManager& getDBM();
