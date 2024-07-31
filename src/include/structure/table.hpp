#pragma once

#include "./column.hpp"

class Table {
public:
    std::string name;

    Table(std::string name) : name(name) {}
};