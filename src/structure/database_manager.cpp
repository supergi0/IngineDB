#include "../include/structure/database_manager.hpp"

bool DatabaseManager::set_current(std::string name){
    for(auto &db: database_array){
        if(name == db.name){
            current_database = &db;
            return true;
        }
    }
    return false;
}

std::string DatabaseManager::get_current(){
    if(current_database){
        return current_database->name;
    }
    return "";
}

std::vector<std::string> DatabaseManager::get_databases(){
    std::vector<std::string> returnval;

    for(auto& db: database_array){
        returnval.push_back(db.name);
    }

    return returnval;
}

bool DatabaseManager::isset(){
    if(current_database) return true;
    return false;
}

bool DatabaseManager::exists(std::string name){
    for(auto &db: database_array){
        if(name == db.name){
            return true;
        }
    }
    return false;
}

bool DatabaseManager::remove(std::string name){
    for(auto it = database_array.begin(); it != database_array.end(); it++){
        if(it->name == name){

            if(current_database && current_database->name == name){
                current_database = nullptr;
            }
            database_array.erase(it);

            return true;
        }
    }
    return false;
}

bool DatabaseManager::add(std::string name){
    Database newdatabase(name);
    database_array.push_back(newdatabase);

    return true;
}