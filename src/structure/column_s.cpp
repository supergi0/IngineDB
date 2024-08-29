#include "../include/structure/column_s.hpp"

bool Column::push_back(std::string& value) {

    switch (type) {
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
        if (value.length() != 3) return false;
        get_vector<char>().push_back(value[1]);
        break;
    case DataType::VARCHAR:
        get_vector<std::string>().push_back(value);
        break;
    case DataType::BOOLEAN:
        if (value[0] == 'T' || value[0] == 't')
            get_vector<bool>().push_back(true);
        else if (value[0] == 'F' || value[0] == 'f')
            get_vector<bool>().push_back(false);
        else
            return false;
        return true;
    default:
        return false;
    }
    return true;
}