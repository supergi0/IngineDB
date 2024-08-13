#pragma once

#include "../basic.hpp"


// Response messages defined under here --------

typedef struct Response{
    int type; // 0 -> successful | >0 -> error 
    std::string message; // Specific message to be sent
} Response;

Response successMessage(const std::string &message);

Response databaseErrorMessage(const std::string &type);

Response tableErrorMessage(const std::string &type);

// Basic cli print messages defined under here ----------

void printInitMessage();

void printHelpMessage();

void lineprint(std::vector<std::string> input);

void simpleTablePrint(const std::vector<std::string>& column_names, const std::vector<std::vector<std::string>>& cells);