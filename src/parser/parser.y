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
%type<nd_obj> select_list table_list column_list value_list update_list column_definitions column_definition
%type<nd_obj> where_clause
%type<nd_obj> or_condition and_condition basic_condition comparison_operator expression data_type


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

        $1.nd = mknode("ASTERISK");
        $1.nd->children[0] = mknode($1.name);

        $$.nd->children[0] = $1.nd;
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

        $1.nd = mknode("IDENTIFIER");
        $1.nd->children[0] = mknode($1.name);

        $$.nd->children[0] = $1.nd;
    }
    | column_list COMMA IDENTIFIER
    {
        $$.nd = mknode("column_list");

        $2.nd = mknode("COMMA");
        $2.nd->children[0] = mknode($2.name);

        $3.nd = mknode("IDENTIFIER");
        $3.nd->children[0] = mknode($3.name);

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = $2.nd;
        $$.nd->children[2] = $3.nd;
    }
    ;

table_list
    : IDENTIFIER
    {
        $$.nd = mknode("table_list");

        $1.nd = mknode("IDENTIFIER");
        $1.nd->children[0] = mknode($1.name);

        $$.nd->children[0] = $1.nd;
    }
    ;

where_clause
    : 
    {
        
    }
    | WHERE or_condition
    {
        $$.nd = mknode("where_clause");

        $1.nd = mknode("WHERE");
        $1.nd->children[0] = mknode($1.name);

        $$.nd->children[0] = $1.nd;
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

        $2.nd = mknode("OR");
        $2.nd->children[0] = mknode($2.name);

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = $2.nd;
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

        $2.nd = mknode("AND");
        $2.nd->children[0] = mknode($2.name);

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = $2.nd;
        $$.nd->children[2] = $3.nd;
    }

basic_condition
    : IDENTIFIER comparison_operator expression
    {
        $$.nd = mknode("basic_condition");

        $1.nd = mknode("IDENTIFIER");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = $2.nd;
        $$.nd->children[2] = $3.nd;
    }
    | LPAREN or_condition RPAREN
    {
        $$.nd = mknode("basic_condition");

        $1.nd = mknode("LPAREN");
        $1.nd->children[0] = mknode($1.name);

        $3.nd = mknode("RPAREN");
        $3.nd->children[0] = mknode($3.name);
        
        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = $2.nd;
        $$.nd->children[2] = $3.nd;
    }
    ;

