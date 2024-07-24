#include "../../include/query/database/show.h"
#include "./helper.cpp"

char* showDatabase(){
    char** return_array = malloc((database_manager.database_count + 1) * sizeof(char*));

    for(int i = 0; i < database_manager.database_count; i++){
        return_array[i] = strdup(database_manager.database_array[i]->name);
    }

    return_array[database_manager.database_count] = NULL;

    // remember to free this memory
    return return_array;
}