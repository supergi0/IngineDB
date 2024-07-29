#include "../include/query/analyzer.hpp"

Response analyzeQuery(const char* input){

    node* root = getParseTree(input);

    if(root && root->children[0] && root->children[0]->token){

        // base query statement
        std::string base_query_statement = root->children[0]->token;

        if(base_query_statement == "use_database_statement"){
            return useDatabase(root->children[0]);
        }
        else if(base_query_statement == "create_database_statement"){
            return createDatabase(root->children[0]);
        }
        else if(base_query_statement == "drop_database_statement"){
            return dropDatabase(root->children[0]);
        }
        else if(base_query_statement == "show_database_statement"){
            return showDatabase();
        }
        else {
            return Response({1,"Parsed but no query analyzer implemented"});
        }
    }
    else{
        return Response({1,"Malformed parse tree"});
    }

}