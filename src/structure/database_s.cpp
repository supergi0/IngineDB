#include "../include/structure/database_s.hpp"

bool Database::add(std::string name){
    return true;
}

bool Database::remove(std::string name){
    for(auto it = table_array.begin(); it != table_array.end(); it++){
        if(it->name == name){
            table_array.erase(it);
            return true;
        }
    }

    return false;
}

bool Database::exists(std::string name){
    for(auto &tb: table_array){
        if(name == tb.name){
            return true;
        }
    }

    return false;
}

std::vector<std::string> Database::get_tables(){
    std::vector<std::string> returnval;

    for(auto& tb: table_array){
        returnval.push_back(tb.name);
    }

    return returnval;
}