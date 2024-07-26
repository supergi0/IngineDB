#include "../../include/print.hpp"

void lineprint(std::vector<std::string> input){
    for(int i = 0; i < input.size(); i++){
        std::cout << input[i] << " ";
    }
    std::cout << "\n";
}