#include "../include/print.hpp"

void lineprint(std::vector<std::string> input){
    for(int i = 0; i < input.size(); i++){
        std::cout << input[i] << " ";
    }
    std::cout << "\n";
}

void simpleTablePrint(const std::vector<std::string>& column_names, const std::vector<std::vector<std::string>>& cells) {
    if (column_names.empty() || cells.empty()) return;

    // Calculate the maximum width for each column
    std::vector<size_t> column_widths(column_names.size());
    for (size_t i = 0; i < column_names.size(); ++i) {
        column_widths[i] = column_names[i].length();
        for (const auto& row : cells) {
            if (i < row.size()) {
                column_widths[i] = std::max(column_widths[i], row[i].length());
            }
        }
    }

    // Print the top border
    std::cout << "+";
    for (const auto& width : column_widths) {
        std::cout << std::string(width + 2, '-') << "+";
    }
    std::cout << "\n";

    // Print the column names
    std::cout << "|";
    for (size_t i = 0; i < column_names.size(); ++i) {
        std::cout << " " << std::setw(column_widths[i]) << std::left << column_names[i] << " |";
    }
    std::cout << "\n";

    // Print the separator
    std::cout << "+";
    for (const auto& width : column_widths) {
        std::cout << std::string(width + 2, '-') << "+";
    }
    std::cout << "\n";

    // Print the data
    for (const auto& row : cells) {
        std::cout << "|";
        for (size_t i = 0; i < column_names.size(); ++i) {
            if (i < row.size()) {
                std::cout << " " << std::setw(column_widths[i]) << std::left << row[i] << " |";
            } else {
                std::cout << " " << std::string(column_widths[i], ' ') << " |";
            }
        }
        std::cout << "\n";
    }

    // Print the bottom border
    std::cout << "+";
    for (const auto& width : column_widths) {
        std::cout << std::string(width + 2, '-') << "+";
    }
    std::cout << "\n";
}
