# IngineDB

### Requirements

- g++ (If you are using different compiler for c++, make sure to edit all the Makefiles)
- flex
- bison

### Starting IngineDB CLI

execute following from `src/` directory
```bash
make all
```

Clean the folders by executing the following command in `src/` directory
```bash
make clean
```

## SQL statements

The parsing of IngDB is case insensitive for all tokens, except for string literals. All statements always end in a semicolon `;`

### Database Statements

```sql
-- create a new database
CREATE DATABASE MUSIC;

-- drop the database
DROP DATABASE MUSIC;

-- switch to another database
USE DATABASE MUSIC;

-- list out all databases
SHOW DATABASES;
```

### Table Statements

```sql
-- create a new table
CREATE TABLE (id INT, name VARCHAR, age INT, address VARCHAR);


-- insert a new record into a table
INSERT INTO MUSIC (id, name, age, address) VALUES (10, "Doc", 25, "ABC Street");

-- drop the table
DROP TABLE AUTHORS;

-- list out all tables
SHOW TABLES;


```

### Import Statements

```sql
-- use / for absolute path, ./ for .sql files stored in directory of the executable
@/PATH/TO/YOUR/FILE/hello.sql;
```


## Folder Structure

- `cli` : Contains the main function, defines the entry point for IngeniumDB CLI.

- `executor` : This folder defines files to provide a uniform functions for CLI, APIs and Connectors to execute queries.

- `output` : This folder defines custom and error messages as well as functions for generating tables template for CLI.

- `parser` : Contains lex and yacc files to tokenize and parse the input SQL query.

- `query` : Contains logic for different type of queries.

- `structure` : Encapsulates methods directly accessing objects of structure classes such as database, table.

- `include` : Header files defining interfaces for import usage.