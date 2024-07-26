#include "../../include/query/database.hpp"

std::vector<std::string> showDatabase(){

    DatabaseManager dbm = getDBM();

    std::vector<std::string> return_val;

    for(int i = 0; i < dbm.count; i++){
        return_val.push_back(dbm.database_array[i].name);
    }

    return return_val;
}