#include "../include/structure/column_s.hpp"

bool Column::push_back(std::string& value){
    switch (type)
    {
    case DataType::INT:
        get_vector<int>().push_back(std::stoi(value));
        break;
    case DataType::FLOAT:
        get_vector<float>().push_back(std::stof(value));
        break;
    case DataType::DOUBLE:
        get_vector<double>().push_back(std::stod(value));
        break;
    case DataType::CHAR:
        if (value.length() != 1) return false;
        get_vector<char>().push_back(value[0]);
        break;
    case DataType::VARCHAR:
        get_vector<std::string>().push_back(value);
        break;
    case DataType::BOOLEAN:
        if (value == "TRUE" || value == "1")
            get_vector<bool>().push_back(true);
        else if (value == "FALSE" || value == "0")
            get_vector<bool>().push_back(false);
        else
            return false;
        break;
    default:
        return false;
    }
    return true;
}