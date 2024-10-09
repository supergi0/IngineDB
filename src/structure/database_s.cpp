#include "../include/structure/database_s.hpp"

/*
* Inserts a new table with @param table_name and @param columns_information
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