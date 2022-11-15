/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_ASIN_H_INCLUDED
# define YY_YY_ASIN_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID_ = 258,
    CTE_ = 259,
    TRUE_ = 260,
    FALSE_ = 261,
    INT_ = 262,
    BOOL_ = 263,
    RETURN_ = 264,
    READ_ = 265,
    PRINT_ = 266,
    IF_ = 267,
    ELSE_ = 268,
    FOR_ = 269,
    AND_ = 270,
    OR_ = 271,
    IGUAL_ = 272,
    DISTINTO_ = 273,
    MAYOR_ = 274,
    MENOR_ = 275,
    MAYORIGUAL_ = 276,
    MENORIGUAL_ = 277,
    MAS_ = 278,
    MENOS_ = 279,
    POR_ = 280,
    DIV_ = 281,
    OPAR_ = 282,
    CPAR_ = 283,
    NEGACION_ = 284,
    PUNTOYCOMA_ = 285,
    COMA_ = 286,
    OKEY_ = 287,
    CKEY_ = 288,
    ASIGNACION_ = 289,
    OCOR_ = 290,
    CCOR_ = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASIN_H_INCLUDED  */
