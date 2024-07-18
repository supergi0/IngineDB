#include "../include/basic.h"
#include "../include/parser/parser.h"

extern node* parse_and_get_tree(const char* input);

int main() {
    const char* input = "SELECT * from hello;"; // Replace this with your SQL query
    node* tree = parse_and_get_tree(input);

    if (tree != NULL) {
        // If needed, call a function to print or process the tree
        printtree(tree); // Assuming you have a function to print the tree
    } else {
        printf("Parsing failed.\n");
    }

    return 0;
}