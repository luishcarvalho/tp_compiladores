
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "yacc.y"

#include <stdio.h>
#include <stdlib.h>
#include "TabelaSimbolos\tabela.h"

LinkedTable *table;
void yyerror(char *);
int yylex(void);
void reduce_print(char *);
extern int linha;
int erro = 0;
extern int CODE_PRINT;
extern char * yytext;
extern char last_id[3];
extern void print_linha();
ScopeCell *scopeCell;
char tipo[20];



/* Line 189 of yacc.c  */
#line 94 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ESPACO = 258,
     PRINTF = 259,
     SCANF = 260,
     IF = 261,
     ELSE = 262,
     FOR = 263,
     WHILE = 264,
     FUNCTION = 265,
     SWITCH = 266,
     NULLT = 267,
     DEFAULT = 268,
     FIMBLOCO = 269,
     INT = 270,
     FLOAT = 271,
     CHAR = 272,
     STR = 273,
     LIST = 274,
     PLUS = 275,
     MINUS = 276,
     MULT = 277,
     EXP = 278,
     DIV = 279,
     DIVINTEIRA = 280,
     DIVRESTO = 281,
     GRTTHAN = 282,
     GRTEQ = 283,
     LSSTHAN = 284,
     LSSEQ = 285,
     EQ = 286,
     ATR = 287,
     MINATR = 288,
     PLSATR = 289,
     BREAK = 290,
     RETURN = 291,
     CONTINUE = 292,
     ID = 293,
     NINTEIRO = 294,
     NDECIMAL = 295,
     STRING = 296,
     CHARACTER = 297
   };
