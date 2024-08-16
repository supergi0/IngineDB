/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include "../include/parser/parser.hpp"
#include "lex.yy.c"

void yyerror(const char *s);
int yylex();
int yywrap();

node* head = NULL;
bool error_occured = false;


#line 84 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 244 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SELECT = 3,                     /* SELECT  */
  YYSYMBOL_FROM = 4,                       /* FROM  */
  YYSYMBOL_WHERE = 5,                      /* WHERE  */
  YYSYMBOL_INSERT = 6,                     /* INSERT  */
  YYSYMBOL_INTO = 7,                       /* INTO  */
  YYSYMBOL_VALUES = 8,                     /* VALUES  */
  YYSYMBOL_UPDATE = 9,                     /* UPDATE  */
  YYSYMBOL_SET = 10,                       /* SET  */
  YYSYMBOL_DELETE = 11,                    /* DELETE  */
  YYSYMBOL_CREATE = 12,                    /* CREATE  */
  YYSYMBOL_TABLE = 13,                     /* TABLE  */
  YYSYMBOL_DROP = 14,                      /* DROP  */
  YYSYMBOL_DATABASE = 15,                  /* DATABASE  */
  YYSYMBOL_USE = 16,                       /* USE  */
  YYSYMBOL_SHOW = 17,                      /* SHOW  */
  YYSYMBOL_TABLES = 18,                    /* TABLES  */
  YYSYMBOL_DATABASES = 19,                 /* DATABASES  */
  YYSYMBOL_AT_FILE = 20,                   /* AT_FILE  */
  YYSYMBOL_INT_TYPE = 21,                  /* INT_TYPE  */
  YYSYMBOL_VARCHAR_TYPE = 22,              /* VARCHAR_TYPE  */
  YYSYMBOL_BOOLEAN_TYPE = 23,              /* BOOLEAN_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 24,                /* FLOAT_TYPE  */
  YYSYMBOL_CHAR_TYPE = 25,                 /* CHAR_TYPE  */
  YYSYMBOL_DATE_TYPE = 26,                 /* DATE_TYPE  */
  YYSYMBOL_TIMESTAMP_TYPE = 27,            /* TIMESTAMP_TYPE  */
  YYSYMBOL_INT_VAL = 28,                   /* INT_VAL  */
  YYSYMBOL_VARCHAR_VAL = 29,               /* VARCHAR_VAL  */
  YYSYMBOL_TRUE_VAL = 30,                  /* TRUE_VAL  */
  YYSYMBOL_FALSE_VAL = 31,                 /* FALSE_VAL  */
  YYSYMBOL_FLOAT_VAL = 32,                 /* FLOAT_VAL  */
  YYSYMBOL_CHAR_VAL = 33,                  /* CHAR_VAL  */
  YYSYMBOL_DATE_VAL = 34,                  /* DATE_VAL  */
  YYSYMBOL_TIMESTAMP_VAL = 35,             /* TIMESTAMP_VAL  */
  YYSYMBOL_NULL_VAL = 36,                  /* NULL_VAL  */
  YYSYMBOL_IDENTIFIER = 37,                /* IDENTIFIER  */
  YYSYMBOL_LPAREN = 38,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 39,                    /* RPAREN  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 41,                 /* SEMICOLON  */
  YYSYMBOL_ASTERISK = 42,                  /* ASTERISK  */
  YYSYMBOL_EQ = 43,                        /* EQ  */
  YYSYMBOL_LT = 44,                        /* LT  */
  YYSYMBOL_GT = 45,                        /* GT  */
  YYSYMBOL_LE = 46,                        /* LE  */
  YYSYMBOL_GE = 47,                        /* GE  */
  YYSYMBOL_NE = 48,                        /* NE  */
  YYSYMBOL_AND = 49,                       /* AND  */
  YYSYMBOL_OR = 50,                        /* OR  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_sql_query = 52,                 /* sql_query  */
  YYSYMBOL_at_file_statement = 53,         /* at_file_statement  */
  YYSYMBOL_select_statement = 54,          /* select_statement  */
  YYSYMBOL_select_list = 55,               /* select_list  */
  YYSYMBOL_column_list = 56,               /* column_list  */
  YYSYMBOL_table_list = 57,                /* table_list  */
  YYSYMBOL_where_clause = 58,              /* where_clause  */
  YYSYMBOL_or_condition = 59,              /* or_condition  */
  YYSYMBOL_and_condition = 60,             /* and_condition  */
  YYSYMBOL_basic_condition = 61,           /* basic_condition  */
  YYSYMBOL_comparison_operator = 62,       /* comparison_operator  */
  YYSYMBOL_expression = 63,                /* expression  */
  YYSYMBOL_insert_statement = 64,          /* insert_statement  */
  YYSYMBOL_value_list = 65,                /* value_list  */
  YYSYMBOL_update_statement = 66,          /* update_statement  */
  YYSYMBOL_update_list = 67,               /* update_list  */
  YYSYMBOL_delete_statement = 68,          /* delete_statement  */
  YYSYMBOL_create_table_statement = 69,    /* create_table_statement  */
  YYSYMBOL_column_definitions = 70,        /* column_definitions  */
  YYSYMBOL_column_definition = 71,         /* column_definition  */
  YYSYMBOL_data_type = 72,                 /* data_type  */
  YYSYMBOL_drop_table_statement = 73,      /* drop_table_statement  */
  YYSYMBOL_show_table_statement = 74,      /* show_table_statement  */
  YYSYMBOL_show_database_statement = 75,   /* show_database_statement  */
  YYSYMBOL_create_database_statement = 76, /* create_database_statement  */
  YYSYMBOL_use_database_statement = 77,    /* use_database_statement  */
  YYSYMBOL_drop_database_statement = 78    /* drop_database_statement  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   117

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  129

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    40,    40,    48,    56,    64,    72,    80,    88,    94,
     100,   106,   112,   118,   126,   142,   165,   174,   183,   192,
     209,   222,   225,   238,   244,   258,   264,   277,   288,   305,
     314,   323,   332,   341,   350,   362,   371,   380,   389,   398,
     407,   416,   425,   434,   443,   455,   501,   507,   521,   547,
     561,   583,   608,   641,   647,   661,   674,   683,   692,   701,
     710,   719,   728,   740,   765,   785,   805,   829,   853
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "SELECT", "FROM",
  "WHERE", "INSERT", "INTO", "VALUES", "UPDATE", "SET", "DELETE", "CREATE",
  "TABLE", "DROP", "DATABASE", "USE", "SHOW", "TABLES", "DATABASES",
  "AT_FILE", "INT_TYPE", "VARCHAR_TYPE", "BOOLEAN_TYPE", "FLOAT_TYPE",
  "CHAR_TYPE", "DATE_TYPE", "TIMESTAMP_TYPE", "INT_VAL", "VARCHAR_VAL",
  "TRUE_VAL", "FALSE_VAL", "FLOAT_VAL", "CHAR_VAL", "DATE_VAL",
  "TIMESTAMP_VAL", "NULL_VAL", "IDENTIFIER", "LPAREN", "RPAREN", "COMMA",
  "SEMICOLON", "ASTERISK", "EQ", "LT", "GT", "LE", "GE", "NE", "AND", "OR",
  "$accept", "sql_query", "at_file_statement", "select_statement",
  "select_list", "column_list", "table_list", "where_clause",
  "or_condition", "and_condition", "basic_condition",
  "comparison_operator", "expression", "insert_statement", "value_list",
  "update_statement", "update_list", "delete_statement",
  "create_table_statement", "column_definitions", "column_definition",
  "data_type", "drop_table_statement", "show_table_statement",
  "show_database_statement", "create_database_statement",
  "use_database_statement", "drop_database_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       1,   -31,    12,   -35,     4,     7,    11,    10,    35,    16,
      27,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,    60,    26,    28,    57,    31,
      32,    33,    34,    36,    37,    38,    39,   -99,   -99,    40,
      41,    43,    45,    67,    46,    42,    44,    47,    48,   -99,
     -99,   -99,    67,   -99,    49,    50,    -5,    18,    51,    53,
     -99,   -99,   -99,   -99,    54,    19,     8,    59,    56,   -14,
      18,    52,    55,   -99,   -99,    25,    21,   -99,   -99,    68,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,    58,   -99,   -99,   -99,   -99,   -99,   -99,   -99,     8,
     -36,    18,    18,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,    62,    53,    61,     8,   -99,   -99,    55,   -99,   -99,
     -99,     8,   -99,   -99,    23,    64,     8,   -99,   -99
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     2,     3,     4,     5,     6,     7,     8,    12,
       9,    10,    11,    18,    16,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,     1,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,    64,
      65,    20,    21,    19,     0,     0,    21,     0,     0,     0,
      66,    63,    68,    67,     0,     0,     0,     0,     0,     0,
       0,    22,    23,    25,    51,     0,     0,    53,    15,     0,
      36,    38,    42,    43,    37,    39,    40,    41,    44,    35,
      49,     0,    48,    29,    30,    31,    32,    33,    34,     0,
       0,     0,     0,    56,    57,    58,    59,    60,    61,    62,
      55,     0,     0,     0,     0,    27,    28,    24,    26,    52,
      54,     0,    50,    46,     0,     0,     0,    45,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -99,   -99,   -99,   -99,   -99,    63,   -99,   -47,     5,   -10,
     -15,   -99,   -98,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -18,   -99,   -99,   -99,   -99,   -99,   -99,   -99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    10,    11,    12,    25,    26,    52,    58,    71,    72,
      73,    99,    90,    13,   124,    14,    56,    15,    16,    76,
      77,   110,    17,    18,    19,    20,    21,    22
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      57,   115,    28,   116,     1,    64,    23,     2,    29,    68,
       3,    24,     4,     5,   101,     6,   122,     7,     8,    27,
      30,     9,    31,   123,    32,    34,    33,    38,   128,    93,
      94,    95,    96,    97,    98,    67,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,   103,   104,   105,   106,
     107,   108,   109,    35,    36,    69,    70,    37,    79,    40,
     111,   112,   125,   126,    39,    41,    40,    42,    43,    44,
      45,    46,    57,    47,    48,   100,   113,    51,    53,    49,
      50,    54,    55,    60,    59,    61,    23,   118,    62,    63,
      75,   117,    74,    66,   120,    78,    91,    92,     0,   121,
       0,   114,   101,   119,   102,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65
};

static const yytype_int8 yycheck[] =
{
       5,    99,    37,    39,     3,    52,    37,     6,     4,    56,
       9,    42,    11,    12,    50,    14,   114,    16,    17,     7,
      13,    20,    15,   121,    13,    15,    15,     0,   126,    43,
      44,    45,    46,    47,    48,    40,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    21,    22,    23,    24,
      25,    26,    27,    18,    19,    37,    38,    41,    39,    40,
      39,    40,    39,    40,     4,    37,    40,    10,    37,    37,
      37,    37,     5,    37,    37,    70,     8,    37,    37,    41,
      41,    38,    37,    41,    38,    41,    37,   102,    41,    41,
      37,   101,    41,    43,   112,    41,    37,    41,    -1,    38,
      -1,    43,    50,    41,    49,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,     9,    11,    12,    14,    16,    17,    20,
      52,    53,    54,    64,    66,    68,    69,    73,    74,    75,
      76,    77,    78,    37,    42,    55,    56,     7,    37,     4,
      13,    15,    13,    15,    15,    18,    19,    41,     0,     4,
      40,    37,    10,    37,    37,    37,    37,    37,    37,    41,
      41,    37,    57,    37,    38,    37,    67,     5,    58,    38,
      41,    41,    41,    41,    58,    56,    43,    40,    58,    37,
      38,    59,    60,    61,    41,    37,    70,    71,    41,    39,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      63,    37,    41,    43,    44,    45,    46,    47,    48,    62,
      59,    50,    49,    21,    22,    23,    24,    25,    26,    27,
      72,    39,    40,     8,    43,    63,    39,    60,    61,    41,
      71,    38,    63,    63,    65,    39,    40,    41,    63
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    53,    54,    55,    55,    56,    56,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    62,    62,    62,    62,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    64,    65,    65,    66,    67,
      67,    68,    69,    70,    70,    71,    72,    72,    72,    72,
      72,    72,    72,    73,    74,    75,    76,    77,    78
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     6,     1,     1,     1,     3,
       1,     0,     2,     1,     3,     1,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,    11,     1,     3,     6,     3,
       5,     5,     7,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     3,     4,     4,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* sql_query: select_statement  */
