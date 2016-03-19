/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1685 of yacc.c  */
#line 57 "grammar.y"

    //int i;
	char *s;
	int intVal;
	TER_TREE treeVal;



/* Line 1685 of yacc.c  */
#line 97 "grammar.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


