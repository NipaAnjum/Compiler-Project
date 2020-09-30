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

%token NUMBER VARIABLE COMMA INT FLOAT CHAR DOUBLE IF ELSE MAIN RETURN LEFT_BRAC RIGHT_BRAC ASSIGN PLUS MINUS DIV MULT END_LINE LESS GREAT EQUAL IF_END ELSE_END ELSE_IF_END ELSE_IF
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
	| expression END_LINE {/*fprintf(yyout,"value of exp:%d\n",$1);*/}
	|IF LEFT_BRAC expression RIGHT_BRAC cstatement IF_END  {if($3)
{fprintf(yyout,"If statement executed\n");}
else{
fprintf(yyout,"Value is zero");}
                                 }
	|IF LEFT_BRAC expression RIGHT_BRAC cstatement IF_END ELSE cstatement ELSE_END {if($3)
{fprintf(yyout,"If(if-else) statement is true\n");}
else
{fprintf(yyout,"Else statement is true\n");}
}
	|IF LEFT_BRAC expression RIGHT_BRAC cstatement IF_END ELSE_IF LEFT_BRAC expression RIGHT_BRAC cstatement ELSE_IF_END	{if($3)
{fprintf(yyout,"If(if-elseif) statement is true\n");}
else if($9)
{fprintf(yyout,"Else-if statement is true\n");}
else
{fprintf(yyout,"None of the statement is true\n");}
}
	|IF LEFT_BRAC expression RIGHT_BRAC cstatement IF_END ELSE_IF LEFT_BRAC expression RIGHT_BRAC cstatement ELSE_IF_END ELSE cstatement ELSE_END	{if($3)
{fprintf(yyout,"If(if-elseif) statement is true\n");}
else if($9)
{fprintf(yyout,"Else-if statement is true\n");}
else
{fprintf(yyout,"Else(if-else-if) statement is true");}
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
			else {check[$3]=1;}
			}
	|VARIABLE { $$=$1;
		if(check[$1]==1)  {fprintf(yyout,"%c is already declared\n",$1+97);}
		else {check[$1]=1;}
		}
	;
expression: NUMBER {$$=$1;}
	|VARIABLE    {$$=arr[$1];}
	| VARIABLE ASSIGN expression { arr[$1]=$3; $$=$3;
                            fprintf(yyout,"Value of the variable: %d\t\n",$3); }
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
	|expression EQUAL expression {$$=$1==$3;}
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
