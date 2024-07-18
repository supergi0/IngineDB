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

#include "../include/basic.h"
#include "../include/parser/parser.h"
#include "./helper.c"
#include "lex.yy.c"
#include "errors.c"

void yyerror(const char *s);
int yylex();
int yywrap();

node* head = NULL;


#line 86 "y.tab.c"

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

#line 234 "y.tab.c"

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
  YYSYMBOL_INT_TYPE = 15,                  /* INT_TYPE  */
  YYSYMBOL_VARCHAR_TYPE = 16,              /* VARCHAR_TYPE  */
  YYSYMBOL_BOOLEAN_TYPE = 17,              /* BOOLEAN_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 18,                /* FLOAT_TYPE  */
  YYSYMBOL_CHAR_TYPE = 19,                 /* CHAR_TYPE  */
  YYSYMBOL_DATE_TYPE = 20,                 /* DATE_TYPE  */
  YYSYMBOL_TIMESTAMP_TYPE = 21,            /* TIMESTAMP_TYPE  */
  YYSYMBOL_INT_VAL = 22,                   /* INT_VAL  */
  YYSYMBOL_VARCHAR_VAL = 23,               /* VARCHAR_VAL  */
  YYSYMBOL_TRUE_VAL = 24,                  /* TRUE_VAL  */
  YYSYMBOL_FALSE_VAL = 25,                 /* FALSE_VAL  */
  YYSYMBOL_FLOAT_VAL = 26,                 /* FLOAT_VAL  */
  YYSYMBOL_CHAR_VAL = 27,                  /* CHAR_VAL  */
  YYSYMBOL_DATE_VAL = 28,                  /* DATE_VAL  */
  YYSYMBOL_TIMESTAMP_VAL = 29,             /* TIMESTAMP_VAL  */
  YYSYMBOL_NULL_VAL = 30,                  /* NULL_VAL  */
  YYSYMBOL_IDENTIFIER = 31,                /* IDENTIFIER  */
  YYSYMBOL_LPAREN = 32,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 33,                    /* RPAREN  */
  YYSYMBOL_COMMA = 34,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 35,                 /* SEMICOLON  */
  YYSYMBOL_ASTERISK = 36,                  /* ASTERISK  */
  YYSYMBOL_EQ = 37,                        /* EQ  */
  YYSYMBOL_LT = 38,                        /* LT  */
  YYSYMBOL_GT = 39,                        /* GT  */
  YYSYMBOL_LE = 40,                        /* LE  */
  YYSYMBOL_GE = 41,                        /* GE  */
  YYSYMBOL_NE = 42,                        /* NE  */
  YYSYMBOL_AND = 43,                       /* AND  */
  YYSYMBOL_OR = 44,                        /* OR  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_sql_query = 46,                 /* sql_query  */
  YYSYMBOL_select_statement = 47,          /* select_statement  */
  YYSYMBOL_select_list = 48,               /* select_list  */
  YYSYMBOL_column_list = 49,               /* column_list  */
  YYSYMBOL_table_list = 50,                /* table_list  */
  YYSYMBOL_where_clause = 51,              /* where_clause  */
  YYSYMBOL_or_condition = 52,              /* or_condition  */
  YYSYMBOL_and_condition = 53,             /* and_condition  */
  YYSYMBOL_basic_condition = 54,           /* basic_condition  */
  YYSYMBOL_comparison_operator = 55,       /* comparison_operator  */
  YYSYMBOL_expression = 56,                /* expression  */
  YYSYMBOL_insert_statement = 57,          /* insert_statement  */
  YYSYMBOL_value_list = 58,                /* value_list  */
  YYSYMBOL_update_statement = 59,          /* update_statement  */
  YYSYMBOL_update_list = 60,               /* update_list  */
  YYSYMBOL_delete_statement = 61,          /* delete_statement  */
  YYSYMBOL_create_table_statement = 62,    /* create_table_statement  */
  YYSYMBOL_column_definitions = 63,        /* column_definitions  */
  YYSYMBOL_column_definition = 64,         /* column_definition  */
  YYSYMBOL_data_type = 65,                 /* data_type  */
  YYSYMBOL_drop_table_statement = 66       /* drop_table_statement  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   100

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  106

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    41,    41,    49,    57,    65,    73,    81,    92,   115,
     124,   133,   142,   159,   172,   175,   188,   194,   208,   214,
     227,   238,   255,   264,   273,   282,   291,   300,   312,   321,
     330,   339,   348,   357,   366,   375,   384,   393,   405,   451,
     457,   471,   497,   511,   533,   558,   591,   597,   611,   624,
     633,   642,   651,   660,   669,   678,   690
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
  "TABLE", "DROP", "INT_TYPE", "VARCHAR_TYPE", "BOOLEAN_TYPE",
  "FLOAT_TYPE", "CHAR_TYPE", "DATE_TYPE", "TIMESTAMP_TYPE", "INT_VAL",
  "VARCHAR_VAL", "TRUE_VAL", "FALSE_VAL", "FLOAT_VAL", "CHAR_VAL",
  "DATE_VAL", "TIMESTAMP_VAL", "NULL_VAL", "IDENTIFIER", "LPAREN",
  "RPAREN", "COMMA", "SEMICOLON", "ASTERISK", "EQ", "LT", "GT", "LE", "GE",
  "NE", "AND", "OR", "$accept", "sql_query", "select_statement",
  "select_list", "column_list", "table_list", "where_clause",
  "or_condition", "and_condition", "basic_condition",
  "comparison_operator", "expression", "insert_statement", "value_list",
  "update_statement", "update_list", "delete_statement",
  "create_table_statement", "column_definitions", "column_definition",
  "data_type", "drop_table_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-76)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -1,   -27,     5,   -16,    44,    39,    40,    54,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,    51,    22,    26,    48,
      28,    29,    30,   -76,    31,    32,    33,    35,    59,    36,
      34,   -76,    59,   -76,    41,    37,    -5,   -25,    38,    45,
     -76,    42,    -9,     8,    47,    46,   -20,   -25,    23,    27,
     -76,   -76,    25,    -7,   -76,   -76,    63,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,    43,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     8,   -30,   -25,   -25,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,    49,    45,
      50,     8,   -76,   -76,    27,   -76,   -76,   -76,     8,   -76,
     -76,    16,    52,     8,   -76,   -76
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,    11,     9,     0,    10,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,    14,     0,
       0,    13,    14,    12,     0,     0,    14,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,    15,    16,
      18,    44,     0,     0,    46,     8,     0,    29,    31,    35,
      36,    30,    32,    33,    34,    37,    28,    42,     0,    41,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
      49,    50,    51,    52,    53,    54,    55,    48,     0,     0,
       0,     0,    20,    21,    17,    19,    45,    47,     0,    43,
      39,     0,     0,     0,    38,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -76,   -76,   -76,   -76,    55,   -76,    15,    53,    -3,     0,
     -76,   -75,   -76,   -76,   -76,   -76,   -76,   -76,   -76,    -6,
     -76,   -76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     7,     8,    16,    17,    32,    38,    48,    49,    50,
      76,    67,     9,   101,    10,    36,    11,    12,    53,    54,
      87,    13
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      37,    92,     1,    93,    14,     2,    46,    47,     3,    15,
       4,     5,    18,     6,    78,    19,    99,    70,    71,    72,
      73,    74,    75,   100,    56,    25,    88,    89,   105,    44,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      80,    81,    82,    83,    84,    85,    86,    41,    20,   102,
     103,    45,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    33,    37,    34,    35,    78,    39,    40,
      79,    90,    14,    51,    43,    94,    52,    55,    68,    95,
      91,    69,    98,    97,    96,     0,     0,   104,     0,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77
};

static const yytype_int8 yycheck[] =
{
       5,    76,     3,    33,    31,     6,    31,    32,     9,    36,
      11,    12,     7,    14,    44,    31,    91,    37,    38,    39,
      40,    41,    42,    98,    33,    34,    33,    34,   103,    34,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      15,    16,    17,    18,    19,    20,    21,    32,     4,    33,
      34,    36,    13,    13,     0,     4,    34,    31,    10,    31,
      31,    31,    31,    31,     5,    32,    31,    44,    32,    35,
      43,     8,    31,    35,    37,    78,    31,    35,    31,    79,
      37,    35,    32,    89,    35,    -1,    -1,    35,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,     9,    11,    12,    14,    46,    47,    57,
      59,    61,    62,    66,    31,    36,    48,    49,     7,    31,
       4,    13,    13,     0,     4,    34,    31,    10,    31,    31,
      31,    31,    50,    31,    32,    31,    60,     5,    51,    32,
      35,    51,    49,    37,    34,    51,    31,    32,    52,    53,
      54,    35,    31,    63,    64,    35,    33,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    56,    31,    35,
      37,    38,    39,    40,    41,    42,    55,    52,    44,    43,
      15,    16,    17,    18,    19,    20,    21,    65,    33,    34,
       8,    37,    56,    33,    53,    54,    35,    64,    32,    56,
      56,    58,    33,    34,    35,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    46,    46,    46,    46,    46,    47,    48,
      48,    49,    49,    50,    51,    51,    52,    52,    53,    53,
      54,    54,    55,    55,    55,    55,    55,    55,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    57,    58,
      58,    59,    60,    60,    61,    62,    63,    63,    64,    65,
      65,    65,    65,    65,    65,    65,    66
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     6,     1,
       1,     1,     3,     1,     0,     2,     1,     3,     1,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,    11,     1,
       3,     6,     3,     5,     5,     7,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     4
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
#line 42 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;

        head = (yyval.nd_obj).nd;
    }
#line 1356 "y.tab.c"
    break;

  case 3: /* sql_query: insert_statement  */
