#include "../../include/query/database/create.hpp"
#include "./helper.cpp"

bool createDatabase(const std::string& database_name) {
    int index = getDatabaseIndex(database_name);
    if (index != -1) {
        return false;
    }
    auto new_database = std::make_unique<Database>();
    new_database->name = database_name;
    new_database->table_array.clear();
    new_database->table_count = 0;
    database_manager.database_array.push_back(std::move(new_database));
    database_manager.database_count++;
    return true;
}
