#include "../../include/structure.h"

int getDatabaseIndex(char* database_name){
    for(int i = 0; i < database_manager.database_count; i++){
        Database *db = database_manager.database_array[i];

        if(strcmp(db->name,database_name) == 0){

            return i;
        }
    }
    return -1;
}