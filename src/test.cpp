#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DB_NAME_LENGTH 20
#define NUM_STATEMENTS 1000000

void generate_random_string(char *str, size_t length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyz";
    for (size_t i = 0; i < length; i++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        str[i] = charset[key];
    }
    str[length] = '\0';
}

int main() {
    FILE *file;
    char db_name[DB_NAME_LENGTH + 1];

    // Seed the random number generator
    srand(time(NULL));

    // Open the file for writing
    file = fopen("hello.sql", "w");
    if (file == NULL) {
        perror("Failed to open file");
        return 1;
    }

    // Write 10,000 SQL statements to the file
    for (int i = 0; i < NUM_STATEMENTS; i++) {
        // Generate a random database name
        generate_random_string(db_name, DB_NAME_LENGTH);

        // Write the SQL statements to the file
        fprintf(file, "CREATE DATABASE %s;\n", db_name);
        fprintf(file, "USE DATABASE %s;\n", db_name);
        fprintf(file, "DROP DATABASE %s;\n", db_name);
    }

    // Close the file
    fclose(file);

    printf("10,000 SQL statements written to hello.sql\n");

    return 0;
}