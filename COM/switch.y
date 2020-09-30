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
	int x=0;
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
	;
	
statement: END_LINE
	|expression END_LINE
	| SWITCH LEFT_BRAC NUMBER RIGHT_BRAC LEFT_PAREN casestart RIGHT_PAREN	{/*c[$3]=$3; fprintf(yyout,"switch case\n cs value %d\n",c[$3]);*/}
	;
casestart:	cases	{/*fprintf(yyout,"only case\n");*/}
	|cases def	{/*fprintf(yyout,"default case\n");*/}
	;
cases:
	|cases case_stmt
	;
case_stmt:	BREAK END_LINE
	|CASE NUMBER COLON expression END_LINE	{
												if($2==2){x=1; fprintf(yyout,"case %d value %d\n",$2,$4);}
	/*c[$2]=$2; fprintf(yyout,"case no %d expression %d cs %d\n",$2,$4,c[$3]); if($2 == c[$3]) {f=1;fprintf(yyout,"value of case: %d\n",$4);}*/}
	;
def:	DEFAULT COLON expression END_LINE BREAK END_LINE	{ if(x==0)fprintf(yyout,"in default expression %d\n",$3); /*if(f==0) fprintf(yyout,"value of default: %d\n",$3);*/}
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
	yyin = fopen("inswitch.txt","r");
	yyout = fopen("outswitch.txt","w");
	yyparse();
}

int yyerror(char *s) 
{
	fprintf(yyout,"%s\n",s);
	return(0);
}