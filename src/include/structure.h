#ifndef STRUCTURE_H
#define STRUCTURE_H

#include "../basic.h"

// To identify what each column is storing
enum DataType {
    INT,
    FLOAT,
    CHAR,
    VARCHAR
};

// To define a collective type of data allowed in a cell, size occupied would be the maximum of all i.e. char* ptr 8 bytes
typedef union {
    int int_value;
    float float_value;
    char char_value;
    char *varchar_value;
} DataValue;

// Size would be 8 bytes Datavalue + 1 byte boolean i.e. 9 bytes per cell
typedef struct {
    DataValue value;
    bool is_null;
} Cell;

typedef struct {
    Cell **cell_array; // array of Cell pointers
} Row;

typedef struct {
    char *column_name;
    enum DataType type;
} Column;

typedef struct {
    char *name;
    Column **column_array; // Array of pointers to Columns
    Row **row_array; // Array of pointers to Rows
    int column_count;
    int row_count;
} Table;

typedef struct {
    char *name;
    Table **table_array; // Array of pointer to tables
    int table_count;
} Database;

// This will be used globally and will store all the databases as well as the current database
typedef struct {
    Database **database_array; // Array of pointer to Databases
    Database *current_database; // Pointer to current Database
    int database_count;
} DatabaseManager;

extern DatabaseManager database_manager;

#endif