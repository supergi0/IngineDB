#include "../../include/query/database.hpp"

Response dropDatabase(std::string &name){

    DatabaseManager dbm = getDBM();

    for(int i = 0; i < dbm.count; i++){
        if(dbm.database_array[i].name == name){

            // First drop the ptr to the current Db then delete from the array
            if (dbm.current_database && dbm.current_database->name == name) {
                dbm.current_database = nullptr;
            }
            
            dbm.database_array.erase(dbm.database_array.begin() + i);
            dbm.count--;


            return successMessage("OK");
        }
    }

    return errorMessage("notfound");
};