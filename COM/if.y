%{
	#include <malloc.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
        int arr[30];
	extern FILE *yyin;
	extern FILE *yyout;
	int sym[26],check[26];
%}

%token NUMBER VARIABLE COMMA INT FLOAT CHAR DOUBLE IF ELSE MAIN RETURN LEFT_BRAC RIGHT_BRAC ASSIGN PLUS MINUS DIV MULT END_LINE LESS GREAT
%nonassoc ELSE 
%left LESS GREAT
%left PLUS MINUS
%left MULT DIV
 
%%

start:
	|MAIN cstatement RETURN {$$=$1; fprintf(yyout,"\nMain function");}
	;
cstatement:
	|cstatement statement
	|cstatement declaration
	;

        
statement: END_LINE
	| expression END_LINE {fprintf(yyout,"value of exp:%d\n",$1);}
	| VARIABLE ASSIGN expression END_LINE { arr[$1]=$3;
                            fprintf(yyout,"Value of the variable: %d\t\n",$3); }
	|IF LEFT_BRAC expression RIGHT_BRAC expression END_LINE  {if($3)
{fprintf(yyout,"value of exp in if: %d\n",$5);}
else{
fprintf(yyout,"Value is zero");}
                                 }
	|IF LEFT_BRAC expression RIGHT_BRAC expression END_LINE ELSE expression END_LINE {if($3)
{fprintf(yyout,"Value in if:%d\n",$5);}
else
{fprintf(yyout,"value in else: %d\n",$8);}
}
	;

declaration: type var END_LINE
	;

type: INT
	|FLOAT
	|CHAR
	|DOUBLE
	;

var: var COMMA VARIABLE { $$=$3;
			if(check[$3]==1) {fprintf(yyout,"%c is already declared\n",$3+97);}
			else {fprintf(yyout,"multiple variable decared\n"); check[$3]=1;}
			}
	|VARIABLE { $$=$1;
		if(check[$1]==1)  {fprintf(yyout,"%c is already declared\n",$1+97);}
		else {fprintf(yyout,"single variable declared\n"); check[$1]=1;}
		}
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
	yyin = fopen("input.txt","r");
	yyout = fopen("out.txt","w");
	yyparse();
}

int yyerror(char *s) 
{
	fprintf(yyout,"%s\n",s);
	return(0);
}
