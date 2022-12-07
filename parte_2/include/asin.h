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

#ifndef YY_YY_ASIN_H_INCLUDED
# define YY_YY_ASIN_H_INCLUDED
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
    TRUE_ = 258,                   /* TRUE_  */
    FALSE_ = 259,                  /* FALSE_  */
    INT_ = 260,                    /* INT_  */
    BOOL_ = 261,                   /* BOOL_  */
    RETURN_ = 262,                 /* RETURN_  */
    READ_ = 263,                   /* READ_  */
    PRINT_ = 264,                  /* PRINT_  */
    IF_ = 265,                     /* IF_  */
    ELSE_ = 266,                   /* ELSE_  */
    FOR_ = 267,                    /* FOR_  */
    AND_ = 268,                    /* AND_  */
    OR_ = 269,                     /* OR_  */
    IGUAL_ = 270,                  /* IGUAL_  */
    DISTINTO_ = 271,               /* DISTINTO_  */
    MAYOR_ = 272,                  /* MAYOR_  */
    MENOR_ = 273,                  /* MENOR_  */
    MAYORIGUAL_ = 274,             /* MAYORIGUAL_  */
    MENORIGUAL_ = 275,             /* MENORIGUAL_  */
    MAS_ = 276,                    /* MAS_  */
    MENOS_ = 277,                  /* MENOS_  */
    POR_ = 278,                    /* POR_  */
    DIV_ = 279,                    /* DIV_  */
    OPAR_ = 280,                   /* OPAR_  */
    CPAR_ = 281,                   /* CPAR_  */
    NEGACION_ = 282,               /* NEGACION_  */
    PUNTOYCOMA_ = 283,             /* PUNTOYCOMA_  */
    COMA_ = 284,                   /* COMA_  */
    OKEY_ = 285,                   /* OKEY_  */
    CKEY_ = 286,                   /* CKEY_  */
    ASIGNACION_ = 287,             /* ASIGNACION_  */
    OCOR_ = 288,                   /* OCOR_  */
    CCOR_ = 289,                   /* CCOR_  */
    CTE_ = 290,                    /* CTE_  */
    ID_ = 291                      /* ID_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 6 "src/asin.y"

	int cent;
	char *ident;
	int expr;
	int referencia;

#line 107 "asin.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ASIN_H_INCLUDED  */
