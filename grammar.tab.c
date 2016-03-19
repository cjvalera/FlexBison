/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006,
   2009, 2010 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.3"

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
#line 1 "grammar.y"

#include <stdio.h>
#include <stdlib.h>
#define SYMBOLTABLESIZE	1000
#define IDLENGTH	200
#define EMPTY		-1
enum ParseTreeNodetype {PROGRAM, DECL, DECLB, VARDECL, VARDECLB, VARIABLEB,VARIABLE,TYPE, FORMALS, FORMALSB, STMTBLOCK,STMT, EXPR_STMT,IF_STMT,
	WHILE_STMT,FOR_STMT, RETURN_STMT, PRINT_STMT, PRINT_CSTMT, STMTB, INFOR_STMT,EXPR_LIST,EXPR_LISTB,
	ASSIGN,EXPR,EXPR_ADD,EXPR_SUB,EXPR_MUL,EXPR_DIV,EXPR_UMINUS, EXPR_LTHAN, EXPR_LETHAN,
	EXPR_GTHAN,EXPR_GETHAN, EXPR_EQ,EXPR_NQ, EXPR_MOD,EXPRB,INT_CONSTANT, STR_CONSTANT,ID_VALUE,
	BOOL_CONSTANT,CHAR_CONSTANT,FUNCDECL,VOIDFUNCDECL};

char *NodeName[] = {"PROGRAM"," DECL"," DECLB"," VARDECL"," VARDECLB"," VARIABLEB","VARIABLE","TYPE"," FORMALS"," FORMALSB",
	" STMTBLOCK","STMT"," EXPR_STMT","IF_STMT","WHILE_STMT","FOR_STMT"," RETURN_STMT"," PRINT_STMT"," PRINT_CSTMT"," STMTB"," INFOR_STMT","EXPR_LIST","EXPR_LISTB",
		"ASSIGN","EXPR","EXPR_ADD","EXPR_SUB","EXPR_MUL","EXPR_DIV","EXPR_UMINUS"," EXPR_LTHAN"," EXPR_LETHAN",
		"EXPR_GTHAN","EXPR_GETHAN"," EXPR_EQ","EXPR_NQ"," EXPR_MOD","EXPRB","INT_CONSTANT"," STR_CONSTANT","ID_VALUE",
	"BOOL_CONSTANT","CHAR_CONSTANT","FUNCDECL","VOIDFUNCDECL"};	

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL 0
#endif

struct astNode { 
	int item;
	int nodeID;
	struct astNode *first;
	struct astNode *second;
	struct astNode *third;	
};
typedef struct astNode AST_NODE;
typedef AST_NODE *TER_TREE;
TER_TREE newNode(int,int,TER_TREE,TER_TREE,TER_TREE);
#ifdef DEBUG
void printTree(TER_TREE,int);
#endif
void genCode(TER_TREE);
//initialize symbol table
struct symbolTableNode{
	char id[IDLENGTH];
};
typedef struct symbolTableNode SYMTABNODE;
typedef SYMTABNODE	*SYMTABNODEPTR;
SYMTABNODEPTR symtable[SYMBOLTABLESIZE];
int curSymSize = 0;










/* Line 189 of yacc.c  */
#line 135 "grammar.tab.c"

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
     STRING = 258,
     INT = 259,
     BOOL = 260,
     CHAR = 261,
     ELSE = 262,
     FOR = 263,
     IF = 264,
     WHILE = 265,
     RETURN = 266,
     VOID = 267,
     PRINTF = 268,
     INTCONSTANT = 269,
     ID = 270,
     STRINGCONSTANT = 271,
     BOOLCONSTANT = 272,
     CHARCONSTANT = 273,
     ADD = 274,
     SUB = 275,
     MUL = 276,
     DIV = 277,
     MOD = 278,
     LTHAN = 279,
     LETHAN = 280,
     GTHAN = 281,
     GETHAN = 282,
     EQUALEQUAL = 283,
     NOTEQUAL = 284,
     EQUAL = 285,
     SEMICOLON = 286,
     COMMA = 287,
     LPAREN = 288,
     RPAREN = 289,
     LBRACE = 290,
     RBRACE = 291,
     UMINUS = 294
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 64 "grammar.y"

    //int i;
	char *s;
	int intVal;
	TER_TREE treeVal;



