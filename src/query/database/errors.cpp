#include "../../include/query/database.hpp"

Response errorMessage(const std::string &type){
    if(type == "duplicate"){
        return Response({1,"Database already exists"});
    }
    else if(type == "notfound"){
        return Response({1,"Database does not exist"});
    }
    else if(type == "alreadyusing"){
        return Response({1,"Already using the database"});
    }
    else{
        return Response({1,"Something went wrong.."});
    }
}

