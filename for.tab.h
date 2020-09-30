
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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
     FUNCTION = 294
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


