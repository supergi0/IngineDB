# IngeniumDB

### Requirements

- g++ (If you are using different compiler for c++, make sure to edit all the Makefiles)
- flex
- bison

### Starting IngeniumDB CLI

execute following from `src/` directory
```bash
make all
```

before pushing to repo make sure to clean the folders by executing the following command in `src/` directory
```bash
make clean
```

## SQL statements

The parsing of IngDB is case insensitive for all tokens, except for string literals. All statements always end in a semicolon `;`

### Database State,emts

```sql
CREATE DATABASE MUSIC;

DROP DATABASE MUSIC;

USE DATABASE MUSIC;

SHOW DATABASES;
```

### Table Statements

```sql
DROP TABLE AUTHORS;

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

### Makefile

- Make sure to not change the Makefile `src\Makefile`, rather on adding new cpp files in any of the folder make sure to link it while creating the main object file for that folder.

- This can be done in the Makefiles present `src\<folder>\Makefile`.