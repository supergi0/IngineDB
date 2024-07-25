#include "../include/executor/executor.hpp"
#include "./message.cpp"

int main(){

    std::string command;
    std::string line;

    printInitMessage();

    while(true){
        if(command.empty()){
        std:: cout << "ingdb> ";
        }
        else{
            std:: cout << "    -> ";
        }
        std::getline(std::cin,line);

        if(line.empty() && command.empty()){
            continue;
        }

        command += line + " ";

        if(line == "help"){
            printHelpMessage();
            command.clear();
        }
        else if(line == "exit"){
            break;
        }
        else if(line == "clear"){
            std::cout << "\033[2J\033[1;1H";
            printInitMessage();
            command.clear();
            continue;
        }

        if(line.find(';') != std::string::npos){

            auto start = std::chrono::high_resolution_clock::now();

            std::string output = execute(command.c_str());

            auto end = std::chrono::high_resolution_clock::now();

            std::cout << output << "\n";

            auto duration  = std::chrono::duration_cast<std::chrono::milliseconds>(end-start);
            std::cout << "executed in " << duration.count() / 1000.0 << " seconds\n";

            command.clear();
        }
    }

    return 0;
}