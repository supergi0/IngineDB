#include "../include/executor/executor.hpp"

// used const char* here cuz of legacy c parsing logic, dont want to change that as of now
Response execute(const char* input) {

    return analyzeQuery(input);
}