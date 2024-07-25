#include "../include/parser/parser.hpp"

// used const char* here cuz of legacy c parsing logic, dont want to change that as of now
std::string execute(const char* input) {

    std::string return_val;

    parseInput(input);

    return return_val;
}