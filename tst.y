%{
	#include <malloc.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
    int arr[30];
	extern FILE *yyin;
	extern FILE *yyout;
	int far[30];
%}

%token NUMBER VARIABLE COMMA INT FLOAT CHAR DOUBLE IF ELSE MAIN RETURN LEFT_BRAC RIGHT_BRAC ASSIGN PLUS MINUS DIV MULT END_LINE LESS GREAT SEMI INCREMENT
%token GREAT_EQ DECREMENT LEFT_BK RIGHT_BK COLON LEFT_PAREN RIGHT_PAREN LESS_EQ FUNCTION
%nonassoc ELSE  
%left LESS GREAT
%left PLUS MINUS
%left MULT DIV

%%

start:
	|function MAIN cstatement RETURN function	{fprintf(yyout,"\nMain function");}
	;
funcall:	FUNCTION LEFT_BRAC fparameter RIGHT_BRAC END_LINE	{fprintf(yyout,"Returned value from function\n");}
function:
		|function funcs
		;
funcs:	type FUNCTION LEFT_BRAC fparameter RIGHT_BRAC LEFT_PAREN cstatement RIGHT_PAREN	{fprintf(yyout,"\nfunction declared\n");}
	;
fparameter:	/* empty */
	| type VARIABLE fsparameter
	;
fsparameter : /* empty */
	| fsparameter COMMA type VARIABLE 
	;
cstatement:
	|cstatement statement
	|cstatement funcall
	;		
type: INT
	|FLOAT
	|CHAR
	|DOUBLE
	;
statement: END_LINE
	| expression END_LINE {fprintf(yyout,"value of exp:%d\n",$1);}
	| VARIABLE ASSIGN expression END_LINE { arr[$1]=$3;
                            fprintf(yyout,"Value of the variable: %d\t\n",$3); }
	;
expression: NUMBER {$$=$1;}
	|VARIABLE    {$$=arr[$1];}
	|expression PLUS expression {$$=$1 +$3;}
	|expression MINUS expression {$$=$1-$3;}
	|expression MULT expression {$$=$1*$3;}
	|expression DIV expression {if($3)
					{$$=$1/$3;}
				else
					{$$=0;
					fprintf(yyout,"Not divided by zero\n");}
				}
	|expression LESS expression {$$=$1<$3;}
	|expression GREAT expression {$$=$1>$3;}
	|LEFT_BRAC expression RIGHT_BRAC   {$$=$2;}
	;
	
%%

int yywrap()
{
return 1;
}
int main(void)
{
	yyin = fopen("infor.txt","r");
	yyout = fopen("outfor.txt","w");
	yyparse();
}

int yyerror(char *s) 
{
	fprintf(yyout,"%s\n",s);
	return(0);
}