#pragma once

#include "../../structure.hpp"

class DropDatabase {
public:
    bool dropDatabase(std::string &name){

        for(int i = 0; i < db_manager.count; i++){
            if(db_manager.database_array[i].name == name){

                db_manager.database_array.erase(db_manager.database_array.begin() + i);
                db_manager.count--;

                if (db_manager.current_database && db_manager.current_database->name == name) {
                    db_manager.current_database = nullptr;
                }
                return true;
            }
        }

        return false;
    }
};