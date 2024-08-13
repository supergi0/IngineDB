#include "../include/query/analyzer.hpp"

void executeQueries(node* root) {

    std::string filename = root->children[0]->children[0]->token;
    
    // Remove the '@' symbol if present
    if (filename[0] == '@') {
        filename = filename.substr(1);
    }

    // Open the file
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return;
    }

    std::string query;
    char ch;
    bool in_quotes = false;

    while (file.get(ch)) {
        if (ch == '"') {
            in_quotes = !in_quotes;
        }

        if (ch == ';' && !in_quotes) {
            // End of query
            if (!query.empty()) {
                // Trim leading and trailing whitespace
                query.erase(0, query.find_first_not_of(" \n\r\t"));
                query.erase(query.find_last_not_of(" \n\r\t") + 1);

                if (!query.empty()) {
                    Response response = analyzeQuery(query.c_str());
                    
                    std:: cout << response.message << std::endl;
                }
            }
            query.clear();
        } else {
            query += ch;
        }
    }

    // Check for any remaining query
    if (!query.empty()) {
        query.erase(0, query.find_first_not_of(" \n\r\t"));
        query.erase(query.find_last_not_of(" \n\r\t") + 1);
        if (!query.empty()) {
            Response response = analyzeQuery(query.c_str());
            
            std:: cout << response.message << std::endl;
        }
    }

    file.close();
}