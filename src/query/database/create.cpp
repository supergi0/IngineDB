#include "../../include/query/database.hpp"

Response createDatabase(std::string &name){

    DatabaseManager dbm = getDBM();

    // check if already exists
    for(int i = 0; i < dbm.count; i++){
        if(dbm.database_array[i].name == name){
            return errorMessage("duplicate");
        }
    }

    Database new_database(name);
    dbm.database_array.push_back(new_database);

        return successMessage("OK");
};