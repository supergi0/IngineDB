#pragma once

#include "../../structure.hpp"

class ShowDatabase {
public:
    std::vector<std::string> showDatabase(){
        std::vector<std::string> return_val;

        for(int i = 0; i < db_manager.count; i++){
            return_val.push_back(db_manager.database_array[i].name);
        }

        return return_val;
    }
};