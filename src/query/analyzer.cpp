#include "../include/query/analyzer.hpp"

Response analyzeQuery(const char* input) {
    node* root = getParseTree(input);
    Response response;

    if (root && root->children[0]) {
        // base query statement
        std::string base_query_statement = root->children[0]->token;

        if (base_query_statement == "use_database_statement") {
            response = useDatabase(root->children[0]);
        } 
        else if (base_query_statement == "create_database_statement") {
            response = createDatabase(root->children[0]);
        } 
        else if (base_query_statement == "drop_database_statement") {
            response = dropDatabase(root->children[0]);
        } 
        else if (base_query_statement == "show_database_statement") {
            response = showDatabase();
        } 
        else if (base_query_statement == "show_table_statement") {
            response = showTable();
        } 
        else if (base_query_statement == "drop_table_statement") {
            response = dropTable(root->children[0]);
        } 
        else if (base_query_statement == "create_table_statement") {
            response = createTable(root->children[0]);
        } 
        else if (base_query_statement == "at_file_statement") {
            executeQueries(root->children[0]);
            response = successMessage("DONE");
        } 
        else {
            response = Response({1, "Parsed but no query analyzer implemented"});
        }
    } else {
        response = Response({1, "Malformed parse tree"});
    }

    // Free the memory occupied by the parse tree
    deleteNode(root);

    return response;
}