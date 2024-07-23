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
    char* varchar_value;
} DataValue;

// A basic cell consisting of only the value and flag for null values
// Type checking we can do by mapping the cells array with the column array
// Size would be 8 bytes Datavalue + 1 byte boolean i.e. 9 bytes per cell
typedef struct {
    DataValue value;
    bool is_null; // to mark a cell has null value
} Cell;

// Array for cells defining a single row
typedef struct {
    Cell* cells;
} Row;

// This will hold the datatype for the entire column
typedef struct {
    char* column_name;
    enum DataType type;
} Column;

typedef struct {
    char *name;
    Column *columns; // Pointer to column structs
    Row* rows; // Pointer to row structs
    int column_count;
    int row_count;
} Table;

typedef struct {
    Table* tables; // Pointer to table structs
    int table_count;
} Database;

#endif