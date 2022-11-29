%{
    #include <stdio.h>
    #include "header.h"
%}

%union{
	int cent;
	char *ident;
}

    %token ID_ CTE_ TRUE_ FALSE_ INT_ BOOL_ RETURN_ READ_
    %token PRINT_ IF_ ELSE_ FOR_ AND_ OR_ IGUAL_ DISTINTO_ MAYOR_
    %token MENOR_ MAYORIGUAL_ MENORIGUAL_ MAS_ MENOS_ POR_ DIV_
    %token OPAR_ CPAR_ NEGACION_ PUNTOYCOMA_ COMA_ OKEY_ CKEY_
    %token ASIGNACION_ OCOR_ CCOR_

%%

programa: listDecla
	;

listDecla: decla 
	 | listDecla decla
	 ;

decla: declaVar
     | declaFunc
     ;

declaVar: tipoSimp ID_ PUNTOYCOMA_ 
	| tipoSimp ID_ ASIGNACION_ const PUNTOYCOMA_
	| tipoSimp ID_ OCOR_ CTE_ CCOR_ PUNTOYCOMA_
	;

const: CTE_
     | TRUE_
     | FALSE_
     ;

tipoSimp: INT_
	| BOOL_
	;

declaFunc: tipoSimp ID_ OPAR_ paramForm CPAR_ bloque;

paramForm: listParamForm
	 |
	 ;

listParamForm: tipoSimp ID_
	     | tipoSimp ID_ COMA_ listParamForm
	     ;

bloque: OKEY_ declaVarLocal listInst RETURN_ expre PUNTOYCOMA_ CKEY_ ;

declaVarLocal: declaVarLocal declaVar
	     |
	     ;

listInst: listInst inst
       |
       ;		

inst: OKEY_ listInst CKEY_
    | instExpre
    | instEntSal
    | instSelec
    | instIter
    ;

instExpre: expre PUNTOYCOMA_
	 | PUNTOYCOMA_
	 ;

instEntSal: READ_ OPAR_ ID_ CPAR_ PUNTOYCOMA_
	  | PRINT_ OPAR_ expre CPAR_ PUNTOYCOMA_
	  ;

instSelec: IF_ OPAR_ expre CPAR_ inst ELSE_ inst;

instIter: FOR_ OPAR_ expreOp PUNTOYCOMA_ expre PUNTOYCOMA_ expreOp CPAR_ inst;

expreOp: expre
       |
       ;

expre: expreLogic
     | ID_ ASIGNACION_ expre
     | ID_ OCOR_ expre CCOR_ ASIGNACION_ expre
     ;

expreLogic: expreIgual
	  | expreLogic opLogic expreIgual
	  ;

expreIgual: expreRel
	  | expreIgual opIgual expreRel;

expreRel: expreAd
	| expreRel opRel expreAd;

expreAd: expreMul
       | expreAd opAd expreMul;

expreMul: expreUna
	| expreMul opMul expreUna;

expreUna: expreSufi
	| opUna expreUna;

expreSufi: const
	 | OPAR_ expre CPAR_
	 | ID_
	 | ID_ OCOR_ expre CCOR_
	 | ID_ OPAR_ paramAct CPAR_;

paramAct: listParamAct
	|;

listParamAct: expre
	    | expre COMA_ listParamAct;

opLogic: AND_ 
       | OR_;

opIgual: IGUAL_
       | DISTINTO_;

opRel: MAYOR_
     | MENOR_
     | MAYORIGUAL_
     | MENORIGUAL_;

opAd: MAS_
    | MENOS_;

opMul: POR_
     | DIV_;

opUna: MAS_
     | MENOS_
     | NEGACION_;	

%%

