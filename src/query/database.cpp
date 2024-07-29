#include "../include/query/database.hpp"

Response createDatabase(std::string &name){

    // check if already exists
    for (const auto& db : dbm.database_array) {
        if (db.name == name) {
            return errorMessage("duplicate");
        }
    }

    Database new_database(name);
    dbm.database_array.push_back(new_database);

        return successMessage("OK");
};

Response dropDatabase(std::string &name){

    for (auto it = dbm.database_array.begin(); it != dbm.database_array.end(); it++) {

        if (it->name == name) {
            if (dbm.current_database && dbm.current_database->name == name) {
                dbm.current_database = nullptr;
            }

            dbm.database_array.erase(it);

            return successMessage("OK");
        }
    }

    return errorMessage("notfound");
};

std::vector<std::string> showDatabase() {

    std::vector<std::string> return_val;

    for (const auto& db : dbm.database_array) {
        return_val.push_back(db.name);
    }

    return return_val;
}

Response useDatabase(std::string &name) {

    if (dbm.current_database && dbm.current_database->name == name) {
        return errorMessage("alreadyusing");
    }

    for (auto& db : dbm.database_array) {
        if (db.name == name) {
            dbm.current_database = &db;
            return successMessage("OK");
        }
    }

    return errorMessage("notfound");
}

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

