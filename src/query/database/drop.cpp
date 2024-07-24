#include "../../include/query/database/drop.hpp"
#include "./helper.cpp"
#include <string>
#include <memory>

bool dropDatabase(const std::string& database_name) {
    int index = getDatabaseIndex(database_name);
    if (index == -1) {
        return false;
    }
    
    database_manager.database_array.erase(database_manager.database_array.begin() + index);
    database_manager.database_count--;
    if (database_manager.current_database && database_manager.current_database->name == database_name) {
        database_manager.current_database.reset();
    }
    return true;
}