#line 41 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;

        head = (yyval.nd_obj).nd;
    }
#line 1393 "y.tab.c"
    break;

  case 3: /* sql_query: insert_statement  */
#line 49 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;

        head = (yyval.nd_obj).nd;
    }
#line 1405 "y.tab.c"
    break;

  case 4: /* sql_query: update_statement  */
#line 57 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;

        head = (yyval.nd_obj).nd;
    }
#line 1417 "y.tab.c"
    break;

  case 5: /* sql_query: delete_statement  */
#line 65 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;

        head = (yyval.nd_obj).nd;
    }
#line 1429 "y.tab.c"
    break;

  case 6: /* sql_query: create_table_statement  */
#line 73 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;

        head = (yyval.nd_obj).nd;
    }
#line 1441 "y.tab.c"
    break;

  case 7: /* sql_query: drop_table_statement  */
#line 81 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;

        head = (yyval.nd_obj).nd;
    }
#line 1453 "y.tab.c"
    break;

  case 8: /* sql_query: show_table_statement  */
#line 89 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
        head = (yyval.nd_obj).nd;
    }
#line 1463 "y.tab.c"
    break;

  case 9: /* sql_query: create_database_statement  */
#line 95 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
        head = (yyval.nd_obj).nd;
    }
#line 1473 "y.tab.c"
    break;

  case 10: /* sql_query: use_database_statement  */
