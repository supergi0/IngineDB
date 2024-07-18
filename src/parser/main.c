#include "../include/basic.h"
#include "../include/parser/parser.h"

extern node* parse_and_get_tree(const char* input);

int main() {
    FILE *file;
    char *input;

    // Open the file in read mode
    file = fopen("sql1.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    input = (char *)malloc(10000 * sizeof(char));
    if (input == NULL) {
        perror("Error allocating memory");
        fclose(file);
        return EXIT_FAILURE;
    }

    if (fgets(input,10000, file) == NULL) {
        perror("Error reading file");
    }

    node* tree = parse_and_get_tree(input);

    if (tree != NULL) {
        printtree(tree);
        printf("Parsing complete.\n");
    } else {
        printf("Parsing failed.\n");
    }

    free(input);
    return 0;
}