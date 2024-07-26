#include "../../include/query/database.hpp"

Response useDatabase(std::string &name){

    if(dbm.current_database->name == name){
        return errorMessage("alreadyusing");
    }

    for(int i = 0; i < dbm.count; i++){
        if(dbm.database_array[i].name == name){
            dbm.current_database = &dbm.database_array[i];
            return successMessage("OK");
        }
    }

    return errorMessage("notfound");
}