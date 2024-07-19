#ifndef CREATETABLE_H
#define CREATETABLE_H

#include "structure.h"

Table* createTable(const char* table_name, Column* column_names,int column_count);

#endif