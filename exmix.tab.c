
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
#line 1 "exmix.y"

	#include <malloc.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
	#define pi 3.1416
	#define deg 180
	extern FILE *yyin;
	extern FILE *yyout;
	int sym[26],check[26];
	int c[30]={0};
	int casea[30]={0};
	int x=0;
	int arr[30];
	int far[30];
	int wh,wf=0,f,sw[30];
	int srtarr[30]={0};


/* Line 189 of yacc.c  */
#line 93 "exmix.tab.c"

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
     NUMBER = 258,
     VARIABLE = 259,
     COMMA = 260,
     INT = 261,
     FLOAT = 262,
     CHAR = 263,
     DOUBLE = 264,
     IF = 265,
     ELSE = 266,
     MAIN = 267,
     RETURN = 268,
     LEFT_BRAC = 269,
     RIGHT_BRAC = 270,
     ASSIGN = 271,
     PLUS = 272,
     MINUS = 273,
     DIV = 274,
     MULT = 275,
     END_LINE = 276,
     LESS = 277,
     GREAT = 278,
     FOR = 279,
     FOR_END = 280,
     SEMI = 281,
     INCREMENT = 282,
     GREAT_EQ = 283,
     DECREMENT = 284,
     LEFT_BK = 285,
     RIGHT_BK = 286,
     COLON = 287,
     LEFT_PAREN = 288,
     RIGHT_PAREN = 289,
     LESS_EQ = 290,
     IN = 291,
     RANGE = 292,
     TO = 293,
     SWITCH = 294,
     DEFAULT = 295,
     CASE = 296,
     BREAK = 297,
     WHILE = 298,
     WHILE_END = 299,
     IF_END = 300,
     ELSE_END = 301,
     ELSE_IF_END = 302,
     ELSE_IF = 303,
     EQUAL = 304,
     SIN = 305,
     COS = 306,
     TAN = 307,
     LOG = 308,
     SQRT = 309,
     SQR = 310,
     CUBE = 311,
     FACTORIAL = 312,
     POW = 313,
     PRINT = 314,
     PRINTLN = 315,
     MINIMUM = 316,
     MAXIMUM = 317,
     SWAP = 318,
     FUNCTION = 319,
     SORT = 320,
     IFX = 321
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 201 "exmix.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1016

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNRULES -- Number of states.  */
#define YYNSTATES  203

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    10,    16,    17,    20,    29,    30,
      34,    35,    40,    41,    44,    47,    50,    53,    56,    57,
      71,    80,    82,    85,    92,   102,   115,   131,   140,   151,
     156,   160,   164,   168,   172,   178,   184,   188,   194,   196,
     198,   200,   202,   206,   208,   210,   212,   216,   220,   224,
     228,   232,   236,   240,   244,   248,   255,   260,   265,   270,
     275,   280,   285,   290,   293,   300,   307,   314,   317,   319
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      68,     0,    -1,    -1,    70,    12,    74,    13,    70,    -1,
      64,    14,    72,    15,    21,    -1,    -1,    70,    71,    -1,
      80,    64,    14,    72,    15,    33,    74,    34,    -1,    -1,
      80,     4,    73,    -1,    -1,    73,     5,    80,     4,    -1,
      -1,    74,    76,    -1,    74,    79,    -1,    74,    75,    -1,
      74,    78,    -1,    74,    69,    -1,    -1,    39,    14,    82,
      15,    33,    75,    40,    32,    82,    21,    42,    21,    34,
      -1,    41,    82,    32,    82,    21,    42,    21,    75,    -1,
      21,    -1,    82,    21,    -1,    10,    14,    82,    15,    74,
      45,    -1,    10,    14,    82,    15,    74,    45,    11,    74,
      46,    -1,    10,    14,    82,    15,    74,    45,    48,    14,
      82,    15,    74,    47,    -1,    10,    14,    82,    15,    74,
      45,    48,    14,    82,    15,    74,    47,    11,    74,    46,
      -1,    24,     4,    36,    37,     3,    32,    74,    25,    -1,
      24,     4,    36,    37,     3,    38,     3,    32,    76,    25,
      -1,    43,    77,    74,    44,    -1,     3,    22,     3,    -1,
       3,    23,     3,    -1,     3,    28,     3,    -1,     3,    35,
       3,    -1,    59,    30,    82,    31,    21,    -1,    60,    30,
      82,    31,    21,    -1,    80,    81,    21,    -1,    80,     4,
      16,    82,    21,    -1,     6,    -1,     7,    -1,     8,    -1,
       9,    -1,    81,     5,     4,    -1,     4,    -1,     3,    -1,
       4,    -1,     4,    16,    82,    -1,    82,    17,    82,    -1,
      82,    18,    82,    -1,    82,    20,    82,    -1,    82,    19,
      82,    -1,    82,    22,    82,    -1,    82,    23,    82,    -1,
      82,    49,    82,    -1,    14,    82,    15,    -1,    58,    14,
      82,     5,    82,    15,    -1,    50,    14,    82,    15,    -1,
      51,    14,    82,    15,    -1,    52,    14,    82,    15,    -1,
      53,    14,    82,    15,    -1,    54,    14,    82,    15,    -1,
      55,    14,    82,    15,    -1,    56,    14,    82,    15,    -1,
      82,    57,    -1,    61,    14,    82,     5,    82,    15,    -1,
      62,    14,    82,     5,    82,    15,    -1,    63,    14,    82,
       5,    82,    15,    -1,    65,    83,    -1,     3,    -1,    83,
       5,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    40,    42,    43,    44,    46,    48,    49,
      51,    52,    55,    56,    57,    58,    59,    60,    63,    64,
      87,    91,    92,    93,    98,   103,   110,   117,   118,   119,
     125,   134,   143,   152,   163,   164,   166,   167,   174,   175,
     176,   177,   180,   184,   189,   190,   191,   193,   194,   195,
     196,   202,   203,   204,   205,   206,   216,   217,   218,   219,
     220,   221,   222,   223,   232,   239,   246,   254,   275,   276
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VARIABLE", "COMMA", "INT",
  "FLOAT", "CHAR", "DOUBLE", "IF", "ELSE", "MAIN", "RETURN", "LEFT_BRAC",
  "RIGHT_BRAC", "ASSIGN", "PLUS", "MINUS", "DIV", "MULT", "END_LINE",
  "LESS", "GREAT", "FOR", "FOR_END", "SEMI", "INCREMENT", "GREAT_EQ",
  "DECREMENT", "LEFT_BK", "RIGHT_BK", "COLON", "LEFT_PAREN", "RIGHT_PAREN",
  "LESS_EQ", "IN", "RANGE", "TO", "SWITCH", "DEFAULT", "CASE", "BREAK",
  "WHILE", "WHILE_END", "IF_END", "ELSE_END", "ELSE_IF_END", "ELSE_IF",
  "EQUAL", "SIN", "COS", "TAN", "LOG", "SQRT", "SQR", "CUBE", "FACTORIAL",
  "POW", "PRINT", "PRINTLN", "MINIMUM", "MAXIMUM", "SWAP", "FUNCTION",
  "SORT", "IFX", "$accept", "start", "funcall", "function", "funcs",
  "fparameter", "fsparameter", "cstatement", "switch", "statement",
  "compare", "print", "declaration", "type", "var", "expression", "dgts", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    68,    69,    70,    70,    71,    72,    72,
      73,    73,    74,    74,    74,    74,    74,    74,    75,    75,
      75,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      77,    77,    77,    77,    78,    78,    79,    79,    80,    80,
      80,    80,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    83,    83
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     5,     5,     0,     2,     8,     0,     3,
       0,     4,     0,     2,     2,     2,     2,     2,     0,    13,
       8,     1,     2,     6,     9,    12,    15,     8,    10,     4,
       3,     3,     3,     3,     5,     5,     3,     5,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     6,     4,     4,     4,     4,
       4,     4,     4,     2,     6,     6,     6,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     1,    38,    39,    40,    41,    12,     6,
       0,     0,     0,    44,    45,     0,     5,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,    15,
      13,    16,    14,     0,     0,     8,     0,     0,     3,     0,
       0,     0,     0,     0,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,    68,
      67,    43,     0,     0,     0,     0,     0,    22,     0,     0,
       0,    63,     0,     0,    46,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    47,    48,    50,    49,    51,    52,    53,
       0,    10,    12,     0,     0,     0,    30,    31,    32,    33,
      29,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,    69,     0,    42,    12,     9,
       0,     0,    18,     0,     0,    34,    35,     0,     0,     0,
       4,    37,     0,     0,    23,    12,     0,     0,     0,    55,
      64,    65,    66,     7,     0,    12,     0,     0,     0,     0,
      18,    11,     0,     0,    27,     0,     0,    20,    24,     0,
       0,     0,    12,    28,     0,     0,     0,    25,     0,    12,
      19,     0,    26
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    38,     2,     9,    82,   149,    11,    39,    40,
      54,    41,    42,    43,    72,    44,    70
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -150
static const yytype_int16 yypact[] =
{
       8,    11,    14,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
     -40,   124,    13,  -150,     9,    18,  -150,   581,  -150,    24,
      19,   581,    32,    22,    23,    40,    46,    60,    66,    73,
      74,    43,    61,    75,    76,    78,    80,    93,  -150,  -150,
    -150,  -150,  -150,    94,   864,    77,   581,   581,    77,   649,
      63,   581,   874,   -16,  -150,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,    77,  -150,
      95,    85,    -3,   581,   581,   581,   581,  -150,   581,   581,
     581,  -150,    89,   106,   959,   658,  -150,    81,   694,   581,
     108,   111,   112,   114,   187,   703,   712,   722,   755,   765,
     774,   783,    48,   885,   907,    59,   633,   640,   104,   126,
     581,   131,  -150,    87,    87,   -44,   -44,   216,   216,   959,
     107,  -150,  -150,   138,   110,   926,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,   581,   135,
     137,   581,   581,   581,   147,  -150,   940,  -150,  -150,   142,
     250,   -22,   -24,   117,   798,  -150,  -150,   819,   831,   841,
    -150,  -150,   313,    77,     3,  -150,   168,   132,   152,  -150,
    -150,  -150,  -150,  -150,   177,  -150,   178,   376,   166,   167,
     -24,  -150,   439,   581,  -150,    99,   581,  -150,  -150,   852,
     175,   949,  -150,  -150,   160,   502,   182,   193,   171,  -150,
    -150,   565,  -150
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,  -150,   190,  -150,   139,  -150,   -53,  -149,    25,
    -150,  -150,  -150,     7,  -150,   -17,  -150
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
      49,    94,   111,   167,    52,    80,    90,    91,    -2,    10,
     165,     3,    92,    81,   175,    20,   166,    21,   112,    93,
       4,     5,     6,     7,    12,    46,     8,    45,    50,    84,
      85,   187,    47,    51,    88,    53,    55,    56,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   176,    83,   138,    57,    10,   113,   114,   115,   116,
      58,   117,   118,   119,   141,    73,    74,    75,    76,   150,
      78,    79,   125,    63,    59,    83,    73,    74,    75,    76,
      60,    78,    79,     4,     5,     6,     7,    61,    62,    65,
      66,    64,    67,   146,    68,   162,    69,    80,    71,    87,
     109,   110,    13,    14,   120,    81,    75,    76,    80,    15,
     121,   126,   177,    17,   127,   128,    81,   129,   123,   144,
      18,   154,   182,    19,   157,   158,   159,    13,    14,   145,
       4,     5,     6,     7,    15,   147,    80,    16,    17,   195,
     148,   151,    22,   152,    81,    18,   201,   163,    19,    23,
      24,    25,    26,    27,    28,    29,   155,    30,   156,   168,
      33,    34,    35,    20,    37,    21,   189,    22,   160,   191,
     174,   178,   179,   180,    23,    24,    25,    26,    27,    28,
      29,   181,    30,    31,    32,    33,    34,    35,    36,    37,
      13,    14,   183,     4,     5,     6,     7,    15,   185,   186,
     193,    17,   196,   198,   199,   200,    48,   108,    18,     0,
     190,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,    21,     0,
      22,   130,     0,    73,    74,    75,    76,    23,    24,    25,
      26,    27,    28,    29,     0,    30,    31,    32,    33,    34,
      35,    36,    37,    13,    14,     0,     4,     5,     6,     7,
      15,     0,     0,     0,    17,    80,     0,     0,     0,     0,
       0,    18,     0,    81,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,    21,     0,    22,     0,   164,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,    29,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    13,    14,     0,     4,
       5,     6,     7,    15,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,    18,     0,     0,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,     0,     0,
       0,     0,    20,     0,    21,     0,    22,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    13,
      14,     0,     4,     5,     6,     7,    15,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,    18,     0,     0,
      19,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,    21,     0,    22,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,    29,     0,    30,    31,    32,    33,    34,    35,
      36,    37,    13,    14,     0,     4,     5,     6,     7,    15,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
      18,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
      21,     0,    22,     0,     0,   188,     0,     0,     0,    23,
      24,    25,    26,    27,    28,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    13,    14,     0,     4,     5,
       6,     7,    15,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,    21,     0,    22,     0,     0,     0,   197,
       0,     0,    23,    24,    25,    26,    27,    28,    29,     0,
      30,    31,    32,    33,    34,    35,    36,    37,    13,    14,
       0,     4,     5,     6,     7,    15,     0,     0,     0,    17,
       0,     0,     0,     0,    13,    14,    18,     0,     0,    19,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,    21,     0,    22,     0,
       0,   202,     0,     0,     0,    23,    24,    25,    26,    27,
      28,    29,     0,    30,    31,    32,    33,    34,    35,    36,
      37,    23,    24,    25,    26,    27,    28,    29,   142,    30,
       0,     0,    33,    34,    35,   143,    37,     0,     0,     0,
      73,    74,    75,    76,     0,    78,    79,    73,    74,    75,
      76,     0,    78,    79,    86,     0,    73,    74,    75,    76,
       0,    78,    79,   122,     0,    73,    74,    75,    76,     0,
      78,    79,    80,     0,     0,     0,     0,     0,     0,    80,
      81,     0,     0,     0,     0,     0,     0,    81,    80,     0,
       0,     0,     0,     0,     0,     0,    81,    80,     0,   124,
       0,    73,    74,    75,    76,    81,    78,    79,   131,     0,
      73,    74,    75,    76,     0,    78,    79,   132,     0,    73,
      74,    75,    76,     0,    78,    79,     0,   133,     0,    73,
      74,    75,    76,    80,    78,    79,     0,     0,     0,     0,
       0,    81,    80,     0,     0,     0,     0,     0,     0,     0,
      81,    80,     0,     0,     0,     0,     0,     0,     0,    81,
     134,    80,    73,    74,    75,    76,     0,    78,    79,    81,
     135,     0,    73,    74,    75,    76,     0,    78,    79,   136,
       0,    73,    74,    75,    76,     0,    78,    79,   137,     0,
      73,    74,    75,    76,    80,    78,    79,     0,     0,     0,
       0,     0,    81,   169,    80,    73,    74,    75,    76,     0,
      78,    79,    81,    80,     0,     0,     0,     0,     0,     0,
       0,    81,    80,     0,   170,     0,    73,    74,    75,    76,
      81,    78,    79,     0,     0,     0,   171,    80,    73,    74,
      75,    76,     0,    78,    79,    81,   172,     0,    73,    74,
      75,    76,     0,    78,    79,     0,     0,   192,    80,    73,
      74,    75,    76,     0,    78,    79,    81,     0,     0,     0,
      80,    73,    74,    75,    76,    77,    78,    79,    81,     0,
      80,    73,    74,    75,    76,     0,    78,    79,    81,     0,
       0,    80,    73,    74,    75,    76,    89,    78,    79,    81,
       0,     0,     0,    80,     0,     0,   139,     0,     0,     0,
       0,    81,     0,    80,    73,    74,    75,    76,     0,    78,
      79,    81,     0,     0,    80,     0,     0,     0,   140,     0,
       0,     0,    81,    73,    74,    75,    76,   153,    78,    79,
       0,     0,     0,     0,     0,     0,    80,    73,    74,    75,
      76,   161,    78,    79,    81,     0,    73,    74,    75,    76,
     194,    78,    79,     0,     0,    80,    73,    74,    75,    76,
       0,    78,    79,    81,     0,     0,     0,     0,     0,    80,
       0,     0,     0,     0,     0,     0,     0,    81,    80,     0,
       0,     0,     0,     0,     0,     0,    81,     0,    80,     0,
       0,     0,     0,     0,     0,     0,    81
};

