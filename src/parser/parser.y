%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
%token <nd_obj> LPAREN RPAREN COMMA SEMICOLON ASTERISK
%token <nd_obj> EQ LT GT LE GE NE
%token <nd_obj> INTEGER FLOAT IDENTIFIER STRING

%start sql_queries

%%

sql_queries
    : sql_query
    | sql_queries sql_query
    ;

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
    | table_list COMMA IDENTIFIER
    ;

where_clause
    : /* empty */
    | WHERE condition
    ;

condition
    : IDENTIFIER comparison_operator expression
    ;

comparison_operator
    : EQ | LT | GT | LE | GE | NE
    ;

expression
    : IDENTIFIER
    | INTEGER
    | FLOAT
    | STRING
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
    : INTEGER
    | FLOAT
    | STRING
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