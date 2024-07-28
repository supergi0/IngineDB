#include "../include/query/database.hpp"

Response createDatabase(std::string &name){

    DatabaseManager dbm = getDBM();

    // check if already exists
    for(int i = 0; i < dbm.count; i++){
        if(dbm.database_array[i].name == name){
            return errorMessage("duplicate");
        }
    }

    Database new_database(name);
    dbm.database_array.push_back(new_database);

        return successMessage("OK");
};

Response dropDatabase(std::string &name){

    DatabaseManager dbm = getDBM();

    for(int i = 0; i < dbm.count; i++){
        if(dbm.database_array[i].name == name){

            // First drop the ptr to the current Db then delete from the array
            if (dbm.current_database && dbm.current_database->name == name) {
                dbm.current_database = nullptr;
            }
            
            dbm.database_array.erase(dbm.database_array.begin() + i);
            dbm.count--;


            return successMessage("OK");
        }
    }

    return errorMessage("notfound");
};

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

std::vector<std::string> showDatabase(){

    DatabaseManager dbm = getDBM();

    std::vector<std::string> return_val;

    for(int i = 0; i < dbm.count; i++){
        return_val.push_back(dbm.database_array[i].name);
    }

    return return_val;
}

Response useDatabase(std::string &name){

    DatabaseManager dbm = getDBM();

    if(dbm.current_database->name == name){
        return errorMessage("alreadyusing");
    }

    for(int i = 0; i < dbm.count; i++){
        if(dbm.database_array[i].name == name){
            dbm.current_database = &dbm.database_array[i];
            return successMessage("OK");
        }
    }

    return errorMessage("notfound");
}

