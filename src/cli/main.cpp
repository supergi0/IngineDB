#include "../include/cli/cli.hpp"

DatabaseManager dbm;

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

        if(line == "help" || line == "help;"){
            printHelpMessage();
            command.clear();
        }
        else if(line == "exit" || line == "exit;"){
            break;
        }
        else if(line == "clear" || line == "clear;"){
            std::cout << "\033[2J\033[1;1H";
            printInitMessage();
            command.clear();
            continue;
        }

        if(line.find(';') != std::string::npos){

            auto start = std::chrono::high_resolution_clock::now();

            Response output = execute(command.c_str());

            auto end = std::chrono::high_resolution_clock::now();

            std::cout << output.message;

            auto duration  = std::chrono::duration_cast<std::chrono::microseconds>(end-start);

            std::cout << std::fixed << std::setprecision(6) << ", executed in " << duration.count() / 1000000.0 << " seconds\n\n";

            command.clear();
        }
    }

    return 0;
}
