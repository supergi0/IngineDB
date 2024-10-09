#include "../include/query/table_q.hpp"

Response createTable(node* root){

    if(!dbm.current_database){
        return databaseErrorMessage("Database not selected");
    }

    std::string name = root->children[2]->children[0]->token;

    for(auto& tb: dbm.current_database->table_array){
        if(tb.name == name){
            return tableErrorMessage("Table already exists");
        }
    }

    // this corresponds to column definitions node from the parser
    // will get freed when full parse tree is cleared hence no need to free this resource
    node* curr_column = root->children[4];

    std::vector<Column_s> columns_information;

    while(curr_column){

        if(strcmp(curr_column->token,"column_definitions")==0){

            if(curr_column->children[2]){
                //the node splits to more columns, i.e. we havent reached the end of columns 

                // column information will be in 3rd node 
                std::string column_name = curr_column->children[2]->children[0]->children[0]->token;
                std::string column_type = curr_column->children[2]->children[1]->children[0]->token;

                columns_information.push_back({column_name,column_type});
            }
            else{
                // only single node left i.e. we reached the end of the columns

                // column information will be in 1st node
                // column_definitions -> column_definition -> id/type -> string
                std::string column_name = curr_column->children[0]->children[0]->children[0]->token;
                std::string column_type = curr_column->children[0]->children[1]->children[0]->token;

                columns_information.push_back({column_name,column_type});
            }
        }

        curr_column = curr_column->children[0];
    }

    if(dbm.current_database->add(name,columns_information)){
    return successMessage("OK");
    }

    return tableErrorMessage("Unknown Column type");
};

Response dropTable(node* root){

    if(!dbm.current_database){
        return databaseErrorMessage("Database not selected");
    }

    if(root->children[2]->children[0]->token){
    
    std::cout << root->children[2]->children[0]->token << "\n";
    }

    std::string name = root->children[2]->children[0]->token;

    for(auto it = dbm.current_database->table_array.begin(); it != dbm.current_database->table_array.end(); it++){
        if(it->name == name){
            dbm.current_database->table_array.erase(it);
            return successMessage("OK");
        }
    }

    return tableErrorMessage("Table not found");
};

Response showTable(){

    if(!dbm.current_database){
        return databaseErrorMessage("Database not selected");
    }

    std::vector<std::vector<std::string>> simple_table;

    for(auto& tb: dbm.current_database->table_array){
        simple_table.push_back({tb.name});
    }

    simpleTablePrint({"show tables"},simple_table);
    
    return successMessage("OK");
};

Response insertTable(node * root){

    if(!dbm.current_database){
        return databaseErrorMessage("Database not selected");
    }

    // insert_table_statement -> identifier -> name -> string
    std::string name = root->children[2]->children[0]->token;

    // get the current table object
    Table* target_table = nullptr;
    for(auto& table: dbm.current_database->table_array){
        if(table.name == name){
            target_table = &table;
            break;
        }
    }

    // if table does not exist then exit
    if(!target_table){
        return tableErrorMessage("Table not found");
    }

    // get the columns from the input parse tree
    std::vector<std::string> column_names;
    node* curr_column_name = root->children[4];

    while(curr_column_name){
        if(strcmp(curr_column_name->token,"column_list") == 0){
            if(curr_column_name->children[2]){
                //the node splits to more columns, i.e. we havent reached the end of columns 
                column_names.push_back(curr_column_name->children[2]->children[0]->token);
            }
            else{
                // reached the end of columns
                column_names.push_back(curr_column_name->children[0]->children[0]->token);
            }
        }

        curr_column_name = curr_column_name->children[0];
    }

    // get the values from the input parse tree
    std::vector<std::string> values;
    node* value_list_node = root->children[8];

    while (value_list_node) {
        if (strcmp(value_list_node->token,"value_list") == 0) {
            if(value_list_node->children[2]){
                //the node splits to more columns, i.e. we havent reached the end of columns 
                values.push_back(value_list_node->children[2]->children[0]->children[0]->token);
            }
            else{
                // reached the end of columns
                values.push_back(value_list_node->children[0]->children[0]->children[0]->token);
            }
        }

        value_list_node = value_list_node->children[0];
    }

    // check if sizes of all the columns are same or not
    if (column_names.size() != values.size() || values.size() != target_table->column_array.size()) {
        return tableErrorMessage("Column value size mismatch");
    }

    for(int i = 0; i < values.size(); i++){
        Column& column = target_table->column_array[i];

        if(!column.push_back(values[i])){
            return tableErrorMessage("Column value type mismatch");
        }
    }

    return successMessage("OK");

}