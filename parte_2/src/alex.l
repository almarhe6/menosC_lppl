%{
#include <string.h>
#include <stdio.h>
#include "header.h"
#include "asin.h"
#define retornar(x) {if (verbosidad) ECHO; return x;}
%}

%option yylineno
%option noinput
%option nounput

letra  [a-zA-Z] 
delimitador [ \t\n]+
digito [0-9]
entero {digito}+
real {digito}*"."{digito}+
identificador {letra}({letra}|{digito}|_)*
constante {entero}|{real}
comentario "//".*

%%
"true" {retornar(TRUE_);}
"false" {retornar(FALSE_);}
"int"  {retornar(INT_);}
"bool" {retornar(BOOL_);}
"return" {retornar(RETURN_);}
"read" {retornar(READ_);}
"print" {retornar(PRINT_);}
"if" {retornar(IF_);}
"else"  {retornar(ELSE_);}
"for" {retornar(FOR_);}
"&&" {retornar(AND_);}
"||" {retornar(OR_);}
"==" {retornar(IGUAL_);} 
"!=" {retornar(DISTINTO_);}
">" {retornar(MAYOR_);}
"<" {retornar(MENOR_);}
">=" {retornar(MAYORIGUAL_);}
"<=" {retornar(MENORIGUAL_);}
"+" {retornar(MAS_);}
"-" {retornar(MENOS_);}
"*" {retornar(POR_);}
"/" {retornar(DIV_);}
"(" {retornar(OPAR_);}
")" {retornar(CPAR_);}
"!" {retornar(NEGACION_);}
";" {retornar(PUNTOYCOMA_);}
"," {retornar(COMA_);}
"{" {retornar(OKEY_);}
"}" {retornar(CKEY_);}
"=" {retornar(ASIGNACION_);}
"[" {retornar(OCOR_);}
"]" {retornar(CCOR_);}

{identificador} {yyval.cent=yytext; retornar(ID_);}
{constante} {yyval.ident=atoi(yytext); retornar(CTE_);}
{delimitador} {if(verbosidad) ECHO;}
{comentario} {if(verbosidad) ECHO;}

. {yyerror("Caracter desconocido");}
%%