#line 101 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
        head = (yyval.nd_obj).nd;
    }
#line 1483 "y.tab.c"
    break;

  case 11: /* sql_query: drop_database_statement  */
#line 107 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
        head = (yyval.nd_obj).nd;
    }
#line 1493 "y.tab.c"
    break;

  case 12: /* sql_query: show_database_statement  */
#line 113 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
        head = (yyval.nd_obj).nd;
    }
#line 1503 "y.tab.c"
    break;

  case 13: /* sql_query: at_file_statement  */
#line 119 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
        head = (yyval.nd_obj).nd;
    }
#line 1513 "y.tab.c"
    break;

  case 14: /* at_file_statement: AT_FILE SEMICOLON  */
#line 127 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("at_file_statement");
        
        (yyvsp[-1].nd_obj).nd = mknode("AT_FILE");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);
        
        (yyvsp[0].nd_obj).nd = mknode("SEMICOLON");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[0].nd_obj).nd;
    }
#line 1530 "y.tab.c"
    break;

  case 15: /* select_statement: SELECT select_list FROM table_list where_clause SEMICOLON  */
#line 143 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("select_statement");

        (yyvsp[-5].nd_obj).nd = mknode("SELECT");
        (yyvsp[-5].nd_obj).nd->children[0] = mknode((yyvsp[-5].nd_obj).name);

        (yyvsp[-3].nd_obj).nd = mknode("FROM");
        (yyvsp[-3].nd_obj).nd->children[0] = mknode((yyvsp[-3].nd_obj).name);

        (yyvsp[0].nd_obj).nd = mknode("SEMICOLON");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-5].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-4].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[-3].nd_obj).nd;
        (yyval.nd_obj).nd->children[3] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[4] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[5] = (yyvsp[0].nd_obj).nd;
    }
