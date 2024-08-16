#include "../include/query/analyzer.hpp"


void executeQueries(node* root) {

    std::string filename = root->children[0]->children[0]->token;
    
    // Remove the '@' symbol
    if (filename[0] == '@') {
        filename = filename.substr(1);
    }

    std::ifstream file(filename, std::ifstream::binary);
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
                if (!query.empty()) {
                    query += ch;
                    Response response = analyzeQuery(query.c_str());

                    if(response.type == 1){
                        std::cout << response.message << std::endl;
                    }
                }
                query.clear();
            } else {
                query += ch;
            }
        }
    file.close();
}