#pragma once

#include "./column.hpp"

class Table {
public:
    std::string name;
    std::vector<Column> column_array;

    Table(std::string name, const std::vector<DataType>& types) : name(name) {
        for(const auto& type : types){
            column_array.emplace_back(type);
        }
    }
};