#line 50 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;

        head = (yyval.nd_obj).nd;
    }
#line 1368 "y.tab.c"
    break;

  case 4: /* sql_query: update_statement  */
#line 58 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;

        head = (yyval.nd_obj).nd;
    }
#line 1380 "y.tab.c"
    break;

  case 5: /* sql_query: delete_statement  */
#line 66 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;

        head = (yyval.nd_obj).nd;
    }
#line 1392 "y.tab.c"
    break;

  case 6: /* sql_query: create_table_statement  */
#line 74 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;

        head = (yyval.nd_obj).nd;
    }
#line 1404 "y.tab.c"
    break;

  case 7: /* sql_query: drop_table_statement  */
#line 82 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("sql_query");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;

        head = (yyval.nd_obj).nd;
    }
#line 1416 "y.tab.c"
    break;

  case 8: /* select_statement: SELECT select_list FROM table_list where_clause SEMICOLON  */
#line 93 "parser.y"
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
#line 1440 "y.tab.c"
    break;

  case 9: /* select_list: ASTERISK  */
#line 116 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("select_list");

        (yyvsp[0].nd_obj).nd = mknode("ASTERISK");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1453 "y.tab.c"
    break;

  case 10: /* select_list: column_list  */
#line 125 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("select_list");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1463 "y.tab.c"
    break;

  case 11: /* column_list: IDENTIFIER  */
