#include "../include/structure/database_manager.hpp"

Response DatabaseManager::createDatabase(node* root){

    // use database statement -> identifier -> name
    std::string name = root->children[2]->children[0]->token;

    // check if already exists
    for (const auto& db : dbm.database_array) {
        if (db.name == name) {
            return databaseErrorMessage("duplicate");
        }
    }

    Database new_database(name);
    dbm.database_array.push_back(new_database);

        return successMessage("OK");
};

Response DatabaseManager::dropDatabase(node* root){

    // use database statement -> identifier -> name
    std::string name = root->children[2]->children[0]->token;

    for (auto it = dbm.database_array.begin(); it != dbm.database_array.end(); it++) {

        if (it->name == name) {
            if (dbm.current_database && dbm.current_database->name == name) {
                dbm.current_database = nullptr;
            }

            dbm.database_array.erase(it);

            return successMessage("OK");
        }
    }

    return databaseErrorMessage("notfound");
};

Response DatabaseManager::showDatabase() {

    std::vector<std::vector<std::string>> simple_table;

    for (const auto& db : dbm.database_array) {
        simple_table.push_back({db.name});
    }

    simpleTablePrint({"show databases;"},simple_table);

    return successMessage("OK");
}

Response DatabaseManager::useDatabase(node* root) {

    // use database statement -> identifier -> name
    std::string name = root->children[2]->children[0]->token;

    if (dbm.current_database && dbm.current_database->name == name) {
        return databaseErrorMessage("alreadyusing");
    }

    for (auto& db : dbm.database_array) {
        if (db.name == name) {
            dbm.current_database = &db;
            return successMessage("OK");
        }
    }

    return databaseErrorMessage("notfound");
}