#line 1554 "y.tab.c"
    break;

  case 16: /* select_list: ASTERISK  */
#line 166 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("select_list");

        (yyvsp[0].nd_obj).nd = mknode("ASTERISK");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1567 "y.tab.c"
    break;

  case 17: /* select_list: column_list  */
#line 175 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("select_list");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1577 "y.tab.c"
    break;

  case 18: /* column_list: IDENTIFIER  */
#line 184 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("column_list");

        (yyvsp[0].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1590 "y.tab.c"
    break;

  case 19: /* column_list: column_list COMMA IDENTIFIER  */
#line 193 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("column_list");

        (yyvsp[-1].nd_obj).nd = mknode("COMMA");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyvsp[0].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 1608 "y.tab.c"
    break;

  case 20: /* table_list: IDENTIFIER  */
#line 210 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("table_list");

        (yyvsp[0].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1621 "y.tab.c"
    break;

  case 21: /* where_clause: %empty  */
#line 222 "parser.y"
    {
        
    }
#line 1629 "y.tab.c"
    break;

  case 22: /* where_clause: WHERE or_condition  */
#line 226 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("where_clause");

        (yyvsp[-1].nd_obj).nd = mknode("WHERE");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[0].nd_obj).nd;
    }
#line 1643 "y.tab.c"
    break;

  case 23: /* or_condition: and_condition  */
