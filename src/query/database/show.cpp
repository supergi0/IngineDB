#include "../../include/query/database/show.hpp"
#include "./helper.cpp"

std::vector<std::string> showDatabase() {
    std::vector<std::string> return_array;
    for (const auto& db : database_manager.database_array) {
        return_array.push_back(db->name);
    }
    return return_array;
}
