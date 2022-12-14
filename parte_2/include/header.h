/*****************************************************************************/
/**   Ejemplo de un posible fichero de cabeceras donde situar las           **/
/** definiciones de constantes, variables y estructuras para MenosC. Los    **/
/** alumnos deberan adaptarlo al desarrollo de su propio compilador.    **/
/*****************************************************************************/
#ifndef _HEADER_H
#define _HEADER_H

/****************************************************** Constantes generales */
#define TRUE  1
#define FALSE 0
#define TALLA_TIPO_SIMPLE 1
#define TALL_SEGENLACES 2


/************************************* Variables externas definidas en el AL */
extern int yylex();
extern int yyparse();

extern FILE *yyin;                           /* Fichero de entrada           */
extern int   yylineno;                       /* Contador del numero de linea */
extern char *yytext;                         /* Patron detectado             */
/********* Funciones y variables externas definidas en el Programa Principal */
extern void yyerror(const char * msg) ;   /* Tratamiento de errores          */

extern int verbosidad;                   /* Flag si se desea una traza       */
extern int numErrores;              /* Contador del numero de errores        */
extern int dvar;
extern int niv;
extern int verTDS;

#define NEGACION 0
#define MAS 1
#define MENOS 2
#define POR 3
#define DIV 4
#define IGUAL 5
#define DISTINTO 6
#define OR 7
#define AND 8
#define MAYOR 9
#define MENOR 10
#define MAYORIGUAL 11
#define MENORIGUAL 12


#endif  /* _HEADER_H */
/*****************************************************************************/