static const yytype_int16 yycheck[] =
{
      17,    54,     5,   152,    21,    49,    22,    23,     0,     2,
      32,     0,    28,    57,    11,    39,    38,    41,    21,    35,
       6,     7,     8,     9,    64,    16,    12,    14,     4,    46,
      47,   180,    14,    14,    51,     3,    14,    14,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    48,    45,     5,    14,    48,    73,    74,    75,    76,
      14,    78,    79,    80,     5,    17,    18,    19,    20,   122,
      22,    23,    89,    30,    14,    68,    17,    18,    19,    20,
      14,    22,    23,     6,     7,     8,     9,    14,    14,    14,
      14,    30,    14,   110,    14,   148,     3,    49,     4,    36,
       5,    16,     3,     4,    15,    57,    19,    20,    49,    10,
       4,     3,   165,    14,     3,     3,    57,     3,    37,    15,
      21,   138,   175,    24,   141,   142,   143,     3,     4,     3,
       6,     7,     8,     9,    10,     4,    49,    13,    14,   192,
      33,     3,    43,    33,    57,    21,   199,     5,    24,    50,
      51,    52,    53,    54,    55,    56,    21,    58,    21,    42,
      61,    62,    63,    39,    65,    41,   183,    43,    21,   186,
     163,     3,    40,    21,    50,    51,    52,    53,    54,    55,
      56,     4,    58,    59,    60,    61,    62,    63,    64,    65,
       3,     4,    14,     6,     7,     8,     9,    10,    32,    32,
      25,    14,    42,    21,    11,    34,    16,    68,    21,    -1,
     185,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    -1,
      43,    44,    -1,    17,    18,    19,    20,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,     3,     4,    -1,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    49,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    57,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    -1,    43,    -1,    45,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,     3,     4,    -1,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    39,    -1,    41,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,     3,
       4,    -1,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,     3,     4,    -1,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    -1,    43,    -1,    -1,    -1,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,     3,     4,
      -1,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,     3,     4,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    -1,    43,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    50,    51,    52,    53,    54,    55,    56,     5,    58,
      -1,    -1,    61,    62,    63,     5,    65,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    22,    23,    17,    18,    19,
      20,    -1,    22,    23,    15,    -1,    17,    18,    19,    20,
      -1,    22,    23,    15,    -1,    17,    18,    19,    20,    -1,
      22,    23,    49,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    57,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    49,    -1,    15,
      -1,    17,    18,    19,    20,    57,    22,    23,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    15,    -1,    17,
      18,    19,    20,    -1,    22,    23,    -1,    15,    -1,    17,
      18,    19,    20,    49,    22,    23,    -1,    -1,    -1,    -1,
      -1,    57,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      15,    49,    17,    18,    19,    20,    -1,    22,    23,    57,
      15,    -1,    17,    18,    19,    20,    -1,    22,    23,    15,
      -1,    17,    18,    19,    20,    -1,    22,    23,    15,    -1,
      17,    18,    19,    20,    49,    22,    23,    -1,    -1,    -1,
      -1,    -1,    57,    15,    49,    17,    18,    19,    20,    -1,
      22,    23,    57,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    49,    -1,    15,    -1,    17,    18,    19,    20,
      57,    22,    23,    -1,    -1,    -1,    15,    49,    17,    18,
      19,    20,    -1,    22,    23,    57,    15,    -1,    17,    18,
      19,    20,    -1,    22,    23,    -1,    -1,    15,    49,    17,
      18,    19,    20,    -1,    22,    23,    57,    -1,    -1,    -1,
      49,    17,    18,    19,    20,    21,    22,    23,    57,    -1,
      49,    17,    18,    19,    20,    -1,    22,    23,    57,    -1,
      -1,    49,    17,    18,    19,    20,    32,    22,    23,    57,
      -1,    -1,    -1,    49,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    57,    -1,    49,    17,    18,    19,    20,    -1,    22,
      23,    57,    -1,    -1,    49,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    57,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    17,    18,    19,
      20,    21,    22,    23,    57,    -1,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    49,    17,    18,    19,    20,
      -1,    22,    23,    57,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    68,    70,     0,     6,     7,     8,     9,    12,    71,
      80,    74,    64,     3,     4,    10,    13,    14,    21,    24,
      39,    41,    43,    50,    51,    52,    53,    54,    55,    56,
      58,    59,    60,    61,    62,    63,    64,    65,    69,    75,
      76,    78,    79,    80,    82,    14,    16,    14,    70,    82,
       4,    14,    82,     3,    77,    14,    14,    14,    14,    14,
      14,    14,    14,    30,    30,    14,    14,    14,    14,     3,
      83,     4,    81,    17,    18,    19,    20,    21,    22,    23,
      49,    57,    72,    80,    82,    82,    15,    36,    82,    32,
      22,    23,    28,    35,    74,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    72,     5,
      16,     5,    21,    82,    82,    82,    82,    82,    82,    82,
      15,     4,    15,    37,    15,    82,     3,     3,     3,     3,
      44,    15,    15,    15,    15,    15,    15,    15,     5,    31,
      31,     5,     5,     5,    15,     3,    82,     4,    33,    73,
      74,     3,    33,    21,    82,    21,    21,    82,    82,    82,
      21,    21,    74,     5,    45,    32,    38,    75,    42,    15,
      15,    15,    15,    34,    80,    11,    48,    74,     3,    40,
      21,     4,    74,    14,    25,    32,    32,    75,    46,    82,
      76,    82,    15,    25,    21,    74,    42,    47,    21,    11,
      34,    74,    46
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
        case 3:

/* Line 1455 of yacc.c  */
#line 40 "exmix.y"
    {fprintf(yyout,"\nSuccessfully compiled");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 42 "exmix.y"
    {fprintf(yyout,"Function is called\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 46 "exmix.y"
    {fprintf(yyout,"\nfunction declared\n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 64 "exmix.y"
    {
																																fprintf(yyout,"In switch statement\n");
																																int i;
																																f=0;
																																for(i=0;i<9;i++)
																																{
																																printf("%d %d\n",c[i],casea[i]);
																																if((yyvsp[(3) - (13)])==c[i])
																																{
																																//$$=$6;
																																f=1;
																																fprintf(yyout,"value in case %d is %d\n",c[i],casea[i]);
																																break;
																																}
																																}
																																if(f==0)
																																{
																																//$$=$9;
																																fprintf(yyout,"Default value in switch statement is %d\n",(yyvsp[(9) - (13)]));
																																//$$=$6;
																																}

																																;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 87 "exmix.y"
    {c[(yyvsp[(2) - (8)])]=(yyvsp[(2) - (8)]);casea[(yyvsp[(2) - (8)])]=(yyvsp[(4) - (8)]); /*fprintf(yyout,"case %d\n",$2);*/;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 92 "exmix.y"
    {/*fprintf(yyout,"value of exp:%d\n",$1);*/;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 93 "exmix.y"
    {if((yyvsp[(3) - (6)]))
																{fprintf(yyout,"If statement executed\n");}
															else
																{fprintf(yyout,"Value is zero");}
															;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 98 "exmix.y"
    {if((yyvsp[(3) - (9)]))
																						{fprintf(yyout,"If(if-else) statement is true\n");}
																					else
																						{fprintf(yyout,"Else statement is true\n");}
																					;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 103 "exmix.y"
    {if((yyvsp[(3) - (12)]))
																																{fprintf(yyout,"If(if-elseif) statement is true\n");}
																															else if((yyvsp[(9) - (12)]))
																																{fprintf(yyout,"Else-if statement is true\n");}
																															else
																																{fprintf(yyout,"None of the statement is true\n");}
																															;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 110 "exmix.y"
    {if((yyvsp[(3) - (15)]))
																																						{fprintf(yyout,"If(if-elseif) statement is true\n");}
																																					else if((yyvsp[(9) - (15)]))
																																						{fprintf(yyout,"Else-if statement is true\n");}
																																					else
																																						{fprintf(yyout,"Else(if-else-if) statement is true");}
																																					;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 117 "exmix.y"
    { for(far[(yyvsp[(2) - (8)])]=1;far[(yyvsp[(2) - (8)])]<=(yyvsp[(5) - (8)]);far[(yyvsp[(2) - (8)])]+=1) {fprintf(yyout,"expression in for loop : %d\n",(yyvsp[(7) - (8)]));}	;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 118 "exmix.y"
    { for(far[(yyvsp[(2) - (10)])]=(yyvsp[(5) - (10)]);far[(yyvsp[(2) - (10)])]<(yyvsp[(7) - (10)]);far[(yyvsp[(2) - (10)])]+=1) {fprintf(yyout,"expression in for loop : %d\n",(yyvsp[(9) - (10)]));}	;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 119 "exmix.y"
    { if(wf==1){
											fprintf(yyout,"\nWhile execution is true\n");
											/*fprintf(yyout,"value of the expression in while loop: %d\n",$3);*/}
										;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 125 "exmix.y"
    { fprintf(yyout,"WHILE LOOP IS EXECUTED\n");
										int i;
										for(i=(yyvsp[(1) - (3)]);i<(yyvsp[(3) - (3)]);i++)
										{
											fprintf(yyout,"%d ",i);
										}
										fprintf(yyout,"\n");
										wf=1;
							;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 134 "exmix.y"
    { fprintf(yyout,"WHILE LOOP IS EXECUTED\n");
										int i;
										for(i=(yyvsp[(3) - (3)]);i<(yyvsp[(1) - (3)]);i++)
										{
											fprintf(yyout,"%d ",i);
										}
										fprintf(yyout,"\n");
										wf=1;
							;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 143 "exmix.y"
    { fprintf(yyout,"WHILE LOOP IS EXECUTED\n");
										int i;
										for(i=(yyvsp[(3) - (3)]);i<=(yyvsp[(1) - (3)]);i++)
										{
											fprintf(yyout,"%d ",i);
										}
										fprintf(yyout,"\n");
										wf=1;
							;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 152 "exmix.y"
    { fprintf(yyout,"WHILE LOOP IS EXECUTED\n");
										int i;
										for(i=(yyvsp[(1) - (3)]);i<=(yyvsp[(3) - (3)]);i++)
										{
											fprintf(yyout,"%d ",i);
										}
										fprintf(yyout,"\n");
										wf=1;
							;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 163 "exmix.y"
    {(yyval)=(yyvsp[(3) - (5)]);/*fprintf(yyout,"Value of the expression: %d",$3);*/;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 164 "exmix.y"
    {fprintf(yyout,"\n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 167 "exmix.y"
    {(yyval)=(yyvsp[(2) - (5)]);
												if(check[(yyvsp[(2) - (5)])]==1) {fprintf(yyout,"%c is already declared\n",(yyvsp[(2) - (5)])+97);}
												else { arr[(yyvsp[(1) - (5)])]=(yyvsp[(4) - (5)]); (yyval)=(yyvsp[(4) - (5)]);
													fprintf(yyout,"Value of the variable: %d\t\n",(yyvsp[(4) - (5)]));}
												;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 180 "exmix.y"
    { (yyval)=(yyvsp[(3) - (3)]);
			if(check[(yyvsp[(3) - (3)])]==1) {fprintf(yyout,"%c is already declared\n",(yyvsp[(3) - (3)])+97);}
			else {check[(yyvsp[(3) - (3)])]=1;}
			;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 184 "exmix.y"
    { (yyval)=(yyvsp[(1) - (1)]);
		if(check[(yyvsp[(1) - (1)])]==1)  {fprintf(yyout,"%c is already declared\n",(yyvsp[(1) - (1)])+97);}
		else {check[(yyvsp[(1) - (1)])]=1;}
		;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 189 "exmix.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 190 "exmix.y"
    {(yyval)=arr[(yyvsp[(1) - (1)])];;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 191 "exmix.y"
    { arr[(yyvsp[(1) - (3)])]=(yyvsp[(3) - (3)]); (yyval)=(yyvsp[(3) - (3)]);
                            fprintf(yyout,"Value of the variable: %d\t\n",(yyvsp[(3) - (3)])); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 193 "exmix.y"
    {(yyval)=(yyvsp[(1) - (3)])+(yyvsp[(3) - (3)]);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 194 "exmix.y"
    {(yyval)=(yyvsp[(1) - (3)])-(yyvsp[(3) - (3)]);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 195 "exmix.y"
    {(yyval)=(yyvsp[(1) - (3)])*(yyvsp[(3) - (3)]);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 196 "exmix.y"
    {if((yyvsp[(3) - (3)]))
					{(yyval)=(yyvsp[(1) - (3)])/(yyvsp[(3) - (3)]);}
				else
					{(yyval)=0;
					fprintf(yyout,"Not divided by zero\n");}
				;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 202 "exmix.y"
    {(yyval)=(yyvsp[(1) - (3)])<(yyvsp[(3) - (3)]);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 203 "exmix.y"
    {(yyval)=(yyvsp[(1) - (3)])>(yyvsp[(3) - (3)]);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 204 "exmix.y"
    {(yyval)=(yyvsp[(1) - (3)])==(yyvsp[(3) - (3)]);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 205 "exmix.y"
    {(yyval)=(yyvsp[(2) - (3)]);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 206 "exmix.y"
    {int base, exp;
															base=(yyvsp[(3) - (6)]);
															exp=(yyvsp[(5) - (6)]);
															int result = 1;
															while (exp != 0) {
																result *= base;
																--exp;
															}
															(yyval)=result;
															fprintf(yyout,"Power of %d = %d\n",(yyvsp[(3) - (6)]),(yyval));;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 216 "exmix.y"
    { (yyval) = sin(((yyvsp[(3) - (4)])*pi)/deg); fprintf(yyout,"Sine of %d = %d\n",(yyvsp[(3) - (4)]),(yyval));	;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 217 "exmix.y"
    { (yyval) = cos(((yyvsp[(3) - (4)])*pi)/deg); fprintf(yyout,"Cosine of %d = %d\n",(yyvsp[(3) - (4)]),(yyval));	;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 218 "exmix.y"
    { (yyval) = tan(((yyvsp[(3) - (4)])*pi)/deg); fprintf(yyout,"Tangent of %d = %d\n",(yyvsp[(3) - (4)]),(yyval));	;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 219 "exmix.y"
    { (yyval) = log((yyvsp[(3) - (4)])); fprintf(yyout," log of %d = %d\n",(yyvsp[(3) - (4)]),(yyval));	;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 220 "exmix.y"
    { (yyval) = sqrt((yyvsp[(3) - (4)])); fprintf(yyout,"Square root of %d = %d\n",(yyvsp[(3) - (4)]),(yyval));;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 221 "exmix.y"
    { (yyval) = (yyvsp[(3) - (4)]) * (yyvsp[(3) - (4)]); fprintf(yyout,"Square of %d = %d\n",(yyvsp[(3) - (4)]),(yyval));;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 222 "exmix.y"
    { (yyval) = (yyvsp[(3) - (4)]) * (yyvsp[(3) - (4)]) * (yyvsp[(3) - (4)]); fprintf(yyout,"Cube of %d = %d\n",(yyvsp[(3) - (4)]),(yyval));;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 223 "exmix.y"
    {
						int mult=1 ,i;
						for(i=(yyvsp[(1) - (2)]);i>0;i--)
						{
							mult=mult*i;
						}
						(yyval)=mult;
						fprintf(yyout,"Factorial of %d = %d\n",(yyvsp[(1) - (2)]),(yyval)); 
					 ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 232 "exmix.y"
    { int p,q,r;
																p=(yyvsp[(3) - (6)]);
																q=(yyvsp[(5) - (6)]);
																if(p<q) (yyval)=p;
																else (yyval)=q;
															fprintf(yyout,"Minimum value between %d and %d is: %d\n",(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]),(yyval));
															;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 239 "exmix.y"
    { int p,q,r;
																p=(yyvsp[(3) - (6)]);
																q=(yyvsp[(5) - (6)]);
																if(p>q) (yyval)=p;
																else (yyval)=q;
															fprintf(yyout,"Maximum value between %d and %d is: %d\n",(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]),(yyval));
															;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 246 "exmix.y"
    { int s1,s2,tmp;
															s1=(yyvsp[(3) - (6)]);
															s2=(yyvsp[(5) - (6)]);
															tmp=s1;
															s1=s2;
															s2=tmp;
															fprintf(yyout,"After swapping: %d %d\n",s1,s2);
															;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 254 "exmix.y"
    {int i,j,temp;
					for(i=0;i<29-1;i++)
					{
						for(j=0;j<29-1;j++)
						{
						if(srtarr[j]>srtarr[j+1])
						{
						temp=srtarr[j];
						srtarr[j]=srtarr[j+1];
						srtarr[j+1]=temp;
						}
						}
					}
					fprintf(yyout,"Sorted values: ");
					for(i=0;i<30;i++){
					if(srtarr[i]!=0)
						fprintf(yyout,"%d ",srtarr[i]);
					}
					fprintf(yyout,"\n");
				;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 275 "exmix.y"
    {srtarr[(yyvsp[(1) - (1)])]=(yyvsp[(1) - (1)]);;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 276 "exmix.y"
    {srtarr[(yyvsp[(3) - (3)])]=(yyvsp[(3) - (3)]);;}
    break;



/* Line 1455 of yacc.c  */
#line 2205 "exmix.tab.c"
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
#line 278 "exmix.y"


int yywrap()
{
return 1;
}
int main(void)
{
	yyin = fopen("inmix.txt","r");
	yyout = fopen("outmix.txt","w");
	yyparse();
}

int yyerror(char *s) 
{
	fprintf(yyout,"%s\n",s);
	return(0);
}

