/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SELECT = 258,                  /* SELECT  */
    FROM = 259,                    /* FROM  */
    WHERE = 260,                   /* WHERE  */
    INSERT = 261,                  /* INSERT  */
    INTO = 262,                    /* INTO  */
    VALUES = 263,                  /* VALUES  */
    UPDATE = 264,                  /* UPDATE  */
    SET = 265,                     /* SET  */
    DELETE = 266,                  /* DELETE  */
    CREATE = 267,                  /* CREATE  */
    TABLE = 268,                   /* TABLE  */
    DROP = 269,                    /* DROP  */
    INT_TYPE = 270,                /* INT_TYPE  */
    VARCHAR_TYPE = 271,            /* VARCHAR_TYPE  */
    BOOLEAN_TYPE = 272,            /* BOOLEAN_TYPE  */
    FLOAT_TYPE = 273,              /* FLOAT_TYPE  */
    CHAR_TYPE = 274,               /* CHAR_TYPE  */
    DATE_TYPE = 275,               /* DATE_TYPE  */
    TIMESTAMP_TYPE = 276,          /* TIMESTAMP_TYPE  */
    INT_VAL = 277,                 /* INT_VAL  */
    VARCHAR_VAL = 278,             /* VARCHAR_VAL  */
    TRUE_VAL = 279,                /* TRUE_VAL  */
    FALSE_VAL = 280,               /* FALSE_VAL  */
    FLOAT_VAL = 281,               /* FLOAT_VAL  */
    CHAR_VAL = 282,                /* CHAR_VAL  */
    DATE_VAL = 283,                /* DATE_VAL  */
    TIMESTAMP_VAL = 284,           /* TIMESTAMP_VAL  */
    NULL_VAL = 285,                /* NULL_VAL  */
    IDENTIFIER = 286,              /* IDENTIFIER  */
    LPAREN = 287,                  /* LPAREN  */
    RPAREN = 288,                  /* RPAREN  */
    COMMA = 289,                   /* COMMA  */
    SEMICOLON = 290,               /* SEMICOLON  */
    ASTERISK = 291,                /* ASTERISK  */
    EQ = 292,                      /* EQ  */
    LT = 293,                      /* LT  */
    GT = 294,                      /* GT  */
    LE = 295,                      /* LE  */
    GE = 296,                      /* GE  */
    NE = 297,                      /* NE  */
    AND = 298,                     /* AND  */
    OR = 299                       /* OR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define SELECT 258
#define FROM 259
#define WHERE 260
#define INSERT 261
#define INTO 262
#define VALUES 263
#define UPDATE 264
#define SET 265
#define DELETE 266
#define CREATE 267
#define TABLE 268
#define DROP 269
#define INT_TYPE 270
#define VARCHAR_TYPE 271
#define BOOLEAN_TYPE 272
#define FLOAT_TYPE 273
#define CHAR_TYPE 274
#define DATE_TYPE 275
#define TIMESTAMP_TYPE 276
#define INT_VAL 277
#define VARCHAR_VAL 278
#define TRUE_VAL 279
#define FALSE_VAL 280
#define FLOAT_VAL 281
#define CHAR_VAL 282
#define DATE_VAL 283
#define TIMESTAMP_VAL 284
#define NULL_VAL 285
#define IDENTIFIER 286
#define LPAREN 287
#define RPAREN 288
#define COMMA 289
#define SEMICOLON 290
#define ASTERISK 291
#define EQ 292
#define LT 293
#define GT 294
#define LE 295
#define GE 296
#define NE 297
#define AND 298
#define OR 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "parser.y"

    struct {
        char name[100];
        struct node* nd;
    } nd_obj;

#line 162 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
