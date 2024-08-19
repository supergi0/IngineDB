#include "../include/query/table.hpp"

Response createTable(node* root){

    if(!dbm.isset()) return databaseErrorMessage("notset");

    std::string name = root->children[2]->children[0]->token;

    if(dbm.current_database->exists(name)){
        return tableErrorMessage("duplicate");
    }

    dbm.current_database->add(name);
    return successMessage("OK");
};

Response dropTable(node* root){

    if(!dbm.isset()) return databaseErrorMessage("notset");

    if(root->children[2]->children[0]->token){
    
    std::cout << root->children[2]->children[0]->token << "\n";
    }

    std::string name = root->children[2]->children[0]->token;

    if(dbm.current_database->exists(name)){
        dbm.current_database->remove(name);
        return successMessage("OK");
    }
    return tableErrorMessage("notfound");
};

Response showTable(){

    if(!dbm.isset()) return databaseErrorMessage("notset");

    std::vector<std::vector<std::string>> simple_table;

    std::vector<std::string> tables = dbm.current_database->get_tables();

    for(const auto& tb : tables){
        simple_table.push_back({tb});
    }

    simpleTablePrint({"show tables"},simple_table);
    
    return successMessage("OK");
};