comparison_operator
    : EQ
    {
        $$.nd = mknode("comparison_operator");

        $1.nd = mknode("EQ");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    | LT 
    {
        $$.nd = mknode("comparison_operator");

        $1.nd = mknode("LT");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    | GT 
    {
        $$.nd = mknode("comparison_operator");

        $1.nd = mknode("GT");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    | LE 
    {
        $$.nd = mknode("comparison_operator");

        $1.nd = mknode("LE");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    | GE 
    {
        $$.nd = mknode("comparison_operator");

        $1.nd = mknode("GE");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    | NE
    {
        $$.nd = mknode("comparison_operator");

        $1.nd = mknode("NE");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    ;

expression
    : IDENTIFIER
    {
        $$.nd = mknode("expression");

        $1.nd = mknode("IDENTIFIER");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    | INT_VAL
    {
        $$.nd = mknode("expression");

        $1.nd = mknode("INT_VAL");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    | FLOAT_VAL
    {
        $$.nd = mknode("expression");

        $1.nd = mknode("FLOAT_VAL");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    | VARCHAR_VAL
    {
        $$.nd = mknode("expression");

        $1.nd = mknode("VARCHAR");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    | CHAR_VAL
    {
        $$.nd = mknode("expression");

        $1.nd = mknode("CHAR_VAL");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    | DATE_VAL
    {
        $$.nd = mknode("expression");

        $1.nd = mknode("DATE_VAL");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    | TIMESTAMP_VAL
    {
        $$.nd = mknode("expression");

        $1.nd = mknode("TIMESTAMP_VAL");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    | TRUE_VAL
    {
        $$.nd = mknode("expression");

        $1.nd = mknode("TRUE_VAL");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    | FALSE_VAL
    {
        $$.nd = mknode("expression");

        $1.nd = mknode("FALSE_VAL");
        $1.nd->children[0] = mknode($1.name);
        
        $$.nd->children[0] = $1.nd;
    }
    | NULL_VAL
    {
        $$.nd = mknode("expression");
        
        $1.nd = mknode("NULL_VAL");
        $1.nd->children[0] = mknode($1.name);

        $$.nd->children[0] = $1.nd;
    }
    ;

insert_statement
    : INSERT INTO IDENTIFIER LPAREN column_list RPAREN VALUES LPAREN value_list RPAREN SEMICOLON
    {
        $$.nd = mknode("insert_statement");

        $1.nd = mknode("INSERT");
        $1.nd->children[0] = mknode($1.name);

        $2.nd = mknode("INTO");
        $2.nd->children[0] = mknode($2.name);

        $3.nd = mknode("IDENTIFIER");
        $3.nd->children[0] = mknode($3.name);

        $4.nd = mknode("LPAREN");
        $4.nd->children[0] = mknode($4.name);

        $6.nd = mknode("RPAREN");
        $6.nd->children[0] = mknode($6.name);

        $7.nd = mknode("VALUES");
        $7.nd->children[0] = mknode($7.name);

        $8.nd = mknode("LPAREN");
        $8.nd->children[0] = mknode($8.name);

        $10.nd = mknode("RPAREN");
        $10.nd->children[0] = mknode($10.name);

        $11.nd = mknode("SEMICOLON");
        $11.nd->children[0] = mknode($11.name);

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = $2.nd;
        $$.nd->children[2] = $3.nd;
        $$.nd->children[3] = $4.nd;
        $$.nd->children[4] = $5.nd;
        $$.nd->children[5] = $6.nd;
        $$.nd->children[6] = $7.nd;
        $$.nd->children[7] = $8.nd;
        $$.nd->children[8] = $9.nd;
        $$.nd->children[9] = $10.nd;
        $$.nd->children[10] = $11.nd;
    }
    ;

value_list
    : expression
    {
        $$.nd = mknode("value_list");

        $$.nd->children[0] = $1.nd;
    }
    | value_list COMMA expression
    {
        $$.nd = mknode("value_list");

        $2.nd = mknode("COMMA");
        $2.nd->children[0] = mknode($2.name);

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = $2.nd;
        $$.nd->children[2] = $3.nd;
    }
    ;

update_statement
    : UPDATE IDENTIFIER SET update_list where_clause SEMICOLON
    {
        $$.nd = mknode("update_statement");

        $1.nd = mknode("UPDATE");
        $1.nd->children[0] = mknode($1.name);

        $2.nd = mknode("IDENTIFIER");
        $2.nd->children[0] = mknode($2.name);

        $3.nd = mknode("SET");
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

update_list
    : IDENTIFIER EQ expression
    {
        $$.nd = mknode("update_list");

        $1.nd = mknode("IDENTIFIER");
        $1.nd->children[0] = mknode($1.name);

        $2.nd = mknode("EQ");
        $2.nd->children[0] = mknode($2.name);

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = $2.nd;
        $$.nd->children[2] = $3.nd;
    }
    | update_list COMMA IDENTIFIER EQ expression
    {
        $$.nd = mknode("update_list");

        $2.nd = mknode("COMMA");
        $2.nd->children[0] = mknode($2.name);

        $3.nd = mknode("IDENTIFIER");
        $3.nd->children[0] = mknode($3.name);

        $4.nd = mknode("EQ");
        $4.nd->children[0] = mknode($4.name);

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = $2.nd;
        $$.nd->children[2] = $3.nd;
        $$.nd->children[3] = $4.nd;
        $$.nd->children[4] = $5.nd;
    }
    ;

delete_statement
    : DELETE FROM IDENTIFIER where_clause SEMICOLON
    {
        $$.nd = mknode("delete_statement");

        $1.nd = mknode("DELETE");
        $1.nd->children[0] = mknode($1.name);

        $2.nd = mknode("FROM");
        $2.nd->children[0] = mknode($2.name);

        $3.nd = mknode("IDENTIFIER");
        $3.nd->children[0] = mknode($3.name);

        $5.nd = mknode("SEMICOLON");
        $5.nd->children[0] = mknode($5.name);

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = $2.nd;
        $$.nd->children[2] = $3.nd;
        $$.nd->children[3] = $4.nd;
        $$.nd->children[4] = $5.nd;
    }
    ;

create_table_statement
    : CREATE TABLE IDENTIFIER LPAREN column_definitions RPAREN SEMICOLON
    {
        $$.nd = mknode("create_table_statement");

        $1.nd = mknode("CREATE");
        $1.nd->children[0] = mknode($1.name);

        $2.nd = mknode("TABLE");
        $2.nd->children[0] = mknode($2.name);

        $3.nd = mknode("IDENTIFIER");
        $3.nd->children[0] = mknode($3.name);

        $4.nd = mknode("LPAREN");
        $4.nd->children[0] = mknode($4.name);

        $6.nd = mknode("RPAREN");
        $6.nd->children[0] = mknode($6.name);

        $7.nd = mknode("SEMICOLON");
        $7.nd->children[0] = mknode($7.name);

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = $2.nd;
        $$.nd->children[2] = $3.nd;
        $$.nd->children[3] = $4.nd;
        $$.nd->children[4] = $5.nd;
        $$.nd->children[5] = $6.nd;
        $$.nd->children[6] = $7.nd;
    }
    ;

column_definitions
    : column_definition
    {
        $$.nd = mknode("column_definitions");

        $$.nd->children[0] = $1.nd;
    }
    | column_definitions COMMA column_definition
    {
        $$.nd = mknode("column_definitions");

        $2.nd = mknode("COMMA");
        $2.nd->children[0] = mknode($2.name);

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = $2.nd;
        $$.nd->children[2] = $3.nd;
    }
    ;

column_definition
    : IDENTIFIER data_type
    {
        $$.nd = mknode("column_definition");

        $1.nd = mknode("IDENTIFIER");
        $1.nd->children[0] = mknode($1.name);

        $$.nd->children[0] = $1.nd;
        $$.nd->children[1] = $2.nd;
    }
    ;

data_type
    : INT_TYPE
    {
        $$.nd = mknode("data_type");

        $1.nd = mknode("INT_TYPE");
        $1.nd->children[0] = mknode($1.name);

        $$.nd->children[0] = $1.nd;
    }
    | VARCHAR_TYPE
    {
        $$.nd = mknode("data_type");

        $1.nd = mknode("VARCHAR_TYPE");
        $1.nd->children[0] = mknode($1.name);

        $$.nd->children[0] = $1.nd;
    }
    | BOOLEAN_TYPE
    {
        $$.nd = mknode("data_type");

        $1.nd = mknode("BOOLEAN_TYPE");
        $1.nd->children[0] = mknode($1.name);

        $$.nd->children[0] = $1.nd;
    }
    | FLOAT_TYPE
    {
        $$.nd = mknode("data_type");

        $1.nd = mknode("FLOAT_TYPE");
        $1.nd->children[0] = mknode($1.name);

        $$.nd->children[0] = $1.nd;
    }
    | CHAR_TYPE
    {
        $$.nd = mknode("data_type");

        $1.nd = mknode("CHAR_TYPE");
        $1.nd->children[0] = mknode($1.name);

        $$.nd->children[0] = $1.nd;
    }
    | DATE_TYPE
    {
        $$.nd = mknode("data_type");

        $1.nd = mknode("DATE_TYPE");
        $1.nd->children[0] = mknode($1.name);

        $$.nd->children[0] = $1.nd;
    }
    | TIMESTAMP_TYPE
    {
        $$.nd = mknode("data_type");

        $1.nd = mknode("TIMESTAMP_TYPE");
        $1.nd->children[0] = mknode($1.name);

        $$.nd->children[0] = $1.nd;
    }
    ;

drop_table_statement
    : DROP TABLE IDENTIFIER SEMICOLON
    {
        $$.nd = mknode("drop_table_statement");

        $1.nd = mknode("DROP");
        $1.nd->children[0] = mknode($1.name);

        $2.nd = mknode("TABLE");
        $2.nd->children[0] = mknode($2.name);

        $3.nd = mknode("IDENTIFIER");
        $3.nd->children[0] = mknode($3.name);

        $4.nd = mknode("SEMICOLON");
        $4.nd->children[0] = mknode($4.name);


        $$.nd->children[0] = $1.nd;
        $$.nd->children[0] = $2.nd;
        $$.nd->children[0] = $3.nd;
        $$.nd->children[0] = $4.nd;
    }
    ;

%%

int main() {
    yyparse();
    printf("SQL parsing completed successfully.\n");

    // comment this after testing parse tree generation
    printtree(head);
    return 0;
}