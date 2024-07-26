#include "../include/query/analyzer.hpp"
#include "../include/print.hpp"

Response analyzeQuery(const char* input){

    node* root = getParseTree(input);

    if(!root){
        // head is null some parsing error occured
        return Response({1,"Unknown error in parsing"});
    }

    // going forward lets make this the recursive function responsible for analyzing the parse tree
    return traverseNode(root);
}

Response traverseNode(node* curr){

    std::string node_type = curr->children[0]->token;

    if(node_type == "use_database_statement"){
        std::string name = curr->children[2]->token;
        
        return useDatabase(name);
    }
    else if(node_type == "create_database_statement"){
        std::string name = curr->children[2]->token;

        return createDatabase(name);
    }
    else if(node_type == "drop_database_statement"){
        std::string name = curr->children[2]->token;

        return dropDatabase(name);
    }
    else if(node_type == "show_database_statement"){
        std::vector<std::string> database_names = showDatabase();
        lineprint(database_names);

        return Response({0,"OK"});
    }
    else {
        return Response({1,"BAD INPUT"});
    }
}