#line 239 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("or_condition");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1653 "y.tab.c"
    break;

  case 24: /* or_condition: or_condition OR and_condition  */
#line 245 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("or_condition");

        (yyvsp[-1].nd_obj).nd = mknode("OR");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 1668 "y.tab.c"
    break;

  case 25: /* and_condition: basic_condition  */
#line 259 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("and_condition");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1678 "y.tab.c"
    break;

  case 26: /* and_condition: and_condition AND basic_condition  */
#line 265 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("and_condition");

        (yyvsp[-1].nd_obj).nd = mknode("AND");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 1693 "y.tab.c"
    break;

  case 27: /* basic_condition: IDENTIFIER comparison_operator expression  */
#line 278 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("basic_condition");

        (yyvsp[-2].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[-2].nd_obj).nd->children[0] = mknode((yyvsp[-2].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 1708 "y.tab.c"
    break;

  case 28: /* basic_condition: LPAREN or_condition RPAREN  */
#line 289 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("basic_condition");

        (yyvsp[-2].nd_obj).nd = mknode("LPAREN");
        (yyvsp[-2].nd_obj).nd->children[0] = mknode((yyvsp[-2].nd_obj).name);

        (yyvsp[0].nd_obj).nd = mknode("RPAREN");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 1726 "y.tab.c"
    break;

  case 29: /* comparison_operator: EQ  */
#line 306 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("comparison_operator");

        (yyvsp[0].nd_obj).nd = mknode("EQ");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1739 "y.tab.c"
    break;

  case 30: /* comparison_operator: LT  */
#line 315 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("comparison_operator");

        (yyvsp[0].nd_obj).nd = mknode("LT");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1752 "y.tab.c"
    break;

  case 31: /* comparison_operator: GT  */
#line 324 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("comparison_operator");

        (yyvsp[0].nd_obj).nd = mknode("GT");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1765 "y.tab.c"
    break;

  case 32: /* comparison_operator: LE  */
#line 333 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("comparison_operator");

        (yyvsp[0].nd_obj).nd = mknode("LE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1778 "y.tab.c"
    break;

  case 33: /* comparison_operator: GE  */
#line 342 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("comparison_operator");

        (yyvsp[0].nd_obj).nd = mknode("GE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1791 "y.tab.c"
    break;

  case 34: /* comparison_operator: NE  */
#line 351 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("comparison_operator");

        (yyvsp[0].nd_obj).nd = mknode("NE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1804 "y.tab.c"
    break;

  case 35: /* expression: IDENTIFIER  */
#line 363 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1817 "y.tab.c"
    break;

  case 36: /* expression: INT_VAL  */
#line 372 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("INT_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1830 "y.tab.c"
    break;

  case 37: /* expression: FLOAT_VAL  */
#line 381 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("FLOAT_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1843 "y.tab.c"
    break;

  case 38: /* expression: VARCHAR_VAL  */
#line 390 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("VARCHAR");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1856 "y.tab.c"
    break;

  case 39: /* expression: CHAR_VAL  */
#line 399 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("CHAR_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1869 "y.tab.c"
    break;

  case 40: /* expression: DATE_VAL  */
#line 408 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("DATE_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1882 "y.tab.c"
    break;

  case 41: /* expression: TIMESTAMP_VAL  */
#line 417 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("TIMESTAMP_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1895 "y.tab.c"
    break;

  case 42: /* expression: TRUE_VAL  */
#line 426 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("TRUE_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1908 "y.tab.c"
    break;

  case 43: /* expression: FALSE_VAL  */
#line 435 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("FALSE_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1921 "y.tab.c"
    break;

  case 44: /* expression: NULL_VAL  */
#line 444 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");
        
        (yyvsp[0].nd_obj).nd = mknode("NULL_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1934 "y.tab.c"
    break;

  case 45: /* insert_statement: INSERT INTO IDENTIFIER LPAREN column_list RPAREN VALUES LPAREN value_list RPAREN SEMICOLON  */
#line 456 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("insert_statement");

        (yyvsp[-10].nd_obj).nd = mknode("INSERT");
        (yyvsp[-10].nd_obj).nd->children[0] = mknode((yyvsp[-10].nd_obj).name);

        (yyvsp[-9].nd_obj).nd = mknode("INTO");
        (yyvsp[-9].nd_obj).nd->children[0] = mknode((yyvsp[-9].nd_obj).name);

        (yyvsp[-8].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[-8].nd_obj).nd->children[0] = mknode((yyvsp[-8].nd_obj).name);

        (yyvsp[-7].nd_obj).nd = mknode("LPAREN");
        (yyvsp[-7].nd_obj).nd->children[0] = mknode((yyvsp[-7].nd_obj).name);

        (yyvsp[-5].nd_obj).nd = mknode("RPAREN");
        (yyvsp[-5].nd_obj).nd->children[0] = mknode((yyvsp[-5].nd_obj).name);

        (yyvsp[-4].nd_obj).nd = mknode("VALUES");
        (yyvsp[-4].nd_obj).nd->children[0] = mknode((yyvsp[-4].nd_obj).name);

        (yyvsp[-3].nd_obj).nd = mknode("LPAREN");
        (yyvsp[-3].nd_obj).nd->children[0] = mknode((yyvsp[-3].nd_obj).name);

        (yyvsp[-1].nd_obj).nd = mknode("RPAREN");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyvsp[0].nd_obj).nd = mknode("SEMICOLON");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-10].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-9].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[-8].nd_obj).nd;
        (yyval.nd_obj).nd->children[3] = (yyvsp[-7].nd_obj).nd;
        (yyval.nd_obj).nd->children[4] = (yyvsp[-6].nd_obj).nd;
        (yyval.nd_obj).nd->children[5] = (yyvsp[-5].nd_obj).nd;
        (yyval.nd_obj).nd->children[6] = (yyvsp[-4].nd_obj).nd;
        (yyval.nd_obj).nd->children[7] = (yyvsp[-3].nd_obj).nd;
        (yyval.nd_obj).nd->children[8] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[9] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[10] = (yyvsp[0].nd_obj).nd;
    }
#line 1981 "y.tab.c"
    break;

  case 46: /* value_list: expression  */
#line 502 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("value_list");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1991 "y.tab.c"
    break;

  case 47: /* value_list: value_list COMMA expression  */
#line 508 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("value_list");

        (yyvsp[-1].nd_obj).nd = mknode("COMMA");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 2006 "y.tab.c"
    break;

  case 48: /* update_statement: UPDATE IDENTIFIER SET update_list where_clause SEMICOLON  */
#line 522 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("update_statement");

        (yyvsp[-5].nd_obj).nd = mknode("UPDATE");
        (yyvsp[-5].nd_obj).nd->children[0] = mknode((yyvsp[-5].nd_obj).name);

        (yyvsp[-4].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[-4].nd_obj).nd->children[0] = mknode((yyvsp[-4].nd_obj).name);

        (yyvsp[-3].nd_obj).nd = mknode("SET");
        (yyvsp[-3].nd_obj).nd->children[0] = mknode((yyvsp[-3].nd_obj).name);

        (yyvsp[0].nd_obj).nd = mknode("SEMICOLON");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-5].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-4].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[-3].nd_obj).nd;
        (yyval.nd_obj).nd->children[3] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[4] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[5] = (yyvsp[0].nd_obj).nd;
    }
