%{
    #include <stdio.h>
    #include "header.h"
%}

%union{
	int cent;
	char *ident;
}

    %token TRUE_ FALSE_ INT_ BOOL_ RETURN_ READ_
    %token PRINT_ IF_ ELSE_ FOR_ AND_ OR_ IGUAL_ DISTINTO_ MAYOR_
    %token MENOR_ MAYORIGUAL_ MENORIGUAL_ MAS_ MENOS_ POR_ DIV_
    %token OPAR_ CPAR_ NEGACION_ PUNTOYCOMA_ COMA_ OKEY_ CKEY_
    %token ASIGNACION_ OCOR_ CCOR_

    %token <cent> CTE_
    %token <ident> ID_
%%

programa:{dvar=0;niv=0;cargaContexto(niv);} 
	listDecla { if (obtTdS("main").t==T_ERROR) yyerror("Falta el main"); if (verTdS) mostrarTds(); }
	;

listDecla: decla { $$ = $1; }
	 | listDecla decla { $$ = $1 + $2; }
	 ;

decla: declaVar { $$ = 0; }
     | declaFunc { $$ = $1; }
     ;

declaVar: tipoSimp ID_ PUNTOYCOMA_  
	{
		if (!insTdS($2, VARIABLE, $1, niv, dvar, -1)){
			yyerror("Variable ya declarada!");}
		else {
			dvar += TALLA_TIPO_SIMPLE;}
		if (verTds) mostrarTdS();
	}
	| tipoSimp ID_ ASIGNACION_ const PUNTOYCOMA_
		
	| tipoSimp ID_ OCOR_ CTE_ CCOR_ PUNTOYCOMA_
	;

const: CTE_ { $$ = T_ENTERO; }
     | TRUE_ { $$ = T_LOGICO; }
     | FALSE_ { $$ = T_LOGICO; }
     ;

tipoSimp: INT_ { $$ = T_ENTERO; }
	| BOOL_ { $$ = T_LOGICO; }
	;

declaFunc: tipoSimp ID_ { niv = 1; cargoContexto(niv); } 

	  OPAR_ paramForm CPAR_ 
	  { if(!insTdS($2,FUNCION,$1,niv-1,dvar,$5)) yyerror("Función ya declarada");}

	  bloque
	  {
	  if (verTdS) mostrarTdS();
          descargaCOntexto(niv);
          niv = 0;
	  }
	  ;


paramForm: listParamForm { $$ = $1; }
	 | { $$ = insTdD(-1, T_VACIO); }
	 ;

listParamForm: tipoSimp ID_ {
		$$ = insTdD(-1, $1);
		
		if (!insTdS($2, PARAMETRO, $1, niv, dvar, -1)){
		   yyerror("Parametro repetido");}
		else { dvar += TALLA_TIPO_SIMPLE; }
		if (verTdS) {mostrarTdS;};
		
		}
	     | tipoSimp ID_ COMA_ listParamForm {
		$$ = insTdD($4, $1);
		if (!insTdS($2, PARAMETRO, $1, niv, dvar, -1)){
			yyerror("Parametro repetido");}
		else { dvar += TALLA_TIPO_SIMPLE; }
		if (verTdS mostrarTdS();
	     }
	     ;

bloque: OKEY_ declaVarLocal listInst RETURN_ expre PUNTOYCOMA_ CKEY_ 
	{if(obtTdD(-1).tipo == T_ERROR){yyerror("Return fuera de función")}
	else if(obtTdD(-1).tipo != $5) yyerror("La funcion no deberia devolver ese tipo");}
;

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

paramAct: { $$ = insTdD(-1, T_VACIO); }
	| listParamAct { $$ = $1;}
	;

listParamAct: expre { $$ = insTdD(-1, $1); }
	    | expre COMA_ listParamAct { $$ = insTdD = insTdD($3, $1);}
	    ;

opLogic: AND_ { $$ = AND; } 
       | OR_ { $$ = OR; }
       ;

opIgual: IGUAL_ { $$ = IGUAL;}
       | DISTINTO_ { $$ = DISTINTO;}
       ; 

opRel: MAYOR_ { $$ = MAYOR; }
     | MENOR_ { $$ = MENOR; }
     | MAYORIGUAL_ { $$ = MAYORIGUAL; }
     | MENORIGUAL_ { $$ = MENORIGUAL; }
     ;

opAd: MAS_ { $$ = MAS; }
    | MENOS_ { $$ = MENOS; }
    ;

opMul: POR_ { $$ = POR; }
     | DIV_ { $$ = DIV; }
     ;

opUna: MAS_ { $$ = MAS; }
     | MENOS_ { $$ = MENOS; }
     | NEGACION_ { $$ = NEGACION; }
     ;	

%%

