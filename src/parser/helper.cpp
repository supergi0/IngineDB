#include "../include/parser/parser.h"

// make a new parse tree node
node* mknode(const char* token){
    node *newnode = new node();
    if (newnode == NULL) {
        return NULL;
    }
    newnode->token = strdup(token);
    if (newnode->token == NULL) {
        delete newnode;
        return NULL;
    }
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
void printTree(node* head){
    output = fopen("output.txt","w+");
    recursiveprinttree(head,1,0,0);
    fclose(output);
}