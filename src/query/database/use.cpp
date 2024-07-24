#include "../../include/query/database/use.hpp"
#include "./helper.cpp"

bool useDatabase(const std::string& database_name) {
    int index = getDatabaseIndex(database_name);
    if (index == -1) {
        return false;
    }
    database_manager.current_database = std::move(database_manager.database_array[index]);
    return true;
}
