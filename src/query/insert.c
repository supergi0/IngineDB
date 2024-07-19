#include "../include/query/insert.h"

int insert_row(Table *table, void *data) {
    // Increase the size of the rows array by 1
    
    void **new_rows = realloc(table->rows, sizeof(void*) * (table->row_count + 1));
    if (new_rows == NULL) {
        return 0;
    }
    
    table->rows = new_rows;
    table->rows[table->row_count] = data;
    table->row_count++;
    
    return 1;
}