#endif
/* Tokens.  */
#define ESPACO 258
#define PRINTF 259
#define SCANF 260
#define IF 261
#define ELSE 262
#define FOR 263
#define WHILE 264
#define FUNCTION 265
#define SWITCH 266
#define NULLT 267
#define DEFAULT 268
#define FIMBLOCO 269
#define INT 270
#define FLOAT 271
#define CHAR 272
#define STR 273
#define LIST 274
#define PLUS 275
#define MINUS 276
#define MULT 277
#define EXP 278
#define DIV 279
#define DIVINTEIRA 280
#define DIVRESTO 281
#define GRTTHAN 282
#define GRTEQ 283
#define LSSTHAN 284
#define LSSEQ 285
#define EQ 286
#define ATR 287
#define MINATR 288
#define PLSATR 289
#define BREAK 290
#define RETURN 291
#define CONTINUE 292
#define ID 293
#define NINTEIRO 294
#define NDECIMAL 295
#define STRING 296
#define CHARACTER 297




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 220 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   598

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNRULES -- Number of states.  */
#define YYNSTATES  162

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      43,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,     2,     2,     2,    51,     2,
      44,    45,     2,     2,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    49,
       2,     2,     2,     2,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,    52,    47,    54,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     9,    11,    13,    15,    17,    19,
      21,    26,    28,    32,    33,    37,    42,    46,    48,    53,
      58,    62,    66,    70,    72,    77,    81,    84,    89,    94,
      99,   104,   106,   108,   110,   112,   114,   122,   127,   128,
     131,   133,   138,   149,   156,   158,   160,   167,   177,   180,
     185,   190,   194,   196,   197,   201,   203,   205,   207,   209,
     211,   213,   215,   220,   223,   224,   226,   228,   230,   232,
     234,   236,   238,   240,   242,   244,   246,   248,   250,   252,
     254,   256,   258,   260,   262
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    58,    43,    57,    -1,    58,    -1,    59,
      -1,    68,    -1,    71,    -1,    69,    -1,    72,    -1,    64,
      -1,     4,    44,    61,    45,    -1,    70,    -1,    36,     3,
      61,    -1,    -1,    60,    44,    45,    -1,    60,    44,    61,
      45,    -1,    60,    81,    61,    -1,    38,    -1,    38,    46,
      61,    47,    -1,    60,    44,    61,    45,    -1,    60,    44,
      45,    -1,    44,    61,    45,    -1,    61,    63,    61,    -1,
      62,    -1,     5,    44,    61,    45,    -1,     5,    44,    45,
      -1,    82,    61,    -1,    15,    44,    61,    45,    -1,    16,
      44,    61,    45,    -1,    18,    44,    61,    45,    -1,    17,
      44,    61,    45,    -1,    60,    -1,    77,    -1,    84,    -1,
      83,    -1,    80,    -1,    11,     3,    62,    43,    66,    65,
      14,    -1,    13,    48,    43,    57,    -1,    -1,    67,    66,
      -1,    67,    -1,    77,    48,    43,    57,    -1,    10,     3,
      59,    49,    61,    49,    59,    43,    57,    14,    -1,     9,
       3,    61,    43,    57,    14,    -1,    35,    -1,    37,    -1,
       6,     3,    61,    43,    57,    14,    -1,     6,     3,    61,
      43,    57,     7,    43,    57,    14,    -1,    73,    74,    -1,
      10,     3,    38,     3,    -1,    75,    43,    57,    14,    -1,
      76,    49,    75,    -1,    76,    -1,    -1,    38,    81,    62,
      -1,    38,    -1,    40,    -1,    39,    -1,    12,    -1,    42,
      -1,    41,    -1,    78,    -1,    46,    61,    79,    47,    -1,
      50,    79,    -1,    -1,    51,    -1,    52,    -1,    53,    -1,
      32,    -1,    33,    -1,    34,    -1,    54,    -1,    20,    -1,
      21,    -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,
      26,    -1,    27,    -1,    29,    -1,    28,    -1,    30,    -1,
      31,    -1,    55,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    45,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    60,    62,    63,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    78,    78,    80,    81,    82,    84,    86,    87,    89,
      90,    92,    94,    96,    98,    99,   101,   102,   104,   106,
     108,   110,   111,   112,   114,   115,   117,   118,   119,   120,
     121,   122,   124,   126,   127,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ESPACO", "PRINTF", "SCANF", "IF",
  "ELSE", "FOR", "WHILE", "FUNCTION", "SWITCH", "NULLT", "DEFAULT",
  "FIMBLOCO", "INT", "FLOAT", "CHAR", "STR", "LIST", "PLUS", "MINUS",
  "MULT", "EXP", "DIV", "DIVINTEIRA", "DIVRESTO", "GRTTHAN", "GRTEQ",
  "LSSTHAN", "LSSEQ", "EQ", "ATR", "MINATR", "PLSATR", "BREAK", "RETURN",
  "CONTINUE", "ID", "NINTEIRO", "NDECIMAL", "STRING", "CHARACTER", "'\\n'",
  "'('", "')'", "'{'", "'}'", "':'", "';'", "','", "'&'", "'|'", "'@'",
  "'~'", "'!'", "$accept", "stmts", "stmt", "atr", "acess", "return_stmts",
  "return_stmt", "op", "case_stmt", "df_stmt", "cases", "case", "for_stmt",
  "while_stmt", "desvio", "if_smt", "fn_stmt", "head", "body", "params",
  "param", "literal", "lista", "return_stmts_list", "opt_log", "atr_op",
  "op_uni", "op_mat", "op_rel", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    10,    40,    41,   123,   125,    58,    59,
      44,    38,   124,    64,   126,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    59,    60,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    62,    63,    63,    63,    64,    65,    65,    66,
      66,    67,    68,    69,    70,    70,    71,    71,    72,    73,
      74,    75,    75,    75,    76,    76,    77,    77,    77,    77,
      77,    77,    78,    79,    79,    80,    80,    80,    81,    81,
      81,    82,    83,    83,    83,    83,    83,    83,    83,    84,
      84,    84,    84,    84,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     0,     3,     4,     3,     1,     4,     4,
       3,     3,     3,     1,     4,     3,     2,     4,     4,     4,
       4,     1,     1,     1,     1,     1,     7,     4,     0,     2,
       1,     4,    10,     6,     1,     1,     6,     9,     2,     4,
       4,     3,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     4,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      13,     0,     0,     0,     0,     0,    44,     0,    45,    17,
       0,     3,     4,     0,     9,     5,     7,    11,     6,     8,
      53,     0,     0,     0,     0,     0,     0,     0,     1,    13,
      68,    69,    70,     0,     0,    55,    48,     0,    52,     0,
      58,     0,     0,     0,     0,    57,    56,    60,    59,     0,
       0,    71,    31,     0,    23,    32,    61,     0,     0,     0,
      17,     0,     0,    31,     0,    12,     0,     2,    14,     0,
      16,     0,    13,    53,     0,     0,     0,     0,     0,     0,
      64,     0,    72,    73,    74,    75,    76,    77,    78,    79,
      81,    80,    82,    83,    10,    65,    66,    67,    84,     0,
      35,    34,    33,    26,    13,    13,    49,     0,     0,    18,
      15,    54,     0,    51,    25,     0,     0,     0,     0,     0,
      21,    64,     0,    20,     0,    22,     0,     0,     0,    38,
      40,     0,    50,    24,    27,    28,    30,    29,    63,    62,
      19,     0,    46,    43,     0,     0,     0,    39,     0,    13,
       0,     0,    36,    13,     0,    13,    13,    41,    47,     0,
      37,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    52,    53,    54,    99,    14,   146,
     129,   130,    15,    16,    17,    18,    19,    20,    36,    37,
      38,    55,    56,   122,   100,    34,    57,   101,   102
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -99
static const yytype_int16 yypact[] =
{
      30,   -27,    19,    23,    24,    25,   -99,    32,   -99,    -9,
      33,    -1,   -99,   -21,   -99,   -99,   -99,   -99,   -99,   -99,
       5,   171,   171,   171,    12,    51,   171,   171,   -99,    30,
     -99,   -99,   -99,    69,   171,   -13,   -99,    10,    11,    17,
     -99,    20,    26,    29,    31,   -99,   -99,   -99,   -99,   171,
     171,   -99,    34,   206,   -99,   -99,   -99,   171,   219,   255,
       3,    45,   -13,   -99,    36,   543,   291,   -99,   -99,   303,
     543,    51,    30,     5,   119,   171,   171,   171,   171,   339,
     351,   162,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   171,
     -99,   -99,   -99,   543,    30,    30,   -99,   171,     6,   -99,
     -99,   -99,    40,   -99,   -99,   387,   399,   435,   447,   483,
     -99,    46,    22,   -99,   495,   543,     2,    68,   531,    70,
       6,    47,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,    55,   -99,   -99,    61,    52,    87,   -99,    59,    30,
      60,    63,   -99,    30,    98,    30,    30,   -99,   -99,   102,
     -99,   -99
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -99,   -28,   -99,   -22,     0,   -19,   -20,   -99,   -99,   -99,
     -12,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,    44,
     -99,   -98,   -99,    -2,   -99,    85,   -99,   -99,   -99
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      13,    67,    61,    58,    59,    64,   106,    65,    66,   141,
     131,    30,    31,    32,    69,    70,   142,    21,    40,    30,
      31,    32,    22,    33,    62,    63,    23,    24,    25,    13,
      79,    80,   131,    28,     1,    26,     2,    27,   103,     3,
       4,     5,    29,    35,   112,    45,    46,    47,    48,    27,
      60,   111,    50,    72,   132,   115,   116,   117,   118,   119,
      73,    74,   124,    40,    75,     6,     7,     8,     9,   139,
      76,    63,    13,    77,    39,    78,   126,   127,    81,   108,
     125,    40,   143,   145,    41,    42,    43,    44,   128,     9,
      45,    46,    47,    48,   107,   148,   121,    50,   149,     9,
     151,   152,   153,   155,    13,    13,   156,     9,    45,    46,
      47,    48,   158,    49,    68,    50,   161,   113,   147,   138,
      71,   154,   150,    51,    39,   157,     0,   159,   160,     0,
       0,    40,     0,     0,    41,    42,    43,    44,     0,     0,
       0,     0,     0,     0,    62,     0,     0,     0,     0,    13,
       0,     0,     0,    13,     0,    13,    13,     9,    45,    46,
      47,    48,     0,    49,   114,    50,     0,    39,     0,     0,
       0,     0,     0,    51,    40,     0,    39,    41,    42,    43,
      44,     0,     0,    40,     0,     0,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    45,    46,    47,    48,     0,    49,   123,    50,     9,
      45,    46,    47,    48,     0,    49,    51,    50,     0,     0,
       0,     0,     0,     0,     0,    51,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,     0,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,    95,    96,    97,
       0,    98,   104,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,     0,    98,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,     0,
      98,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,   109,     0,
       0,     0,    95,    96,    97,     0,    98,     0,   110,     0,
       0,     0,     0,     0,    95,    96,    97,     0,    98,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,     0,   120,     0,     0,     0,     0,     0,
      95,    96,    97,     0,    98,     0,     0,     0,     0,     0,
       0,   121,    95,    96,    97,     0,    98,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,     0,   133,     0,     0,     0,     0,     0,    95,    96,
      97,     0,    98,     0,   134,     0,     0,     0,     0,     0,
      95,    96,    97,     0,    98,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,     0,
     135,     0,     0,     0,     0,     0,    95,    96,    97,     0,
      98,     0,   136,     0,     0,     0,     0,     0,    95,    96,
      97,     0,    98,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     0,   137,     0,
       0,     0,     0,     0,    95,    96,    97,     0,    98,     0,
     140,     0,     0,     0,     0,     0,    95,    96,    97,     0,
      98,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,     0,
     144,     0,    95,    96,    97,     0,    98,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,     0,    98
};

