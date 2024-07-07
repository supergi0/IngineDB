/*
This file is for all the errors definitions that can occur while parsing
*/
#include <stdio.h>
#include <stdlib.h>
extern char *yytext;

// Print parsing error
void yyerror(const char *s) {
    fprintf(stderr, "Parse error: Occurred at token %s\n", yytext);
    exit(1);
}