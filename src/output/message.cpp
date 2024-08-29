#include "../include/output/output.hpp"

void printInitMessage(){
    std:: cout << "\nWelcome to IngenimumDB. Commands end with ;\n";

    std:: cout << "Server version: v0.0.1\n\n";

    std:: cout << "Type 'help' for help. Type 'exit' to end from the current server instance\n\n";
}

void printHelpMessage(){
    std:: cout << "Hello there is no help here\n";
}

Response successMessage(const std::string &message){
    return Response({0, message});
}

Response databaseErrorMessage(const std::string &type){
    if(type == "duplicate"){
        return Response({1,"Database already exists"});
    }
    else if(type == "notfound"){
        return Response({1,"Database does not exist"});
    }
    else if(type == "alreadyusing"){
        return Response({1,"Already using the database"});
    }
    else if(type == "notset"){
        return Response({1,"Select a database before executing queries"});
    }
    else{
        return Response({1,"Something went wrong.."});
    }
}

Response tableErrorMessage(const std::string &type){
    if(type == "duplicate"){
        return Response({1,"Table already exists"});
    }
    else if(type == "notfound"){
        return Response({1,"Table does not exist"});
    }
    else if(type == "columnunknown"){
        return Response({1,"Column already exists"});
    }
    else if(type == "columnmismatch"){
        return Response({1,"Number of columns and number of arguments do not match"});
    }
    else if(type == "invalidvalue"){
        return Response({1,"Invalid value set for Column"});
    }
    else{
        return Response({1,"Something went wrong.."});
    }
}