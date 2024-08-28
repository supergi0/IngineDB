#include "../include/structure/database_s.hpp"

/*
depreciated do not use these functions for intensive queries
*/ 

bool Database::add(std::string table_name,std::vector<Column_s> columns_information){

    std::vector<DataType> column_types;

    for(auto& column_information : columns_information){
        if(column_information.type == "INT_TYPE"){
            column_types.push_back(DataType::INT);
        }
        else if(column_information.type == "FLOAT_TYPE"){
            column_types.push_back(DataType::FLOAT);
        }
        else if(column_information.type == "BOOLEAN_TYPE"){
            column_types.push_back(DataType::BOOLEAN);
        }
        else if(column_information.type == "VARCHAR_TYPE"){
            column_types.push_back(DataType::VARCHAR);
        }
        else if(column_information.type == "CHAR_TYPE"){
            column_types.push_back(DataType::CHAR);
        }
        else{
            return false;
        }
    }

    table_array.push_back({table_name,column_types});

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