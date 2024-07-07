%{
#include "y.tab.h"
extern YYSTYPE yylval;
%}

DIGIT [0-9]
ID [a-zA-Z][a-zA-Z0-9_]*
STRING '[^']*'

A [aA]
B [bB]
C [cC]
D [dD]
E [eE]
F [fF]
G [gG]
H [hH]
I [iI]
J [jJ]
K [kK]
L [lL]
M [mM]
N [nN]
O [oO]
P [pP]
Q [qQ]
R [rR]
S [sS]
T [tT]
U [uU]
V [vV]
W [wW]
X [xX]
Y [yY]
Z [zZ]

%%

{S}{E}{L}{E}{C}{T} { strcpy(yylval.nd_obj.name,(yytext)); return SELECT; }
{F}{R}{O}{M} { strcpy(yylval.nd_obj.name,(yytext)); return FROM; }
{W}{H}{E}{R}{E} { strcpy(yylval.nd_obj.name,(yytext)); return WHERE; }
{I}{N}{S}{E}{R}{T} { strcpy(yylval.nd_obj.name,(yytext)); return INSERT; }
{I}{N}{T}{O} { strcpy(yylval.nd_obj.name,(yytext)); return INTO; }
{V}{A}{L}{U}{E}{S} { strcpy(yylval.nd_obj.name,(yytext)); return VALUES; }
{U}{P}{D}{A}{T}{E} { strcpy(yylval.nd_obj.name,(yytext)); return UPDATE; }
{S}{E}{T} { strcpy(yylval.nd_obj.name,(yytext)); return SET; }
{D}{E}{L}{E}{T}{E} { strcpy(yylval.nd_obj.name,(yytext)); return DELETE; }
{C}{R}{E}{A}{T}{E} { strcpy(yylval.nd_obj.name,(yytext)); return CREATE; }
{T}{A}{B}{L}{E} { strcpy(yylval.nd_obj.name,(yytext)); return TABLE; }
{D}{R}{O}{P} { strcpy(yylval.nd_obj.name,(yytext)); return DROP; }

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

{DIGIT}+ { strcpy(yylval.nd_obj.name,(yytext)); return INTEGER; }
{DIGIT}+"."{DIGIT}+ { strcpy(yylval.nd_obj.name,(yytext)); return FLOAT; }
{ID} { strcpy(yylval.nd_obj.name,(yytext)); return IDENTIFIER; }
{STRING} { strcpy(yylval.nd_obj.name,(yytext)); return STRING; }

[ \t\n]+                      { /* ignore white space */ }
"--".*                      { /* ignore comments */ }

.	                        { return *yytext; /* return the erronious character */}

%%

int yywrap() {
    return 1;
}