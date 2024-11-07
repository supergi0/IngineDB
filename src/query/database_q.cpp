#include "../include/query/database_q.hpp"

Response createDatabase(node *root)
{
    // use database statement -> identifier -> name
    std::string name = root->children[2]->children[0]->token;

    for (auto &db : dbm.database_array)
    {
        if (db.name == name)
        {
            return databaseErrorMessage("Database already exists");
        }
    }
    dbm.database_array.push_back(Database(name));

    return successMessage("OK");
};

Response dropDatabase(node *root)
{
    // use database statement -> identifier -> name
    std::string name = root->children[2]->children[0]->token;

    for (auto it = dbm.database_array.begin(); it != dbm.database_array.end(); it++)
    {
        if (it->name == name)
        {

            if (dbm.current_database && dbm.current_database->name == name)
            {
                dbm.current_database = nullptr;
            }
            dbm.database_array.erase(it);

            return successMessage("OK");
        }
    }

    return databaseErrorMessage("Database not found");
};

Response showDatabase()
{
    std::vector<std::vector<std::string>> simple_table;

    for (auto &db : dbm.database_array)
    {
        simple_table.push_back({db.name});
    }

    simpleTablePrint({"show databases"}, simple_table);

    return successMessage("OK");
}

Response useDatabase(node *root)
{
    // use database statement -> identifier -> name
    std::string name = root->children[2]->children[0]->token;

    for (auto &db : dbm.database_array)
    {
        if (db.name == name)
        {

            if (dbm.current_database && dbm.current_database->name == name)
            {
                return successMessage("OK");
            }

            dbm.current_database = &db;

            return successMessage("OK");
        }
    }

    return databaseErrorMessage("Database not found");
}
