#include "../../include/structure.hpp"

int getDatabaseIndex(const std::string& database_name) {
    for (int i = 0; i < database_manager.database_count; i++) {
        const auto& db = database_manager.database_array[i];
        if (db->name == database_name) {
            return i;
        }
    }
    return -1;
}
