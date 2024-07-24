#include "../../include/query/database/create.h"
#include "./helper.cpp"

bool createDatabase(char* database_name){
    int index = getDatabaseIndex(database_name);

    if(index == -1){
        return false;
    }

    Database *new_database = malloc(sizeof(Database));
    if(!checkMemoryAvailable(new_database)){
        return false;
    }

    new_database->name = strdup(database_name);
    new_database->table_array = NULL;
    new_database->table_count = 0;

    database_manager.database_array[database_manager.database_count] = new_database;
    database_manager.database_count++;

    return true;
}