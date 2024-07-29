#pragma once

#include "./basic.hpp"
#include "./response.hpp"

void lineprint(std::vector<std::string> input);

void simpleTablePrint(const std::vector<std::string>& column_names, const std::vector<std::vector<std::string>>& cells);

Response databaseErrorMessage(const std::string &type);

void printInitMessage();

void printHelpMessage();

Response successMessage(const std::string &message);