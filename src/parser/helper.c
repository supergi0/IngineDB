#include "../include/basic.h"
#include "../include/parser/parser.h"

node* mknode(char* token){
    node *newnode  = (node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        return NULL;
    }
    char *newstr = (char*)malloc(strlen(token)+1);
    if (newstr == NULL) {
        free(newnode);
        return NULL;
    }

    strcpy(newstr,token);
    newnode->token  = newstr;
    return newnode;
}