#line 2033 "y.tab.c"
    break;

  case 49: /* update_list: IDENTIFIER EQ expression  */
#line 548 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("update_list");

        (yyvsp[-2].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[-2].nd_obj).nd->children[0] = mknode((yyvsp[-2].nd_obj).name);

        (yyvsp[-1].nd_obj).nd = mknode("EQ");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 2051 "y.tab.c"
    break;

  case 50: /* update_list: update_list COMMA IDENTIFIER EQ expression  */
#line 562 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("update_list");

        (yyvsp[-3].nd_obj).nd = mknode("COMMA");
        (yyvsp[-3].nd_obj).nd->children[0] = mknode((yyvsp[-3].nd_obj).name);

        (yyvsp[-2].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[-2].nd_obj).nd->children[0] = mknode((yyvsp[-2].nd_obj).name);

        (yyvsp[-1].nd_obj).nd = mknode("EQ");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-4].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-3].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[3] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[4] = (yyvsp[0].nd_obj).nd;
    }
#line 2074 "y.tab.c"
    break;

  case 51: /* delete_statement: DELETE FROM IDENTIFIER where_clause SEMICOLON  */
#line 584 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("delete_statement");

        (yyvsp[-4].nd_obj).nd = mknode("DELETE");
        (yyvsp[-4].nd_obj).nd->children[0] = mknode((yyvsp[-4].nd_obj).name);

        (yyvsp[-3].nd_obj).nd = mknode("FROM");
        (yyvsp[-3].nd_obj).nd->children[0] = mknode((yyvsp[-3].nd_obj).name);

        (yyvsp[-2].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[-2].nd_obj).nd->children[0] = mknode((yyvsp[-2].nd_obj).name);

        (yyvsp[0].nd_obj).nd = mknode("SEMICOLON");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-4].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-3].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[3] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[4] = (yyvsp[0].nd_obj).nd;
    }
