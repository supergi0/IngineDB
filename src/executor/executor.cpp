#include "../include/executor/executor.hpp"

DatabaseManager& getDBM() {
    static DatabaseManager instance;
    return instance;
}

// used const char* here cuz of legacy c parsing logic, dont want to change that as of now
Response execute(const char* input) {

    return analyzeQuery(input);
}

Database::Database(std::string n) : name(std::move(n)) {}

DatabaseManager::DatabaseManager() : current_database(nullptr), count(0) {}