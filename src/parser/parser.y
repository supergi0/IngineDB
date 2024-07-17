%{
#include "../include/basic.h"
#include "lex.yy.c"
#include "errors.c"

void yyerror(const char *s);
int yylex();
int yywrap();

%}

%union {
    struct {
        char name[100];
        struct node* nd;
    } nd_obj;
}

%token <nd_obj> SELECT FROM WHERE INSERT INTO VALUES UPDATE SET DELETE CREATE TABLE DROP
%token <nd_obj> INT_TYPE VARCHAR_TYPE BOOLEAN_TYPE FLOAT_TYPE CHAR_TYPE DATE_TYPE TIMESTAMP_TYPE
%token <nd_obj> INT_VAL VARCHAR_VAL TRUE_VAL FALSE_VAL FLOAT_VAL CHAR_VAL DATE_VAL TIMESTAMP_VAL NULL_VAL
%token <nd_obj> IDENTIFIER LPAREN RPAREN COMMA SEMICOLON ASTERISK
%token <nd_obj> EQ LT GT LE GE NE
%token <nd_obj> AND OR


%start sql_query

%%

sql_query
    : select_statement
    | insert_statement
    | update_statement
    | delete_statement
    | create_table_statement
    | drop_table_statement
    ;

select_statement
    : SELECT select_list FROM table_list where_clause SEMICOLON
    ;

select_list
    : ASTERISK
    | column_list
    ;

column_list
    : IDENTIFIER
    | column_list COMMA IDENTIFIER
    ;

table_list
    : IDENTIFIER
    ;

where_clause
    : /* empty */
    | WHERE or_condition
    ;

or_condition
    : and_condition
    | or_condition OR and_condition
    ;

and_condition
    : basic_condition
    | and_condition AND basic_condition

basic_condition
    : IDENTIFIER comparison_operator expression
    | LPAREN or_condition RPAREN
    ;

comparison_operator
    : EQ | LT | GT | LE | GE | NE
    ;

expression
    : IDENTIFIER
    | INT_VAL
    | FLOAT_VAL
    | VARCHAR_VAL
    | CHAR_VAL
    | DATE_VAL
    | TIMESTAMP_VAL
    | TRUE_VAL
    | FALSE_VAL
    | NULL_VAL
    ;

insert_statement
    : INSERT INTO IDENTIFIER LPAREN column_list RPAREN VALUES LPAREN value_list RPAREN SEMICOLON
    ;

value_list
    : expression
    | value_list COMMA expression
    ;

update_statement
    : UPDATE IDENTIFIER SET update_list where_clause SEMICOLON
    ;

update_list
    : IDENTIFIER EQ expression
    | update_list COMMA IDENTIFIER EQ expression
    ;

delete_statement
    : DELETE FROM IDENTIFIER where_clause SEMICOLON
    ;

create_table_statement
    : CREATE TABLE IDENTIFIER LPAREN column_definitions RPAREN SEMICOLON
    ;

column_definitions
    : column_definition
    | column_definitions COMMA column_definition
    ;

column_definition
    : IDENTIFIER data_type
    ;

data_type
    : INT_TYPE
    | VARCHAR_TYPE
    | BOOLEAN_TYPE
    | FLOAT_TYPE
    | CHAR_TYPE
    | DATE_TYPE
    | TIMESTAMP_TYPE
    ;

drop_table_statement
    : DROP TABLE IDENTIFIER SEMICOLON
    ;

%%

int main() {
    yyparse();
    printf("SQL parsing completed successfully.\n");
    return 0;
}