/* Line 214 of yacc.c  */
#line 217 "grammar.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 229 "grammar.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   200

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  129

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    14,    17,    18,
      21,    24,    26,    29,    31,    33,    35,    37,    44,    51,
      53,    57,    58,    60,    65,    68,    70,    72,    74,    76,
      78,    80,    81,    84,    90,    98,   104,   114,   118,   126,
     132,   138,   142,   144,   145,   147,   151,   153,   155,   157,
     161,   165,   169,   173,   177,   180,   184,   188,   192,   196,
     200,   204,   208,   209,   211,   216,   218,   220,   222
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    43,    -1,    44,    -1,    49,    -1,    42,
      -1,    43,    42,    -1,    46,    31,    -1,    -1,    45,    44,
      -1,    48,    15,    -1,    46,    -1,    47,    46,    -1,     4,
      -1,     5,    -1,     6,    -1,     3,    -1,    48,    15,    33,
      51,    34,    52,    -1,    12,    15,    33,    51,    34,    52,
      -1,    46,    -1,    47,    32,    50,    -1,    -1,    50,    -1,
      35,    45,    54,    36,    -1,    63,    31,    -1,    55,    -1,
      56,    -1,    57,    -1,    58,    -1,    59,    -1,    52,    -1,
      -1,    54,    53,    -1,     9,    33,    62,    34,    53,    -1,
       9,    33,    62,    34,    53,     7,    53,    -1,    10,    33,
      62,    34,    53,    -1,     8,    33,    63,    31,    63,    31,
      63,    34,    53,    -1,    11,    63,    31,    -1,    13,    33,
      16,    32,    60,    34,    31,    -1,    13,    33,    65,    34,
      31,    -1,    13,    33,    15,    34,    31,    -1,    62,    32,
      60,    -1,    62,    -1,    -1,    60,    -1,    15,    30,    62,
      -1,    65,    -1,    15,    -1,    64,    -1,    33,    62,    34,
      -1,    62,    19,    62,    -1,    62,    20,    62,    -1,    62,
      21,    62,    -1,    62,    22,    62,    -1,    20,    62,    -1,
      62,    24,    62,    -1,    62,    25,    62,    -1,    62,    26,
      62,    -1,    62,    27,    62,    -1,    62,    28,    62,    -1,
      62,    29,    62,    -1,    62,    23,    62,    -1,    -1,    62,
      -1,    15,    33,    61,    34,    -1,    14,    -1,    16,    -1,
      17,    -1,    18,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    95,    95,   104,   105,   108,   109,   112,   115,   116,
     119,   122,   123,   126,   127,   128,   129,   132,   134,   138,
     139,   142,   143,   146,   149,   150,   151,   152,   153,   154,
     155,   158,   159,   162,   164,   168,   171,   174,   178,   180,
     182,   186,   188,   192,   193,   197,   199,   201,   203,   205,
     207,   209,   211,   213,   215,   217,   219,   221,   223,   225,
     227,   229,   233,   234,   239,   243,   244,   245,   246
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "INT", "BOOL", "CHAR", "ELSE",
  "FOR", "IF", "WHILE", "RETURN", "VOID", "PRINTF", "INTCONSTANT", "ID",
  "STRINGCONSTANT", "BOOLCONSTANT", "CHARCONSTANT", "ADD", "SUB", "MUL",
  "DIV", "MOD", "LTHAN", "LETHAN", "GTHAN", "GETHAN", "EQUALEQUAL",
  "NOTEQUAL", "EQUAL", "SEMICOLON", "COMMA", "LPAREN", "RPAREN", "LBRACE",
  "RBRACE", "\"then\"", "\"else\"", "UMINUS", "$accept", "Program", "Decl",
  "DeclB", "VariableDecl", "VariableDeclB", "Variable", "VariableB",
  "Type", "FunctionDecl", "Formals", "FormalsB", "StmtBlock", "Stmt",
  "StmtB", "IfStmt", "WhileStmt", "ForStmt", "ReturnStmt", "PrintStmt",
  "ExprList", "ExprListB", "Expr", "ExprB", "Call", "Constant", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    44,    45,    45,
      46,    47,    47,    48,    48,    48,    48,    49,    49,    50,
      50,    51,    51,    52,    53,    53,    53,    53,    53,    53,
      53,    54,    54,    55,    55,    56,    57,    58,    59,    59,
      59,    60,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    63,    63,    64,    65,    65,    65,    65
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     2,     0,     2,
       2,     1,     2,     1,     1,     1,     1,     6,     6,     1,
       3,     0,     1,     4,     2,     1,     1,     1,     1,     1,
       1,     0,     2,     5,     7,     5,     9,     3,     7,     5,
       5,     3,     1,     0,     1,     3,     1,     1,     1,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     0,     1,     4,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    16,    13,    14,    15,     0,     0,     5,     2,     3,
       0,     0,     4,     0,     1,     6,     7,    10,    21,    21,
      11,     0,     0,    22,     0,     0,     0,    12,    10,     0,
       0,    20,     8,    18,    17,    31,     9,    62,     0,     0,
       0,    62,     0,    65,    47,    66,    67,    68,     0,     0,
      23,    30,    32,    25,    26,    27,    28,    29,    63,     0,
      48,    46,    62,     0,     0,     0,     0,     0,    43,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,    37,     0,    66,     0,
      45,    44,     0,    42,    49,    50,    51,    52,    53,    61,
      55,    56,    57,    58,    59,    60,    62,    62,    62,     0,
       0,     0,    64,     0,     0,    33,    35,    40,     0,    39,
      41,    62,    62,     0,     0,    34,    38,    62,    36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    35,    10,    21,    22,    12,
      23,    24,    51,    52,    37,    53,    54,    55,    56,    57,
      91,    92,    58,    59,    60,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -106
