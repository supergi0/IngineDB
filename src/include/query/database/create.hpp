#pragma once

#include "../../structure.hpp"

class CreateDatabase {
public:
    bool createDatabase(std::string &name){

        for(int i = 0; i < db_manager.count; i++){
            if(db_manager.database_array[i].name == name){
                return false;
            }
        }

        Database new_database(name);
        db_manager.database_array.push_back(new_database);

        return true;
    }
};