#line 134 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("column_list");

        (yyvsp[0].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1476 "y.tab.c"
    break;

  case 12: /* column_list: column_list COMMA IDENTIFIER  */
#line 143 "parser.y"
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
#line 1494 "y.tab.c"
    break;

  case 13: /* table_list: IDENTIFIER  */
#line 160 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("table_list");

        (yyvsp[0].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1507 "y.tab.c"
    break;

  case 14: /* where_clause: %empty  */
#line 172 "parser.y"
    {
        
    }
#line 1515 "y.tab.c"
    break;

  case 15: /* where_clause: WHERE or_condition  */
#line 176 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("where_clause");

        (yyvsp[-1].nd_obj).nd = mknode("WHERE");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[0].nd_obj).nd;
    }
#line 1529 "y.tab.c"
    break;

  case 16: /* or_condition: and_condition  */
#line 189 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("or_condition");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1539 "y.tab.c"
    break;

  case 17: /* or_condition: or_condition OR and_condition  */
#line 195 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("or_condition");

        (yyvsp[-1].nd_obj).nd = mknode("OR");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 1554 "y.tab.c"
    break;

  case 18: /* and_condition: basic_condition  */
#line 209 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("and_condition");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1564 "y.tab.c"
    break;

  case 19: /* and_condition: and_condition AND basic_condition  */
