#ifndef STRUCTURE_H
#define STRUCTURE_H

#include "../basic.h"

enum DataType {
    INT,
    FLOAT,
    CHAR,
    VARCHAR
};

typedef struct {
    char *name;
    enum DataType type;
} Column;


// 2d array for rows, kept as flexible void pointers
typedef struct {
    char *name;
    Column *columns;
    void **rows;
    int column_count;
    int row_count;
} Table;

#endif 