#line 2100 "y.tab.c"
    break;

  case 52: /* create_table_statement: CREATE TABLE IDENTIFIER LPAREN column_definitions RPAREN SEMICOLON  */
#line 609 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("create_table_statement");

        (yyvsp[-6].nd_obj).nd = mknode("CREATE");
        (yyvsp[-6].nd_obj).nd->children[0] = mknode((yyvsp[-6].nd_obj).name);

        (yyvsp[-5].nd_obj).nd = mknode("TABLE");
        (yyvsp[-5].nd_obj).nd->children[0] = mknode((yyvsp[-5].nd_obj).name);

        (yyvsp[-4].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[-4].nd_obj).nd->children[0] = mknode((yyvsp[-4].nd_obj).name);

        (yyvsp[-3].nd_obj).nd = mknode("LPAREN");
        (yyvsp[-3].nd_obj).nd->children[0] = mknode((yyvsp[-3].nd_obj).name);

        (yyvsp[-1].nd_obj).nd = mknode("RPAREN");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyvsp[0].nd_obj).nd = mknode("SEMICOLON");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-6].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-5].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[-4].nd_obj).nd;
        (yyval.nd_obj).nd->children[3] = (yyvsp[-3].nd_obj).nd;
        (yyval.nd_obj).nd->children[4] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[5] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[6] = (yyvsp[0].nd_obj).nd;
    }
#line 2134 "y.tab.c"
    break;

  case 53: /* column_definitions: column_definition  */
#line 642 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("column_definitions");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2144 "y.tab.c"
    break;

  case 54: /* column_definitions: column_definitions COMMA column_definition  */
#line 648 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("column_definitions");

        (yyvsp[-1].nd_obj).nd = mknode("COMMA");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 2159 "y.tab.c"
    break;

  case 55: /* column_definition: IDENTIFIER data_type  */
#line 662 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("column_definition");

        (yyvsp[-1].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[0].nd_obj).nd;
    }
#line 2173 "y.tab.c"
    break;

  case 56: /* data_type: INT_TYPE  */