#line 215 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("and_condition");

        (yyvsp[-1].nd_obj).nd = mknode("AND");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 1579 "y.tab.c"
    break;

  case 20: /* basic_condition: IDENTIFIER comparison_operator expression  */
#line 228 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("basic_condition");

        (yyvsp[-2].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[-2].nd_obj).nd->children[0] = mknode((yyvsp[-2].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 1594 "y.tab.c"
    break;

  case 21: /* basic_condition: LPAREN or_condition RPAREN  */
#line 239 "parser.y"
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
#line 1612 "y.tab.c"
    break;

  case 22: /* comparison_operator: EQ  */
#line 256 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("comparison_operator");

        (yyvsp[0].nd_obj).nd = mknode("EQ");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1625 "y.tab.c"
    break;

  case 23: /* comparison_operator: LT  */
#line 265 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("comparison_operator");

        (yyvsp[0].nd_obj).nd = mknode("LT");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1638 "y.tab.c"
    break;

  case 24: /* comparison_operator: GT  */
#line 274 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("comparison_operator");

        (yyvsp[0].nd_obj).nd = mknode("GT");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1651 "y.tab.c"
    break;

  case 25: /* comparison_operator: LE  */
#line 283 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("comparison_operator");

        (yyvsp[0].nd_obj).nd = mknode("LE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1664 "y.tab.c"
    break;

  case 26: /* comparison_operator: GE  */
#line 292 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("comparison_operator");

        (yyvsp[0].nd_obj).nd = mknode("GE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1677 "y.tab.c"
    break;

  case 27: /* comparison_operator: NE  */
#line 301 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("comparison_operator");

        (yyvsp[0].nd_obj).nd = mknode("NE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1690 "y.tab.c"
    break;

  case 28: /* expression: IDENTIFIER  */
#line 313 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1703 "y.tab.c"
    break;

  case 29: /* expression: INT_VAL  */
#line 322 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("INT_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1716 "y.tab.c"
    break;

  case 30: /* expression: FLOAT_VAL  */
#line 331 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("FLOAT_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1729 "y.tab.c"
    break;

  case 31: /* expression: VARCHAR_VAL  */
#line 340 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("VARCHAR");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1742 "y.tab.c"
    break;

  case 32: /* expression: CHAR_VAL  */
#line 349 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("CHAR_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1755 "y.tab.c"
    break;

  case 33: /* expression: DATE_VAL  */
#line 358 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("DATE_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1768 "y.tab.c"
    break;

  case 34: /* expression: TIMESTAMP_VAL  */
#line 367 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("TIMESTAMP_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1781 "y.tab.c"
    break;

  case 35: /* expression: TRUE_VAL  */
#line 376 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("TRUE_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1794 "y.tab.c"
    break;

  case 36: /* expression: FALSE_VAL  */
#line 385 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");

        (yyvsp[0].nd_obj).nd = mknode("FALSE_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);
        
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1807 "y.tab.c"
    break;

  case 37: /* expression: NULL_VAL  */
#line 394 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("expression");
        
        (yyvsp[0].nd_obj).nd = mknode("NULL_VAL");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1820 "y.tab.c"
    break;

  case 38: /* insert_statement: INSERT INTO IDENTIFIER LPAREN column_list RPAREN VALUES LPAREN value_list RPAREN SEMICOLON  */
#line 406 "parser.y"
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
#line 1867 "y.tab.c"
    break;

  case 39: /* value_list: expression  */
#line 452 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("value_list");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 1877 "y.tab.c"
    break;

  case 40: /* value_list: value_list COMMA expression  */
#line 458 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("value_list");

        (yyvsp[-1].nd_obj).nd = mknode("COMMA");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 1892 "y.tab.c"
    break;

  case 41: /* update_statement: UPDATE IDENTIFIER SET update_list where_clause SEMICOLON  */
#line 472 "parser.y"
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
#line 1919 "y.tab.c"
    break;

  case 42: /* update_list: IDENTIFIER EQ expression  */
#line 498 "parser.y"
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
#line 1937 "y.tab.c"
    break;

  case 43: /* update_list: update_list COMMA IDENTIFIER EQ expression  */
#line 512 "parser.y"
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
#line 1960 "y.tab.c"
    break;

  case 44: /* delete_statement: DELETE FROM IDENTIFIER where_clause SEMICOLON  */
#line 534 "parser.y"
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
#line 1986 "y.tab.c"
    break;

  case 45: /* create_table_statement: CREATE TABLE IDENTIFIER LPAREN column_definitions RPAREN SEMICOLON  */
#line 559 "parser.y"
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
#line 2020 "y.tab.c"
    break;

  case 46: /* column_definitions: column_definition  */
#line 592 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("column_definitions");

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2030 "y.tab.c"
    break;

  case 47: /* column_definitions: column_definitions COMMA column_definition  */
#line 598 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("column_definitions");

        (yyvsp[-1].nd_obj).nd = mknode("COMMA");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[2] = (yyvsp[0].nd_obj).nd;
    }
#line 2045 "y.tab.c"
    break;

  case 48: /* column_definition: IDENTIFIER data_type  */
#line 612 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("column_definition");

        (yyvsp[-1].nd_obj).nd = mknode("IDENTIFIER");
        (yyvsp[-1].nd_obj).nd->children[0] = mknode((yyvsp[-1].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[1] = (yyvsp[0].nd_obj).nd;
    }
#line 2059 "y.tab.c"
    break;

  case 49: /* data_type: INT_TYPE  */
#line 625 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("data_type");

        (yyvsp[0].nd_obj).nd = mknode("INT_TYPE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2072 "y.tab.c"
    break;

  case 50: /* data_type: VARCHAR_TYPE  */
#line 634 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("data_type");

        (yyvsp[0].nd_obj).nd = mknode("VARCHAR_TYPE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2085 "y.tab.c"
    break;

  case 51: /* data_type: BOOLEAN_TYPE  */
#line 643 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("data_type");

        (yyvsp[0].nd_obj).nd = mknode("BOOLEAN_TYPE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2098 "y.tab.c"
    break;

  case 52: /* data_type: FLOAT_TYPE  */
#line 652 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("data_type");

        (yyvsp[0].nd_obj).nd = mknode("FLOAT_TYPE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2111 "y.tab.c"
    break;

  case 53: /* data_type: CHAR_TYPE  */
#line 661 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("data_type");

        (yyvsp[0].nd_obj).nd = mknode("CHAR_TYPE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2124 "y.tab.c"
    break;

  case 54: /* data_type: DATE_TYPE  */
#line 670 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("data_type");

        (yyvsp[0].nd_obj).nd = mknode("DATE_TYPE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2137 "y.tab.c"
    break;

  case 55: /* data_type: TIMESTAMP_TYPE  */
#line 679 "parser.y"
    {
        (yyval.nd_obj).nd = mknode("data_type");

        (yyvsp[0].nd_obj).nd = mknode("TIMESTAMP_TYPE");
        (yyvsp[0].nd_obj).nd->children[0] = mknode((yyvsp[0].nd_obj).name);

        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2150 "y.tab.c"
    break;

  case 56: /* drop_table_statement: DROP TABLE IDENTIFIER SEMICOLON  */
#line 691 "parser.y"
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
        (yyval.nd_obj).nd->children[0] = (yyvsp[-2].nd_obj).nd;
        (yyval.nd_obj).nd->children[0] = (yyvsp[-1].nd_obj).nd;
        (yyval.nd_obj).nd->children[0] = (yyvsp[0].nd_obj).nd;
    }
#line 2176 "y.tab.c"
    break;


#line 2180 "y.tab.c"

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

#line 714 "parser.y"


/* int main() {
    yyparse();
    printf("SQL parsing completed successfully.\n");

    // comment this after testing parse tree generation
    printtree(head);
    return 0;
} */

node* parse_and_get_tree(const char* input) {
    YY_BUFFER_STATE bufferState = yy_scan_string(input);
    yyparse();
    yy_delete_buffer(bufferState);
    return head;
}
