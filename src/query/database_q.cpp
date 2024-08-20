#include "../include/query/database_q.hpp"

Response createDatabase(node* root){
    // use database statement -> identifier -> name
    std::string name = root->children[2]->children[0]->token;

    // check if already exists
    if(dbm.exists(name)){
        return databaseErrorMessage("duplicate");
    }

    dbm.add(name);

    return successMessage("OK");
};

Response dropDatabase(node* root){
    // use database statement -> identifier -> name
    std::string name = root->children[2]->children[0]->token;

    // check if exists
    if(dbm.exists(name)){
        dbm.remove(name);
        return successMessage("OK");
    }

    return databaseErrorMessage("notfound");
};

Response showDatabase() {
    std::vector<std::vector<std::string>> simple_table;

    std::vector<std::string> databases = dbm.get_databases();

    for (const auto& db : databases) {
        simple_table.push_back({db});
    }

    simpleTablePrint({"show databases"},simple_table);

    return successMessage("OK");
}

Response useDatabase(node* root) {
    // use database statement -> identifier -> name
    std::string name = root->children[2]->children[0]->token;

    if (dbm.get_current() == name) {
        return databaseErrorMessage("alreadyusing");
    }

    if(!dbm.exists(name)){
        return databaseErrorMessage("notfound");
    }

    dbm.set_current(name);
    return successMessage("OK");
}