static const yytype_int16 yycheck[] =
{
       0,    29,    24,    22,    23,    25,     3,    26,    27,     7,
     108,    32,    33,    34,    33,    34,    14,    44,    12,    32,
      33,    34,     3,    44,    24,    25,     3,     3,     3,    29,
      49,    50,   130,     0,     4,     3,     6,    46,    57,     9,
      10,    11,    43,    38,    72,    39,    40,    41,    42,    46,
      38,    71,    46,    43,    14,    74,    75,    76,    77,    78,
      49,    44,    81,    12,    44,    35,    36,    37,    38,    47,
      44,    71,    72,    44,     5,    44,   104,   105,    44,    43,
      99,    12,    14,    13,    15,    16,    17,    18,   107,    38,
      39,    40,    41,    42,    49,    48,    50,    46,    43,    38,
      48,    14,    43,    43,   104,   105,    43,    38,    39,    40,
      41,    42,    14,    44,    45,    46,    14,    73,   130,   121,
      35,   149,   144,    54,     5,   153,    -1,   155,   156,    -1,
      -1,    12,    -1,    -1,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,   153,    -1,   155,   156,    38,    39,    40,
      41,    42,    -1,    44,    45,    46,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    54,    12,    -1,     5,    15,    16,    17,
      18,    -1,    -1,    12,    -1,    -1,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    38,
      39,    40,    41,    42,    -1,    44,    54,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      -1,    55,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    -1,    55,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      55,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    51,    52,    53,    -1,    55,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    -1,    55,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    -1,    55,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    -1,    55,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    -1,    55,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      55,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    -1,    55,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    -1,    55,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      55,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     6,     9,    10,    11,    35,    36,    37,    38,
      57,    58,    59,    60,    64,    68,    69,    70,    71,    72,
      73,    44,     3,     3,     3,     3,     3,    46,     0,    43,
      32,    33,    34,    44,    81,    38,    74,    75,    76,     5,
      12,    15,    16,    17,    18,    39,    40,    41,    42,    44,
      46,    54,    60,    61,    62,    77,    78,    82,    61,    61,
      38,    59,    60,    60,    62,    61,    61,    57,    45,    61,
      61,    81,    43,    49,    44,    44,    44,    44,    44,    61,
      61,    44,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    45,    51,    52,    53,    55,    63,
      80,    83,    84,    61,    43,    43,     3,    49,    43,    47,
      45,    62,    57,    75,    45,    61,    61,    61,    61,    61,
      45,    50,    79,    45,    61,    61,    57,    57,    61,    66,
      67,    77,    14,    45,    45,    45,    45,    45,    79,    47,
      45,     7,    14,    14,    49,    13,    65,    66,    48,    43,
      59,    48,    14,    43,    57,    43,    43,    57,    14,    57,
      57,    14
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 44 "yacc.y"
    {reduce_print("reduced by stmts -> stmt \\n stmts\n");}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 45 "yacc.y"
    {reduce_print("reduced by stmts -> stmt\n");}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 47 "yacc.y"
    {reduce_print("reduced by stmt -> atr\n");}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 48 "yacc.y"
    {reduce_print("reduced by stmt -> for_stmta\n");}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 49 "yacc.y"
    {reduce_print("reduced by stmt -> if_smt\n");}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 50 "yacc.y"
    {reduce_print("reduced by stmt ->  while_stmt\n");}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 51 "yacc.y"
    {reduce_print("reduced by stmt ->  fn_stmt\n");}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 52 "yacc.y"
    {reduce_print("reduced by stmt ->  case_stmt\n");}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 53 "yacc.y"
    {reduce_print("reduced by stmt ->  PRINTF '(' return_stmts ')'\n");}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 56 "yacc.y"
    {reduce_print("reduced by stmt -> palavra vazia\n"); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 57 "yacc.y"
    {reduce_print("reduced by stmt -> acess '(' ')'\n");}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 58 "yacc.y"
    {reduce_print("reduced by stmt -> acess '(' return_stmts ')'\n");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 60 "yacc.y"
    {reduce_print("reduced by atr -> acess atr_op return_stmt\n");insertCell(&scopeCell->inputList,last_id, "variavel", tipo, linha-1);}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 62 "yacc.y"
    {reduce_print("reduced by acess -> ID\n");}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 63 "yacc.y"
    {reduce_print("reduced by acess -> ID '{' return_stmts '}'\n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 65 "yacc.y"
    {reduce_print("reduced by return_stmts -> acess '(' return_stmts ')'\n"); strcpy(tipo,"Unk");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 66 "yacc.y"
    {reduce_print("reduced by return_stmts -> acess '(' ')'\n"); strcpy(tipo,"Unk");}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 67 "yacc.y"
    {reduce_print("reduced by return_stmts -> '(' return_stmts ')' \n"); strcpy(tipo,"Unk");}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 68 "yacc.y"
    {reduce_print("reduced by return_stmts -> return_stmts op return_stmts \n"); strcpy(tipo,"Unk");}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 69 "yacc.y"
    {reduce_print("reduced by return_stmts -> return_stmt \n");}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 70 "yacc.y"
    {reduce_print("reduced by return_stmts -> SCANF '(' return_stmts ')'\n"); strcpy(tipo,"str");}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 71 "yacc.y"
    {reduce_print("reduced by return_stmts -> SCANF '(' ')'\n"); strcpy(tipo,"str");}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 72 "yacc.y"
    {reduce_print("reduced by return_stmts -> op_uni return_stmts\n");strcpy(tipo,"int");}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 73 "yacc.y"
    {reduce_print("reduced by return_stmts -> INT '(' return_stmts ')'\n"); strcpy(tipo,"int");}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 74 "yacc.y"
    {reduce_print("reduced by return_stmts -> INT '(' return_stmts ')'\n"); strcpy(tipo,"float");}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 75 "yacc.y"
    {reduce_print("reduced by return_stmts -> INT '(' return_stmts ')'\n"); strcpy(tipo,"str");}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 76 "yacc.y"
    {reduce_print("reduced by return_stmts -> INT '(' return_stmts ')'\n"); strcpy(tipo,"char");}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 78 "yacc.y"
    {reduce_print("reduced by return_stmt -> acess\n"); strcpy(tipo,"Unk");}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 78 "yacc.y"
    {reduce_print("reduced by return_stmt -> literal\n");}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 80 "yacc.y"
    {reduce_print("reduced by op -> op_rel\n");}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 81 "yacc.y"
    {reduce_print("reduced by op -> op_mat\n");}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 82 "yacc.y"
    {reduce_print("reduced by op -> opt_log\n");}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 84 "yacc.y"
    {reduce_print("reduced by case_stmt -> SWITCH ESPACO return_stmt '\\n' cases df_stmt FIMBLOCO\n");}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 86 "yacc.y"
    {reduce_print("reduced by df_stmt -> DEFAULT ':' '\\n' stmts '\n");}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 87 "yacc.y"
    {reduce_print("reduced by df_stmt -> palavra vazia\n");}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 89 "yacc.y"
    {reduce_print("reduced by cases -> case cases\n");}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 90 "yacc.y"
    {reduce_print("reduced by cases -> case\n");}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 92 "yacc.y"
    {reduce_print("reduced by case -> literal ':' '\\n' stmts '\\n'\n");}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 94 "yacc.y"
    {reduce_print("reduced by for_stmt -> FUNCTION ESPACO atr ';' return_stmts ';' atr '\\n' stmts FIMBLOCO\n");}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 96 "yacc.y"
    {reduce_print("reduced by while_stmt -> WHILE ESPACO return_stmts '\\n' stmts FIMBLOCO\n");}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 98 "yacc.y"
    {reduce_print("reduced by desvio -> BREAK \n");}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 99 "yacc.y"
    {reduce_print("reduced by desvio -> CONTINUE \n");}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 101 "yacc.y"
    {reduce_print("reduced by if_smt -> IF ESPACO return_stmts '\\n' stmts FIMBLOCO\n");}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 102 "yacc.y"
    {reduce_print("reduced by if_smt -> IF ESPACO return_stmts '\\n' stmts ELSE '\\n' stmts FIMBLOCO\n");}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 104 "yacc.y"
    {reduce_print("reduced by fn_stmt -> head body\n");}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 106 "yacc.y"
    {reduce_print("reduced by head -> FUNCTION ESPACO ID ESPACO\n"); insertCell(&scopeCell->inputList,last_id, "Function", "Unk", linha-1);}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 108 "yacc.y"
    {reduce_print("reduced by body -> ESPACO params '\\n' stmts FIMBLOCO\n");}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 110 "yacc.y"
    {reduce_print("reduced by params -> param ';' params\n");}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 111 "yacc.y"
    {reduce_print("reduced by params -> param\n");}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 112 "yacc.y"
    {reduce_print("reduced by params -> palavra vazia\n");}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 114 "yacc.y"
    {reduce_print("reduced by param -> ID atr_op return_stmt\n");}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 115 "yacc.y"
    {reduce_print("reduced by param -> ID\n");}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 117 "yacc.y"
    {reduce_print("reduced by literal -> NDECIMAL\n"); strcpy(tipo,"float");}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 118 "yacc.y"
    {reduce_print("reduced by literal -> NINTEIRO\n"); strcpy(tipo,"int");}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 119 "yacc.y"
    {reduce_print("reduced by literal -> NULLT\n"); strcpy(tipo,"null");}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 120 "yacc.y"
    {reduce_print("reduced by literal -> CHARACTER\n"); strcpy(tipo,"char");}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 121 "yacc.y"
    {reduce_print("reduced by literal -> STRING\n"); strcpy(tipo,"str");}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 122 "yacc.y"
    {reduce_print("reduced by literal -> lista\n"); strcpy(tipo,"list");}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 124 "yacc.y"
    {reduce_print("reduced by lista -> '{' return_stmts return_stmts_list '}'\n");}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 126 "yacc.y"
    {reduce_print("reduced by return_stmts_list -> ',' return_stmts_list\n");}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 127 "yacc.y"
    {reduce_print("reduced by return_stmts_list -> palavra vazia\n");}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 129 "yacc.y"
    {reduce_print("reduced by opt_log -> '&'\n");}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 130 "yacc.y"
    {reduce_print("reduced by opt_log -> '|'\n");}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 131 "yacc.y"
    {reduce_print("reduced by opt_log -> '@'\n");}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 132 "yacc.y"
    {reduce_print("reduced by atr_op -> ATR\n");}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 133 "yacc.y"
    {reduce_print("reduced by atr_op -> MINATR\n");}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 134 "yacc.y"
    {reduce_print("reduced by atr_op -> PLSATR\n");}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 135 "yacc.y"
    {reduce_print("reduced by op_uni -> '~'\n");}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 136 "yacc.y"
    {reduce_print("reduced by op_mat -> PLUS\n");}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 137 "yacc.y"
    {reduce_print("reduced by op_mat -> MINUS\n");}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 138 "yacc.y"
    {reduce_print("reduced by op_mat -> MULT\n");}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 139 "yacc.y"
    {reduce_print("reduced by op_mat -> EXP\n");}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 140 "yacc.y"
    {reduce_print("reduced by op_mat -> DIV\n");}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 141 "yacc.y"
    {reduce_print("reduced by op_mat -> DIVINTEIRA\n");}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 142 "yacc.y"
    {reduce_print("reduced by op_mat -> DIVRESTO\n");}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 143 "yacc.y"
    {reduce_print("reduced by op_rel -> GRTTHAN\n");}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 144 "yacc.y"
    {reduce_print("reduced by op_rel -> LSSTHAN\n");}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 145 "yacc.y"
    {reduce_print("reduced by op_rel -> GRTEQ\n");}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 146 "yacc.y"
    {reduce_print("reduced by op_rel -> LSSEQ\n");}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 147 "yacc.y"
    {reduce_print("reduced by op_rel -> EQ\n");}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 148 "yacc.y"
    {reduce_print("reduced by op_rel -> '!'\n");}
    break;



/* Line 1455 of yacc.c  */
#line 2211 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 151 "yacc.y"
	

void reduce_print(char *s){
	if (!CODE_PRINT)
		printf(s);
}

void yyerror(char *s) {
	printf("Programa sintaticamente incorreto\n");
	printf("Erro proximo da linha: %d\n", linha);
	printf("%s\n",last_id);
	erro = 1;
}

int main(){
	print_linha();
	table = initializeTable();
    createEmptyTable(table);
	insertScopeCell(table);
	scopeCell = table->end;
	yyparse();
	imprimeLista(scopeCell->inputList);
	if (!erro)
		printf("Programa sintaticamente correto");
	return 0;
}