static const yytype_int16 yypact[] =
{
     159,  -106,  -106,  -106,  -106,   -14,     8,  -106,   159,  -106,
     -25,    -1,  -106,   -15,  -106,  -106,  -106,    30,   113,   113,
      20,     6,    26,  -106,    33,    38,   113,  -106,  -106,    39,
      39,  -106,  -106,  -106,  -106,   113,  -106,    35,    40,    54,
      67,    42,    69,  -106,   -17,  -106,  -106,  -106,    42,    42,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,   132,   101,
    -106,  -106,    42,    42,    42,   103,   152,    42,    42,   132,
      70,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,  -106,   104,    86,   102,  -106,    99,   116,   115,
     132,  -106,   153,   118,  -106,   151,   151,   157,   157,   157,
    -106,  -106,  -106,  -106,  -106,  -106,    42,    68,    68,   158,
      42,   160,  -106,    42,   161,   181,  -106,  -106,   156,  -106,
    -106,    42,    68,   162,   163,  -106,  -106,    68,  -106
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,  -106,   186,  -106,   164,  -106,    21,  -106,     7,  -106,
     169,   177,    -4,  -105,  -106,  -106,  -106,  -106,  -106,  -106,
     -49,  -106,   -44,   -41,  -106,   134
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -20
static const yytype_int16 yytable[] =
{
      65,    13,   115,   116,    69,    70,    16,    11,    14,     1,
       2,     3,     4,    67,    17,    11,    68,   125,    18,    84,
      85,    83,   128,    90,    93,    33,    34,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    26,    20,
      20,    28,    27,    38,    39,    40,    41,    20,    42,    43,
      44,    45,    46,    47,   -19,    48,    43,    44,    45,    46,
      47,   118,    48,    19,   120,   114,    93,    29,    49,    93,
      32,    50,    30,    62,    32,    49,    38,    39,    40,    41,
     124,    42,    43,    44,    45,    46,    47,    63,    48,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      64,    49,    66,    32,    94,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     1,     2,     3,     4,
     107,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,   109,    86,   106,   108,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,   110,   111,
     113,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     1,     2,     3,     4,    43,    87,    88,    46,
      47,     5,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    76,    77,    78,    79,    80,    81,   112,   122,   117,
     123,   119,   121,   126,    15,    31,    25,   127,     0,    36,
      89
};

static const yytype_int8 yycheck[] =
{
      41,    15,   107,   108,    48,    49,    31,     0,     0,     3,
       4,     5,     6,    30,    15,     8,    33,   122,    33,    63,
      64,    62,   127,    67,    68,    29,    30,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    32,    18,
      19,    15,    21,     8,     9,    10,    11,    26,    13,    14,
      15,    16,    17,    18,    34,    20,    14,    15,    16,    17,
      18,   110,    20,    33,   113,   106,   110,    34,    33,   113,
      35,    36,    34,    33,    35,    33,     8,     9,    10,    11,
     121,    13,    14,    15,    16,    17,    18,    33,    20,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      33,    33,    33,    35,    34,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     3,     4,     5,     6,
      34,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    31,    34,    31,    31,    34,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    32,    34,
      32,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     3,     4,     5,     6,    14,    15,    16,    17,
      18,    12,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    24,    25,    26,    27,    28,    29,    34,     7,    31,
      34,    31,    31,    31,     8,    26,    19,    34,    -1,    35,
      66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    12,    41,    42,    43,    44,
      46,    48,    49,    15,     0,    42,    31,    15,    33,    33,
      46,    47,    48,    50,    51,    51,    32,    46,    15,    34,
      34,    50,    35,    52,    52,    45,    44,    54,     8,     9,
      10,    11,    13,    14,    15,    16,    17,    18,    20,    33,
      36,    52,    53,    55,    56,    57,    58,    59,    62,    63,
      64,    65,    33,    33,    33,    63,    33,    30,    33,    62,
      62,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    31,    63,    62,    62,    31,    15,    16,    65,
      62,    60,    61,    62,    34,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    31,    34,    34,    34,
      32,    34,    34,    32,    63,    53,    53,    31,    60,    31,
      60,    31,     7,    34,    63,    53,    31,    34,    53
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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

/* Line 1464 of yacc.c  */
#line 95 "grammar.y"
    {TER_TREE ast;
			ast = newNode(EMPTY,PROGRAM,(yyvsp[(1) - (1)].treeVal),NULL,NULL);
#ifdef DEBUG
			printTree(ast,0);
#endif
			genCode(ast);
			;}
    break;

  case 3:

/* Line 1464 of yacc.c  */
#line 104 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,DECL,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 105 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,DECL,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 108 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,DECLB,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 109 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,DECLB,(yyvsp[(1) - (2)].treeVal),(yyvsp[(2) - (2)].treeVal),NULL);;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 112 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,VARDECL,(yyvsp[(1) - (2)].treeVal),NULL,NULL);;}
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 115 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,VARDECLB,NULL,NULL,NULL);;}
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 116 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,VARDECLB,(yyvsp[(1) - (2)].treeVal),(yyvsp[(2) - (2)].treeVal),NULL);;}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 119 "grammar.y"
    {(yyval.treeVal) = newNode((yyvsp[(2) - (2)].intVal),VARIABLE,(yyvsp[(1) - (2)].treeVal),NULL,NULL);;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 122 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,VARIABLEB,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 123 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,VARIABLEB,(yyvsp[(1) - (2)].treeVal),(yyvsp[(2) - (2)].treeVal),NULL);;}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 126 "grammar.y"
    {(yyval.treeVal) = newNode(INT,TYPE,NULL,NULL,NULL);;}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 127 "grammar.y"
    {(yyval.treeVal) = newNode(BOOL,TYPE,NULL,NULL,NULL);;}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 128 "grammar.y"
    {(yyval.treeVal) = newNode(CHAR,TYPE,NULL,NULL,NULL);;}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 129 "grammar.y"
    {(yyval.treeVal) = newNode(STRING,TYPE,NULL,NULL,NULL);;}
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 133 "grammar.y"
    {(yyval.treeVal) = newNode(ID,FUNCDECL,(yyvsp[(4) - (6)].treeVal),(yyvsp[(6) - (6)].treeVal),NULL);;}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 135 "grammar.y"
    {(yyval.treeVal) = newNode(ID,VOIDFUNCDECL,(yyvsp[(4) - (6)].treeVal),(yyvsp[(6) - (6)].treeVal),NULL);;}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 138 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,FORMALS,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 139 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,FORMALS,(yyvsp[(1) - (3)].treeVal),(yyvsp[(3) - (3)].treeVal),NULL);;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 142 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,FORMALSB,NULL,NULL,NULL);;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 143 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,FORMALSB,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 146 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,STMTBLOCK,(yyvsp[(2) - (4)].treeVal),(yyvsp[(3) - (4)].treeVal),NULL);;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 149 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,STMT,(yyvsp[(1) - (2)].treeVal),NULL,NULL);;}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 150 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,STMT,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 151 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,STMT,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 152 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,STMT,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 153 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,STMT,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 154 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,STMT,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 155 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,STMT,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 158 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,STMTB,NULL,NULL,NULL);;}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 159 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,STMTB,(yyvsp[(1) - (2)].treeVal),(yyvsp[(2) - (2)].treeVal),NULL);;}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 163 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,IF_STMT,(yyvsp[(3) - (5)].treeVal),(yyvsp[(5) - (5)].treeVal),NULL);;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 165 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,IF_STMT,(yyvsp[(3) - (7)].treeVal),(yyvsp[(5) - (7)].treeVal),(yyvsp[(7) - (7)].treeVal));;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 168 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,WHILE_STMT,(yyvsp[(3) - (5)].treeVal),(yyvsp[(5) - (5)].treeVal),NULL);;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 172 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,FOR_STMT,newNode(EMPTY,INFOR_STMT,(yyvsp[(3) - (9)].treeVal),(yyvsp[(5) - (9)].treeVal),(yyvsp[(7) - (9)].treeVal)),(yyvsp[(9) - (9)].treeVal),NULL);;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 175 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,RETURN_STMT,(yyvsp[(2) - (3)].treeVal),NULL,NULL);;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 179 "grammar.y"
    {(yyval.treeVal) = newNode(STRINGCONSTANT,PRINT_STMT,(yyvsp[(5) - (7)].treeVal),NULL,NULL);;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 181 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,PRINT_CSTMT,(yyvsp[(3) - (5)].treeVal),NULL,NULL);;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 183 "grammar.y"
    {(yyval.treeVal) = newNode((yyvsp[(3) - (5)].intVal),PRINT_STMT,NULL,NULL,NULL);;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 187 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_LIST,(yyvsp[(1) - (3)].treeVal),(yyvsp[(3) - (3)].treeVal),NULL);;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 189 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_LIST,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 192 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_LISTB,NULL,NULL,NULL);;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 194 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_LISTB,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 198 "grammar.y"
    {(yyval.treeVal) = newNode((yyvsp[(1) - (3)].intVal),ASSIGN,(yyvsp[(3) - (3)].treeVal),NULL,NULL);;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 200 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 202 "grammar.y"
    {(yyval.treeVal) = newNode((yyvsp[(1) - (1)].intVal),ID_VALUE,NULL,NULL,NULL);;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 204 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 206 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR,(yyvsp[(2) - (3)].treeVal),NULL,NULL);;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 208 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_ADD,(yyvsp[(1) - (3)].treeVal),(yyvsp[(3) - (3)].treeVal),NULL);;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 210 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_SUB,(yyvsp[(1) - (3)].treeVal),(yyvsp[(3) - (3)].treeVal),NULL);;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 212 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_MUL,(yyvsp[(1) - (3)].treeVal),(yyvsp[(3) - (3)].treeVal),NULL);;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 214 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_DIV,(yyvsp[(1) - (3)].treeVal),(yyvsp[(3) - (3)].treeVal),NULL);;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 216 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_UMINUS,(yyvsp[(2) - (2)].treeVal),NULL,NULL);;}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 218 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_LTHAN,(yyvsp[(1) - (3)].treeVal),(yyvsp[(3) - (3)].treeVal),NULL);;}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 220 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_LETHAN,(yyvsp[(1) - (3)].treeVal),(yyvsp[(3) - (3)].treeVal),NULL);;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 222 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_GTHAN,(yyvsp[(1) - (3)].treeVal),(yyvsp[(3) - (3)].treeVal),NULL);;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 224 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_GETHAN,(yyvsp[(1) - (3)].treeVal),(yyvsp[(3) - (3)].treeVal),NULL);;}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 226 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_EQ,(yyvsp[(1) - (3)].treeVal),(yyvsp[(3) - (3)].treeVal),NULL);;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 228 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_NQ,(yyvsp[(1) - (3)].treeVal),(yyvsp[(3) - (3)].treeVal),NULL);;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 230 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPR_MOD,(yyvsp[(1) - (3)].treeVal),(yyvsp[(3) - (3)].treeVal),NULL);;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 233 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPRB,NULL,NULL,NULL);;}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 234 "grammar.y"
    {(yyval.treeVal) = newNode(EMPTY,EXPRB,(yyvsp[(1) - (1)].treeVal),NULL,NULL);;}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 240 "grammar.y"
    {(yyval.treeVal) = newNode((yyvsp[(1) - (4)].intVal),EXPRB,(yyvsp[(3) - (4)].treeVal),NULL,NULL);;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 243 "grammar.y"
    {(yyval.treeVal) = newNode((yyvsp[(1) - (1)].intVal),INT_CONSTANT,NULL,NULL,NULL);;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 244 "grammar.y"
    {(yyval.treeVal) = newNode((yyvsp[(1) - (1)].intVal),STR_CONSTANT,NULL,NULL,NULL);;}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 245 "grammar.y"
    {(yyval.treeVal) = newNode((yyvsp[(1) - (1)].intVal),BOOL_CONSTANT,NULL,NULL,NULL);;}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 246 "grammar.y"
    {(yyval.treeVal) = newNode((yyvsp[(1) - (1)].intVal),CHAR_CONSTANT,NULL,NULL,NULL);;}
    break;



/* Line 1464 of yacc.c  */
#line 2031 "grammar.tab.c"
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



/* Line 1684 of yacc.c  */
#line 247 "grammar.y"




TER_TREE newNode(int ival,int node_ID, TER_TREE t1,TER_TREE t2,TER_TREE t3)
{
	TER_TREE tree;
	tree = (TER_TREE)malloc(sizeof(AST_NODE));
	tree->item = ival;
	tree->nodeID = node_ID;
	tree->first = t1;
	tree->second = t2;
	tree->third = t3;
	return tree;
}
void printTree(TER_TREE tree,int indent)
{
	int i;
	if(tree ==NULL) return;
	for(i=indent;i;i--)
		printf(" ");
	if(tree->nodeID == INT_CONSTANT)
		printf("INT: %d ",tree->item);
	else if(tree->nodeID == ID_VALUE){
		if(tree->item > 0 && tree->item < SYMBOLTABLESIZE )
			printf("id: %s ",symtable[tree->item]->id);
		else
			printf("unknown id: %d ", tree->item);
	}
	if(tree->item != EMPTY){
		printf("item: %d ",tree->item);
	}		
	if (tree->nodeID < 0 || tree->nodeID > sizeof(NodeName))
		printf("UNKNOWNnodeID: %d\n",tree->nodeID);
	else
		printf("%s\n",NodeName[tree->nodeID]);//remeber to change back to %d and the id
	printTree(tree->first,indent+3);
	printTree(tree->second,indent+3);
	printTree(tree->third,indent+3);
}
void genCode(TER_TREE tree)
{
	
	if(tree == NULL)return;
	
	
	switch(tree->nodeID)
	{
	
		case (PROGRAM):
			printf("int main() {\n");
			genCode(tree->first);
			printf("}\n");
			return;
		case(VARIABLE):
			printf("int ");
			if(tree->item > 0 && tree->item < SYMBOLTABLESIZE )
				printf("%s",symtable[tree->item]->id);
			else
				printf("unknownID:%d ", tree->item);
			genCode(tree->first);
			printf(";\n");
			return;
		case (IF_STMT):
			printf("if (");
			genCode(tree->first);
			printf(") {\n");
			genCode(tree->second);
			printf("}\n");
			return;
		case (WHILE_STMT):
			printf("while (");
			genCode(tree->first);
			printf(") {\n");
			genCode(tree->second);
			printf("}\n");
			return;
		case (ASSIGN):
			if(tree->item > 0 && tree->item < SYMBOLTABLESIZE )
				printf("%s",symtable[tree->item]->id);
			else
				printf("unknownID:%d ", tree->item);
			printf(" = ");
			genCode(tree->first);
			printf(";\n");
			return;
		case (INT_CONSTANT):
			printf("%d",tree->item);
			return;
		case (EXPR_ADD):
			genCode(tree->first);
			printf(" + ");
			genCode(tree->second);
			return;
		case (EXPR_SUB):
			genCode(tree->first);
			printf(" - ");
			genCode(tree->second);
			return;
		case (EXPR_MUL):
			genCode(tree->first);
			printf(" * ");
			genCode(tree->second);
			return;
		case (EXPR_DIV):
			genCode(tree->first);
			printf(" / ");
			genCode(tree->second);
			return;
		case (EXPR_UMINUS):
			printf("-");
			genCode(tree->first);
			return;
		case (EXPR_LTHAN):
			genCode(tree->first);
			printf(" < ");
			genCode(tree->second);
			return;
		case (EXPR_LETHAN):
			genCode(tree->first);
			printf(" <= ");
			genCode(tree->second);
			return;
		case (EXPR_GTHAN):
			genCode(tree->first);
			printf(" > ");
			genCode(tree->second);
			return;
		case (EXPR_GETHAN):
			genCode(tree->first);
			printf(" >= ");
			genCode(tree->second);
			return;
		case (EXPR_EQ):
			genCode(tree->first);
			printf(" == ");
			genCode(tree->second);
			return;
		case (EXPR_NQ):
			genCode(tree->first);
			printf(" != ");
			genCode(tree->second);
			return;
		/*case (EXPR_MOD):
			genCode(tree->first);
			printf(" % ");
			genCode(tree->second);
			printf(";\n");
			return;*/
		case (ID_VALUE):
			if(tree->item > 0 && tree->item < SYMBOLTABLESIZE )
				printf("%s",symtable[tree->item]->id);
			else
				printf("unknownID:%d ", tree->item);
			return;
		case (PRINT_STMT):
			printf("printf(");
			if(tree->item > 0 && tree->item < SYMBOLTABLESIZE )
				printf("%s",symtable[tree->item]->id);
			else
				printf("unknownID:%d ", tree->item);
			printf(");\n");
		
	}	
	
	genCode(tree->first);
	genCode(tree->second);
	genCode(tree->third);
}
#include "lex.yy.c"
yyerror(char *s)
{
	exit(-1);
}

int main(int argc, char **argv)	{ 
	yyparse();
}



