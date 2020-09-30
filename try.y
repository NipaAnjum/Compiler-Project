%{
	#include <malloc.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
        int arr[30];
	extern FILE *yyin;
	extern FILE *yyout;
	int sym[26],check[26];
	int c[30];
	int f,d[10];
%}

%token NUMBER VARIABLE BREAK COLON LEFT_PAREN RIGHT_PAREN ASSIGN SWITCH CASE DEFAULT MAIN RETURN LEFT_BRAC RIGHT_BRAC PLUS MINUS DIV MULT END_LINE LESS GREAT
%left LESS GREAT
%left PLUS MINUS
%left MULT DIV
 
%%

start:
	|MAIN cstatement RETURN {$$=$1; fprintf(yyout,"\nMain function");}
	;
cstatement:
	|cstatement statement
	|cstatement switch {fprintf(yyout,"correct switch case is :%d",$2);}
	;	
	
switch:
	|SWITCH LEFT_BRAC expression RIGHT_BRAC LEFT_PAREN switch DEFAULT COLON expression END_LINE BREAK END_LINE RIGHT_PAREN	{
																																int i;
																																f=0;
																																for(i=0;i<9;i++)
																																{
																																if($3==c[i])
																																{
																																$$=$6;
																																f=1;
																																fprintf(yyout,"value in case %d is %d\n",$3,$6);
																																}
																																}
																																if(f==0)
																																{
																																fprintf(yyout,"Default %d\n",$9);
																																//$$=$6;
																																}

																																}
	|CASE expression COLON expression END_LINE BREAK END_LINE switch	{c[$2]=$2;$$=$4; /*fprintf(yyout,"case %d\n",$2);*/}
		
	;
	

	
statement: END_LINE
	|expression END_LINE
	;

expression: NUMBER {$$=$1;}
	|VARIABLE    {$$=arr[$1];}
	|expression PLUS expression {$$=$1+$3;}
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
	f=0;
	yyin = fopen("incase.txt","r");
	yyout = fopen("outcase.txt","w");
	yyparse();
}

int yyerror(char *s) 
{
	fprintf(yyout,"%s\n",s);
	return(0);
}
