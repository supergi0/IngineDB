/*
This file is for all the errors definitions that can occur while parsing
*/
#include "../include/basic.hpp"
extern char *yytext;
extern bool error_occured;

// Print parsing error
void yyerror(const char *s) {
    fprintf(stderr, "You have an error in your SQL syntax; Use the right syntax near \"%s\" ", yytext);
    error_occured = true;
}