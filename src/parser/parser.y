%{
#include "../include/basic.h"
#include "../include/parser/parser.h"
#include "./helper.c"
#include "lex.yy.c"
#include "errors.c"

void yyerror(const char *s);
int yylex();
int yywrap();

node* head;

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

%type<nd_obj> sql_query select_statement insert_statement update_statement delete_statement create_table_statement drop_table_statement
%type<nd_obj> select_list table_list column_list
%type<nd_obj> where_clause
%type<nd_obj> or_condition and_condition basic_condition comparison_operator expression


%start sql_query

%%

sql_query
    : select_statement
    {
        $$.nd = mknode("sql_query");

        $$.nd->children[0] = $1.nd;

        head = $$.nd;
    }
    | insert_statement
    {
        $$.nd = mknode("sql_query");

        $$.nd->children[0] = $1.nd;

        head = $$.nd;
    }
    | update_statement
    {
        $$.nd = mknode("sql_query");

        $$.nd->children[0] = $1.nd;

        head = $$.nd;
    }
    | delete_statement
    {
        $$.nd = mknode("sql_query");

        $$.nd->children[0] = $1.nd;

        head = $$.nd;
    }
    | create_table_statement
    {
        $$.nd = mknode("sql_query");

        $$.nd->children[0] = $1.nd;

        head = $$.nd;
    }
    | drop_table_statement
    {
        $$.nd = mknode("sql_query");

        $$.nd->children[0] = $1.nd;

        head = $$.nd;
    }
    ;

select_statement
    : SELECT select_list FROM table_list where_clause SEMICOLON
    {
        $$.nd = mknode("select_statement");

        $1.nd = mknode("SELECT");
        $1.nd->children[0] = mknode($1.name);

        $3.nd = mknode("FROM");
        $3.nd->children[0] = mknode($3.name);

        $6.nd = mknode("SEMICOLON");
        $6.nd->children[0] = mknode($6.name);

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = $2.nd;
        $$.nd->children[2] = $3.nd;
        $$.nd->children[3] = $4.nd;
        $$.nd->children[4] = $5.nd;
        $$.nd->children[5] = $6.nd;
    }
    ;

select_list
    : ASTERISK
    {
        $$.nd = mknode("select_list");
        $$.nd->children[0] = mknode($1.name);
    }
    | column_list
    {
        $$.nd = mknode("select_list");

        $$.nd->children[0] = $1.nd;
    }
    ;

column_list
    : IDENTIFIER
    {
        $$.nd = mknode("column_list");
        $$.nd->children[0] = mknode($1.name);
    }
    | column_list COMMA IDENTIFIER
    {
        $$.nd = mknode("column_list");

        $1.nd = mknode("COMMA");
        $1.nd->children[0] = mknode($1.name);

        $3.nd = mknode("IDENTIFIER");
        $3.nd->children[0] = mknode($3.name);

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = mknode($2.name);
        $$.nd->children[2] = mknode($3.name);
    }
    ;

table_list
    : IDENTIFIER
    {
        $$.nd = mknode("table_list");

        $$.nd->children[0] = mknode($1.name);
    }
    ;

where_clause
    : /* empty */
    | WHERE or_condition
    {
        $$.nd = mknode("where_clause");

        $$.nd->children[0] = mknode($1.name);
        $$.nd->children[1] = $2.nd;
    }
    ;

or_condition
    : and_condition
    {
        $$.nd = mknode("or_condition");

        $$.nd->children[0] = $1.nd;
    }
    | or_condition OR and_condition
    {
        $$.nd = mknode("or_condition");

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = mknode($2.name);
        $$.nd->children[2] = $3.nd;
    }
    ;

and_condition
    : basic_condition
    {
         $$.nd = mknode("and_condition");

        $$.nd->children[0] = $1.nd;
    }
    | and_condition AND basic_condition
    {
        $$.nd = mknode("and_condition");

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = mknode($2.name);
        $$.nd->children[2] = $3.nd;
    }

basic_condition
    : IDENTIFIER comparison_operator expression
    {
        $$.nd = mknode("basic_condition");
        
        $$.nd->children[0] = mknode($1.name);
        $$.nd->children[1] = $2.nd;
        $$.nd->children[2] = $3.nd;
    }
    | LPAREN or_condition RPAREN
    {
        $$.nd = mknode("basic_condition");
        
        $$.nd->children[0] = mknode($1.name);
        $$.nd->children[1] = $2.nd;
        $$.nd->children[2] = mknode($3.name);
    }
    ;

comparison_operator
    : EQ
    {
        $$.nd = mknode("comparison_operator");
        
        $$.nd->children[0] = mknode($1.name);
    }
    | LT 
    {
        $$.nd = mknode("comparison_operator");
        
        $$.nd->children[0] = mknode($1.name);
    }
    | GT 
    {
        $$.nd = mknode("comparison_operator");
        
        $$.nd->children[0] = mknode($1.name);
    }
    | LE 
    {
        $$.nd = mknode("comparison_operator");
        
        $$.nd->children[0] = mknode($1.name);
    }
    | GE 
    {
        $$.nd = mknode("comparison_operator");
        
        $$.nd->children[0] = mknode($1.name);
    }
    | NE
    {
        $$.nd = mknode("comparison_operator");
        
        $$.nd->children[0] = mknode($1.name);
    }
    ;

expression
    : IDENTIFIER
    {
        $$.nd = mknode("expression");
        
        $$.nd->children[0] = mknode($1.name);
    }
    | INT_VAL
    {
        $$.nd = mknode("expression");
        
        $$.nd->children[0] = mknode($1.name);
    }
    | FLOAT_VAL
    {
        $$.nd = mknode("expression");
        
        $$.nd->children[0] = mknode($1.name);
    }
    | VARCHAR_VAL
    {
        $$.nd = mknode("expression");
        
        $$.nd->children[0] = mknode($1.name);
    }
    | CHAR_VAL
    {
        $$.nd = mknode("expression");
        
        $$.nd->children[0] = mknode($1.name);
    }
    | DATE_VAL
    {
        $$.nd = mknode("expression");
        
        $$.nd->children[0] = mknode($1.name);
    }
    | TIMESTAMP_VAL
    {
        $$.nd = mknode("expression");
        
        $$.nd->children[0] = mknode($1.name);
    }
    | TRUE_VAL
    {
        $$.nd = mknode("expression");
        
        $$.nd->children[0] = mknode($1.name);
    }
    | FALSE_VAL
    {
        $$.nd = mknode("expression");
        
        $$.nd->children[0] = mknode($1.name);
    }
    | NULL_VAL
    {
        $$.nd = mknode("expression");
        
        $$.nd->children[0] = mknode($1.name);
    }
    ;

insert_statement
    : INSERT INTO IDENTIFIER LPAREN column_list RPAREN VALUES LPAREN value_list RPAREN SEMICOLON
    {
        $$.nd = mknode("insert_statement");

        $$.nd->children[0] = mknode($1.name);
    }
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