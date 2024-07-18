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

// Print out the parse tree
FILE* output;
void recursiveprinttree(node* head, int n, int depth, int child){
	if(head==NULL){
		return;
	}

	fprintf(output,"{");
	fprintf(output,"%s", head->token);
	for(int i=0; i<20; i++){
		recursiveprinttree(head->children[i], n+1, depth+1, i);
	}
	fprintf(output,"}");
}
void printtree(node* head){
    output = fopen("output.txt","w+");
    recursiveprinttree(head,1,0,0);
    fclose(output);
}