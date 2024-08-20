#include "../include/query/table_q.hpp"

Response createTable(node* root){

    if(!dbm.isset()) return databaseErrorMessage("notset");

    std::string name = root->children[2]->children[0]->token;

    if(dbm.current_database->exists(name)){
        return tableErrorMessage("duplicate");
    }

    // this corresponds to column definitions node from the parser
    // will get freed when full parse tree is cleared hence no need to free this resource
    node* curr_column = root->children[4];

    std::vector<Column_s> columns_information;

    while(curr_column){

        if(curr_column->token == "column_definitions"){
            if(curr_column->children[2]){
                //the node splits to more columns, i.e. we havent reached the end of columns 

                // column information will be in 3rd node 
                std::string column_name = curr_column->children[2]->children[0]->token;
                std::string column_type = curr_column->children[2]->children[1]->token;

                columns_information.push_back({column_name,column_type});
            }
            else{
                // only single node left i.e. we reached the end of the columns

                // column information will be in 1st node
                // column_definitions -> column_definition -> id/type -> string
                std::string column_name = curr_column->children[0]->children[0]->token;
                std::string column_type = curr_column->children[0]->children[1]->token;

                columns_information.push_back({column_name,column_type});
            }
        }

        curr_column = curr_column->children[0];
    }

    dbm.current_database->add(name,columns_information);
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