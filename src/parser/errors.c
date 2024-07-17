/*
This file is for all the errors definitions that can occur while parsing
*/
#include "../include/basic.h"
extern char *yytext;

// Print parsing error
void yyerror(const char *s) {
    fprintf(stderr, "Parse error: occurred at token \"%s\"", yytext);
    exit(1);
}