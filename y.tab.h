
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

extern YYSTYPE yylval;


