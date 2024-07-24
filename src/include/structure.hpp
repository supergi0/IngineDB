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
    std::vector<Cell> cell_array;
    std::bitset<MAX_COLUMNS> isnull {}; 
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

    explicit Table(std::string n) : name(std::move(n)) {}
};

class Database {
public:
    std::string name;
    std::vector<Table> table_array;

    explicit Database(std::string n) : name(std::move(n)) {}
};

class DatabaseManager {
public:
    std::vector<Database> database_array;
    Database* current_database;
};