#line 675 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("data_type");

        (yyvsp[0].nd_obj).nd = mknode("INT_TYPE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2186 "y.tab.c"
    break;

  case 57: /* data_type: VARCHAR_TYPE  */
#line 684 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("data_type");

        (yyvsp[0].nd_obj).nd = mknode("VARCHAR_TYPE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2199 "y.tab.c"
    break;

  case 58: /* data_type: BOOLEAN_TYPE  */
#line 693 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("data_type");

        (yyvsp[0].nd_obj).nd = mknode("BOOLEAN_TYPE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2212 "y.tab.c"
    break;

  case 59: /* data_type: FLOAT_TYPE  */
#line 702 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("data_type");

        (yyvsp[0].nd_obj).nd = mknode("FLOAT_TYPE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2225 "y.tab.c"
    break;

  case 60: /* data_type: CHAR_TYPE  */
#line 711 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("data_type");

        (yyvsp[0].nd_obj).nd = mknode("CHAR_TYPE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2238 "y.tab.c"
    break;

  case 61: /* data_type: DATE_TYPE  */
#line 720 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("data_type");

        (yyvsp[0].nd_obj).nd = mknode("DATE_TYPE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2251 "y.tab.c"
    break;

  case 62: /* data_type: TIMESTAMP_TYPE  */
#line 729 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("data_type");

        (yyvsp[0].nd_obj).nd = mknode("TIMESTAMP_TYPE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2264 "y.tab.c"
    break;

  case 63: /* drop_table_statement: DROP TABLE IDENTIFIER SEMICOLON  */
#line 741 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("drop_table_statement");

        (yyvsp[-3].nd_obj).nd = mknode("DROP");
        (yyvsp[-3].nd_obj).nd->children[0] = mknode((yyvsp[-3].nd_obj).name);

        (yyvsp[-2].nd_obj).nd = mknode("TABLE");
        (yyvsp[-2].nd_obj).nd->children[0] = mknode((yyvsp[-2].nd_obj).name);

        (yyvsp[-1].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyvsp[0].nd_obj).nd = mknode("SEMICOLON");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);


        (yyval.nd_obj).nd->children[0] = (yyvsp[-3].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[3] = (yyvsp[0].nd_obj).nd;
    }
#line 2290 "y.tab.c"
    break;

  case 64: /* show_table_statement: SHOW TABLES SEMICOLON  */
#line 766 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("show_table_statement");

        (yyvsp[-2].nd_obj).nd = mknode("SHOW");
        (yyvsp[-2].nd_obj).nd->children[0] = mknode((yyvsp[-2].nd_obj).name);

        (yyvsp[-1].nd_obj).nd = mknode("TABLES");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyvsp[0].nd_obj).nd = mknode("SEMICOLON");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 2311 "y.tab.c"
    break;

  case 65: /* show_database_statement: SHOW DATABASES SEMICOLON  */
#line 786 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("show_database_statement");

        (yyvsp[-2].nd_obj).nd = mknode("SHOW");
        (yyvsp[-2].nd_obj).nd->children[0] = mknode((yyvsp[-2].nd_obj).name);

        (yyvsp[-1].nd_obj).nd = mknode("DATABASES");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyvsp[0].nd_obj).nd = mknode("SEMICOLON");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 2332 "y.tab.c"
    break;

  case 66: /* create_database_statement: CREATE DATABASE IDENTIFIER SEMICOLON  */
#line 806 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("create_database_statement");

        (yyvsp[-3].nd_obj).nd = mknode("CREATE");
        (yyvsp[-3].nd_obj).nd->children[0] = mknode((yyvsp[-3].nd_obj).name);

        (yyvsp[-2].nd_obj).nd = mknode("DATABASE");
        (yyvsp[-2].nd_obj).nd->children[0] = mknode((yyvsp[-2].nd_obj).name);

        (yyvsp[-1].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyvsp[0].nd_obj).nd = mknode("SEMICOLON");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-3].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[3] = (yyvsp[0].nd_obj).nd;
    }
#line 2357 "y.tab.c"
    break;

  case 67: /* use_database_statement: USE DATABASE IDENTIFIER SEMICOLON  */
#line 830 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("use_database_statement");

        (yyvsp[-3].nd_obj).nd = mknode("USE");
        (yyvsp[-3].nd_obj).nd->children[0] = mknode((yyvsp[-3].nd_obj).name);

        (yyvsp[-2].nd_obj).nd = mknode("DATABASE");
        (yyvsp[-2].nd_obj).nd->children[0] = mknode((yyvsp[-2].nd_obj).name);

        (yyvsp[-1].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyvsp[0].nd_obj).nd = mknode("SEMICOLON");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-3].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[3] = (yyvsp[0].nd_obj).nd;
    }
#line 2382 "y.tab.c"
    break;

  case 68: /* drop_database_statement: DROP DATABASE IDENTIFIER SEMICOLON  */
#line 854 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("drop_database_statement");

        (yyvsp[-3].nd_obj).nd = mknode("DROP");
        (yyvsp[-3].nd_obj).nd->children[0] = mknode((yyvsp[-3].nd_obj).name);

        (yyvsp[-2].nd_obj).nd = mknode("DATABASE");
        (yyvsp[-2].nd_obj).nd->children[0] = mknode((yyvsp[-2].nd_obj).name);

        (yyvsp[-1].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyvsp[0].nd_obj).nd = mknode("SEMICOLON");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-3].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[3] = (yyvsp[0].nd_obj).nd;
    }
#line 2407 "y.tab.c"
    break;


#line 2411 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 877 "parser.y"


node* getParseTree(const char* input) {
    error_occured = false;
    YY_BUFFER_STATE bufferState = yy_scan_string(input);
    yyparse();
    yy_delete_buffer(bufferState);

    if(!error_occured){
    return head;
    }
    else{
    return NULL;

    }
}

void yyerror(const char *s) {
    fprintf(stderr, "You have an error in your SQL syntax; Use the right syntax near \"%s\" ", yytext);
    error_occured = true;
}
