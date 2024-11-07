#pragma once
#include "../basic.hpp"

enum class DataType : uint8_t
{
    INT,
    FLOAT,
    DOUBLE,
    CHAR,
    VARCHAR,
    BOOLEAN
};

class Column
{
public:
    DataType type;
    std::variant<std::vector<int>,
                 std::vector<float>,
                 std::vector<double>,
                 std::vector<char>,
                 std::vector<std::string>,
                 std::vector<bool>>
        data;

    Column(DataType t) : type(t)
    {
        switch (type)
        {
        case DataType::INT:
            data = std::vector<int>();
            break;
        case DataType::FLOAT:
            data = std::vector<float>();
            break;
        case DataType::DOUBLE:
            data = std::vector<double>();
            break;
        case DataType::CHAR:
            data = std::vector<char>();
            break;
        case DataType::VARCHAR:
            data = std::vector<std::string>();
            break;
        case DataType::BOOLEAN:
            data = std::vector<bool>();
            break;
        }
    }

    template <typename T>
    std::vector<T> &get_vector()
    {
        return std::get<std::vector<T>>(data);
    }

    template <typename T>
    T &operator[](size_t index)
    {
        return get_vector<T>().at(index);
    }

    template <typename T>
    const T &operator[](size_t index) const
    {
        return get_vector<T>().at(index);
    }

    bool push_back(std::string &value);
};