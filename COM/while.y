%{
	#include <malloc.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
        int arr[30];
	extern FILE *yyin;
	extern FILE *yyout;
	int wh,wf=0;
%}

%token NUMBER VARIABLE COMMA INT FLOAT CHAR DOUBLE IF ELSE MAIN RETURN LEFT_BRAC RIGHT_BRAC ASSIGN PLUS MINUS DIV MULT END_LINE LESS GREAT WHILE WHILE_END
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
	;
	
statement: END_LINE
	| expression END_LINE {fprintf(yyout,"value of exp:%d\n",$1);}
	| VARIABLE ASSIGN expression END_LINE { arr[$1]=$3;
                            fprintf(yyout,"Value of the variable: %d\t\n",$3); }
	|WHILE compare statement WHILE_END { if(wf==1){
											fprintf(yyout,"\nWhile execution is true\n");
											fprintf(yyout,"value of the expression in while loop: %d\n",$3);}
										}
	;

compare: NUMBER LESS NUMBER	{ fprintf(yyout,"WHILE LOOP IS EXECUTED\n");
										int i;
										for(i=$1;i<$3;i++)
										{
											fprintf(yyout,"%d ",i);
										}
										fprintf(yyout,"\n");
										wf=1;
							}
	|NUMBER GREAT NUMBER	{ fprintf(yyout,"WHILE LOOP IS EXECUTED\n");
										int i;
										for(i=$3;i<$1;i++)
										{
											fprintf(yyout,"%d ",i);
										}
										fprintf(yyout,"\n");
										wf=1;
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
	yyin = fopen("inwhile.txt","r");
	yyout = fopen("outwhile.txt","w");
	yyparse();
}

int yyerror(char *s) 
{
	fprintf(yyout,"%s\n",s);
	return(0);
}