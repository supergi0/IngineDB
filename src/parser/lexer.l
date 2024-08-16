%{
#include "y.tab.h"
extern YYSTYPE yylval;
%}

DIGIT [0-9]
ID [a-zA-Z][a-zA-Z0-9_]*
STRING \"[^\"]*\"
CHAR \'[^\']\'
AT_FILE \@[a-zA-Z0-9_\.\/]+

%option case-insensitive

%%


DATABASES { strcpy(yylval.nd_obj.name,(yytext)); return DATABASES; }
TABLES { strcpy(yylval.nd_obj.name,(yytext)); return TABLES; }
SELECT { strcpy(yylval.nd_obj.name,(yytext)); return SELECT; }
FROM { strcpy(yylval.nd_obj.name,(yytext)); return FROM; }
WHERE { strcpy(yylval.nd_obj.name,(yytext)); return WHERE; }
INSERT { strcpy(yylval.nd_obj.name,(yytext)); return INSERT; }
INTO { strcpy(yylval.nd_obj.name,(yytext)); return INTO; }
VALUES { strcpy(yylval.nd_obj.name,(yytext)); return VALUES; }
UPDATE { strcpy(yylval.nd_obj.name,(yytext)); return UPDATE; }
SET { strcpy(yylval.nd_obj.name,(yytext)); return SET; }
DELETE { strcpy(yylval.nd_obj.name,(yytext)); return DELETE; }
CREATE { strcpy(yylval.nd_obj.name,(yytext)); return CREATE; }
TABLE { strcpy(yylval.nd_obj.name,(yytext)); return TABLE; }
DROP { strcpy(yylval.nd_obj.name,(yytext)); return DROP; }
DATABASE { strcpy(yylval.nd_obj.name,(yytext)); return DATABASE; }
USE { strcpy(yylval.nd_obj.name,(yytext)); return USE; }
SHOW { strcpy(yylval.nd_obj.name,(yytext)); return SHOW; }

INT { strcpy(yylval.nd_obj.name,(yytext)); return INT_TYPE; }
VARCHAR { strcpy(yylval.nd_obj.name,(yytext)); return VARCHAR_TYPE; }
BOOLEAN { strcpy(yylval.nd_obj.name,(yytext)); return BOOLEAN_TYPE; }
FLOAT { strcpy(yylval.nd_obj.name,(yytext)); return FLOAT_TYPE; }
CHAR { strcpy(yylval.nd_obj.name,(yytext)); return CHAR_TYPE; }
DATE { strcpy(yylval.nd_obj.name,(yytext)); return DATE_TYPE; }
TIMESTAMP { strcpy(yylval.nd_obj.name,(yytext)); return TIMESTAMP_TYPE; }

TRUE { strcpy(yylval.nd_obj.name,(yytext)); return TRUE_VAL; }
FALSE { strcpy(yylval.nd_obj.name,(yytext)); return FALSE_VAL; }
NULL { strcpy(yylval.nd_obj.name,(yytext)); return NULL_VAL; }
AND  { strcpy(yylval.nd_obj.name,(yytext)); return AND; }
"&&" { strcpy(yylval.nd_obj.name,(yytext)); return AND; }
OR   { strcpy(yylval.nd_obj.name,(yytext)); return OR; }
"||" { strcpy(yylval.nd_obj.name,(yytext)); return OR; }

{AT_FILE} { strcpy(yylval.nd_obj.name, yytext); return AT_FILE;}
{DIGIT}+ { strcpy(yylval.nd_obj.name,(yytext)); return INT_VAL; }
{STRING} { strcpy(yylval.nd_obj.name,(yytext)); return VARCHAR_VAL; }
{DIGIT}+"."{DIGIT}+ { strcpy(yylval.nd_obj.name,(yytext)); return FLOAT_VAL; }
{CHAR} { strcpy(yylval.nd_obj.name,(yytext)); return CHAR_VAL; }
[0-9][0-9][0-9][0-9]-[0-9][0-9]-[0-9][0-9] { strcpy(yylval.nd_obj.name,(yytext)); return DATE_VAL; }
[0-9][0-9][0-9][0-9]-[0-9][0-9]-[0-9][0-9][ ][0-9][0-9]:[0-9][0-9]:[0-9][0-9] { strcpy(yylval.nd_obj.name,(yytext)); return TIMESTAMP_VAL; }

{ID} { strcpy(yylval.nd_obj.name,(yytext)); return IDENTIFIER; }


"(" { strcpy(yylval.nd_obj.name,(yytext)); return LPAREN; }
")" { strcpy(yylval.nd_obj.name,(yytext)); return RPAREN; }
"," { strcpy(yylval.nd_obj.name,(yytext)); return COMMA; }
";" { strcpy(yylval.nd_obj.name,(yytext)); return SEMICOLON; }
"*" { strcpy(yylval.nd_obj.name,(yytext)); return ASTERISK; }

"=" { strcpy(yylval.nd_obj.name,(yytext)); return EQ; }
"<" { strcpy(yylval.nd_obj.name,(yytext)); return LT; }
">" { strcpy(yylval.nd_obj.name,(yytext)); return GT; }
"<=" { strcpy(yylval.nd_obj.name,(yytext)); return LE; }
">=" { strcpy(yylval.nd_obj.name,(yytext)); return GE; }
"<>" { strcpy(yylval.nd_obj.name,(yytext)); return NE; }

[ \t\n]+                      { /* ignore white space */ }
"--".*                      { /* ignore comments */ }

.	                        { return *yytext; /* return the erronious character */}

%%

int yywrap() {
    return 1;
}