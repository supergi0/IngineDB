#include "../include/query/createtable.h"

Table* createTable(const char* name, Column *columns, int column_count){

    Table *table = malloc(sizeof(Table));
    table->name = strdup(name);
    table->columns = malloc(sizeof(Column) * column_count);
    memcpy(table->columns, columns, sizeof(Column) * column_count);
    table->column_count = column_count;
    table->rows = NULL;
    table->row_count = 0;

    return table;
}