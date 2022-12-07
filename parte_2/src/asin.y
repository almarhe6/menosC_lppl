%{
    #include <stdio.h>
    #include "header.h"
%}

%union{
	int cent;
	char *ident;
	int expr;
	int referencia;
}

    %token TRUE_ FALSE_ INT_ BOOL_ RETURN_ READ_
    %token PRINT_ IF_ ELSE_ FOR_ AND_ OR_ IGUAL_ DISTINTO_ MAYOR_
    %token MENOR_ MAYORIGUAL_ MENORIGUAL_ MAS_ MENOS_ POR_ DIV_
    %token OPAR_ CPAR_ NEGACION_ PUNTOYCOMA_ COMA_ OKEY_ CKEY_
    %token ASIGNACION_ OCOR_ CCOR_

    %token <cent> CTE_
    %token <ident> ID_
	%type  <referencia> listParamForm paramForm listParamAct paramAct
	%type <cent> tipoSimp opRel opUna opMul opAd opIgual opLogic listDecla decla declaFunc bloque
	%type <expr> expreOp expreLogic expre expreIgual expreAd expreMul expreSufi expreUna const expreRel	
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
	{ 
	int talla_array = $4;
        if (talla_array <= 0) {
            yyerror("El número de elmentos del array ha de ser superior a 0");
		numelem = 0;
        }
	if (!insTdS($2, VARIABLE, T_ARRAY, niv, dvar, insTdA($1, numelem)))
		yyerror("variable ya declarada");
	else
		dvar += numelem * TALLA_TIPO_SIMPLE; 
	if(verTdS) mostrarTdS();
	}
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
		if (verTdS) mostrarTdS();
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
			{
		SIMB sim = obtTdS($3);
		if (sim.t != T_ENTERO) {
			yyerror("El argumento de la funcion read() debe ser entero.");
		}
	}
	  		| PRINT_ OPAR_ expre CPAR_ PUNTOYCOMA_
	  	{
			if ($3 != T_ERROR && $3 != T_ENTERO) {
				yyerror("El argumento de la funcion print() debe ser entero.");
			}
		}
	  ;

instSelec: IF_ OPAR_ expre CPAR_ {
		if ($3 != T_ERROR)
			if ($3 != T_LOGICO) yyerror("La expresion de evaluacion del if debe ser de tipo logico.");
		}
		inst ELSE_ inst;

instIter: FOR_ OPAR_ expreOp PUNTOYCOMA_ expre PUNTOYCOMA_ expreOp CPAR_ inst

;

expreOp: expre { $$ = $1; }
       | { $$ = T_VACIO; }
       ;

expre: expreLogic { $$ = $1}
     | ID_ ASIGNACION_ expre 
     | ID_ OCOR_ expre CCOR_ ASIGNACION_ expre
     ;

expreLogic: expreIgual { $$ = $1; }
	  | expreLogic opLogic expreIgual
	  {
		$$ = T_ERROR;
		if ($1 != T_ERROR || $3 != T_ERROR) {
			if ($1 != $3 && $1 != T_VACIO && $3 != T_VACIO) {
				printf("$1 = %d  $3 = %d",$1,$3);
				yyerror("Incompatibilidad de tipos en expresion logica");
			} else {
				$$ = T_LOGICO;
			}
		}
	}
	  ;

expreIgual: expreRel  { $$ = $1; }
	  | expreIgual opIgual expreRel
	  {	
		$$ = T_ERROR;
		
		if ($1 != T_ERROR && $3 != T_ERROR) {
			if ($1 != $3) {
				yyerror("Incompatibilidad de tipos en expresion igualdad");
			} else if ($3 != T_LOGICO || $3 != T_ENTERO) { 
				yyerror("Incompatibilidad de tipos, deben ser expresiones logicas o de enteros.");
			}  else {
				$$ = T_LOGICO;
			}
		} 
	}
	  ;

expreRel: expreAd {$$ = $1;}
	| expreRel opRel expreAd
	{
            $$ = T_ERROR;
			if ($1 != T_ERROR && $3 != T_ERROR){
				if (!($1 == $3 && $1 == T_ENTERO)) {
					yyerror("Error de tipos en expresion relacional");
				} else {
					$$ = T_LOGICO;
				}
			}
		}
	;

expreAd: expreMul { $$ = $1; }
       | expreAd opAd expreMul
	   {
        $$ = T_ERROR;
		if ($1 != T_ERROR && $3 != T_ERROR) {
			if (!($1 == $3 && $1 == T_ENTERO)) {
				yyerror("Error de tipos en expresion aditiva");
			} else {
				$$ = T_ENTERO;
			}
		}
	}
	   ;

expreMul: expreUna {$$ = $1;}
	| expreMul opMul expreUna
	{
            $$ = T_ERROR;
			if ($1 != T_ERROR && $3 != T_ERROR) {
				if (!($1 == $3 && $1 == T_ENTERO)) {
					yyerror("Incompatibilidad de tipos en expresion multiplicativa");
				} else {
					$$ = T_ENTERO;
				} 
			}
		}
	;

expreUna: expreSufi {$$ = $1;}
	| opUna expreUna
	{  
        $$ = T_ERROR;
        if ($2 != T_ERROR) {
            if ($2 == T_ENTERO) {                                                                         
                if ($1 == OPNOT) {
					yyerror("Incompatibilidad de tipos, se está negando un entero");
			 	} else { 
					$$ = T_ENTERO; 
				}
            } else if ($2 == T_LOGICO) {                                                                  
                if ($1 == OPSUMA || $1 == OPRESTA) {
					yyerror("Incompatibilidad de tipos, solo se puede aplicar el operador unario \"+\" o \"-\" a una expresion entera.");
				} else { 
					$$ = T_LOGICO;
				}
            } else {
				yyerror("Incompatibilidad de tipos, no son el mismo tipo o no son equivalentes.");
			}                                                               
        } 
    }
	;

expreSufi: const {$$ = $1;}
	 | OPAR_ expre CPAR_ {$$ = $2;}
	 | ID_ 
	 {
			SIMB sim = obtTdS($1);
			$$ = T_ERROR;

		 	if (sim.t == T_ERROR) {
				 yyerror("No existe ninguna variable con ese identificador.");
			 } else { 
				 $$ = sim.t;
			 }
	 }
	 | ID_ OCOR_ expre CCOR_
	 {
		SIMB sim = obtTdS($1);
		
		$$ = T_ERROR;
	
		if (sim.t == T_ERROR) {
			yyerror("No existe ninguna variable con ese identificador.");
		} else if ($3 != T_ENTERO) {
			yyerror("El indice para acceder a un vector debe ser un entero 0 o positivo.");
		} else { 
			DIM dim = obtTdA(sim.ref);
			$$ = dim.telem;
		}
	}
	 | ID_ OPAR_ paramAct {SIMB sim = obtTdS($1); if (!cmpDom(sim.ref, $3)){yyerror("Error en el dominio de los parámetros actuales");}} CPAR_
	 {
			
			SIMB sim = obtTdS($1);

			$$ = T_ERROR;
			
			if (sim.t == T_ERROR) { 
				yyerror("No existe ninguna variable con ese identificador."); 
			}
			INF inf = obtTdD(sim.ref);
			
			if (inf.tipo == T_ERROR) { 
				yyerror("No existe ninguna funcion con ese identificador."); 
			}
			else {$$ = inf.tipo;}
		}
	 ;

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

