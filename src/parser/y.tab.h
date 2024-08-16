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
    DATABASE = 270,                /* DATABASE  */
    USE = 271,                     /* USE  */
    SHOW = 272,                    /* SHOW  */
    TABLES = 273,                  /* TABLES  */
    DATABASES = 274,               /* DATABASES  */
    AT_FILE = 275,                 /* AT_FILE  */
    INT_TYPE = 276,                /* INT_TYPE  */
    VARCHAR_TYPE = 277,            /* VARCHAR_TYPE  */
    BOOLEAN_TYPE = 278,            /* BOOLEAN_TYPE  */
    FLOAT_TYPE = 279,              /* FLOAT_TYPE  */
    CHAR_TYPE = 280,               /* CHAR_TYPE  */
    DATE_TYPE = 281,               /* DATE_TYPE  */
    TIMESTAMP_TYPE = 282,          /* TIMESTAMP_TYPE  */
    INT_VAL = 283,                 /* INT_VAL  */
    VARCHAR_VAL = 284,             /* VARCHAR_VAL  */
    TRUE_VAL = 285,                /* TRUE_VAL  */
    FALSE_VAL = 286,               /* FALSE_VAL  */
    FLOAT_VAL = 287,               /* FLOAT_VAL  */
    CHAR_VAL = 288,                /* CHAR_VAL  */
    DATE_VAL = 289,                /* DATE_VAL  */
    TIMESTAMP_VAL = 290,           /* TIMESTAMP_VAL  */
    NULL_VAL = 291,                /* NULL_VAL  */
    IDENTIFIER = 292,              /* IDENTIFIER  */
    LPAREN = 293,                  /* LPAREN  */
    RPAREN = 294,                  /* RPAREN  */
    COMMA = 295,                   /* COMMA  */
    SEMICOLON = 296,               /* SEMICOLON  */
    ASTERISK = 297,                /* ASTERISK  */
    EQ = 298,                      /* EQ  */
    LT = 299,                      /* LT  */
    GT = 300,                      /* GT  */
    LE = 301,                      /* LE  */
    GE = 302,                      /* GE  */
    NE = 303,                      /* NE  */
    AND = 304,                     /* AND  */
    OR = 305                       /* OR  */
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
#define DATABASE 270
#define USE 271
#define SHOW 272
#define TABLES 273
#define DATABASES 274
#define AT_FILE 275
#define INT_TYPE 276
#define VARCHAR_TYPE 277
#define BOOLEAN_TYPE 278
#define FLOAT_TYPE 279
#define CHAR_TYPE 280
#define DATE_TYPE 281
#define TIMESTAMP_TYPE 282
#define INT_VAL 283
#define VARCHAR_VAL 284
#define TRUE_VAL 285
#define FALSE_VAL 286
#define FLOAT_VAL 287
#define CHAR_VAL 288
#define DATE_VAL 289
#define TIMESTAMP_VAL 290
#define NULL_VAL 291
#define IDENTIFIER 292
#define LPAREN 293
#define RPAREN 294
#define COMMA 295
#define SEMICOLON 296
#define ASTERISK 297
#define EQ 298
#define LT 299
#define GT 300
#define LE 301
#define GE 302
#define NE 303
#define AND 304
#define OR 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parser.y"

    struct {
        char name[100];
        struct node* nd;
    } nd_obj;

#line 174 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
