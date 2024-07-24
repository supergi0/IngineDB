#include "../../include/query/database/drop.h"
#include "./helper.cpp"

bool dropDatabase(char* database_name) {
    int index = getDatabaseIndex(database_name);

    if (index == -1) {
        // Database not found
        return false;
    }

    // Free all the memory allocations inside the DB
    Database* db = database_manager.database_array[index];
    for (int i = 0; i < db->table_count; i++) {
        Table* table = db->table_array[i];
        for (int j = 0; j < table->row_count; j++) {
            Row* row = table->row_array[j];
            for (int k = 0; k < table->column_count; k++) {
                Cell* cell = row->cell_array[k];
                if (table->column_array[k]->type == VARCHAR) {
                    free(cell->value.varchar_value); // Seperate logic for freeing the varchar array as well
                }
                free(cell);
            }
            free(row->cell_array);
            free(row);
        }
        free(table->row_array);

        for (int j = 0; j < table->column_count; j++) {
            free(table->column_array[j]->column_name); 
            free(table->column_array[j]);
        }
        free(table->column_array); 

        free(table->name);
        free(table);
    }
    free(db->table_array);
    free(db->name);
    free(db);

    // Shift the remaining databases in the array to fill the gap
    for (int i = index; i < database_manager.database_count - 1; i++) {
        database_manager.database_array[i] = database_manager.database_array[i + 1];
    }
    database_manager.database_count--;

    // If the dropped database was the current database, set current_database to NULL
    if (database_manager.current_database == db) {
        database_manager.current_database = NULL;
    }

    return true;
}