#pragma once

#include "../../structure.hpp"

class UseDatabase {
public:
    bool useDatabase(std::string &name){

        for(int i = 0; i < db_manager.count; i++){
            if(name == db_manager.database_array[i].name){
                db_manager.current_database = &db_manager.database_array[i];
                return true;
            }
        }

        return false;

    }
};