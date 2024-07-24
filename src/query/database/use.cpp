#include "../../include/query/database/use.h"
#include "./helper.cpp"

bool useDatabase(char* database_name){
    int index = getDatabaseIndex(database_name);

    if(index == -1){
        return false;
    }

    database_manager.current_database = database_manager.database_array[index];
    return true;
}