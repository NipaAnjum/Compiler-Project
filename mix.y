%{
	#include <malloc.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
	extern FILE *yyin;
	extern FILE *yyout;
	int sym[26],check[26];
	int c[30];
	int x=0;
	int arr[30];
	int far[30];
	int wh,wf=0,f,sw[30];
%}

%token NUMBER VARIABLE COMMA INT FLOAT CHAR DOUBLE IF ELSE MAIN RETURN LEFT_BRAC RIGHT_BRAC ASSIGN PLUS MINUS DIV MULT END_LINE LESS GREAT FOR FOR_END SEMI INCREMENT
%token GREAT_EQ DECREMENT LEFT_BK RIGHT_BK COLON LEFT_PAREN RIGHT_PAREN LESS_EQ IN RANGE TO SWITCH DEFAULT CASE BREAK WHILE WHILE_END IF_END ELSE_END ELSE_IF_END ELSE_IF
%token EQUAL
%nonassoc IFX
%nonassoc ELSE 
%nonassoc FOR
%left LESS GREAT
%left PLUS MINUS
%left MULT DIV
 
%%

start:
	|MAIN cstatement RETURN {$$=$1; fprintf(yyout,"\nMain function executed\n");}
	;

switch:
	|SWITCH LEFT_BRAC expression RIGHT_BRAC LEFT_PAREN switch DEFAULT COLON cstatement BREAK END_LINE RIGHT_PAREN	{
																																fprintf(yyout,"In switch statement\n");
																																int i;
																																f=0;
																																for(i=0;i<9;i++)
																																{
																																if($3==c[i])
																																{
																																$$=$6;
																																f=1;
																																fprintf(yyout,"value in case %d is %d\n",c[i],$6);
																																}
																																}
																																if(f==0)
																																{
																																fprintf(yyout,"Default value in switch statement is %d\n",$9);
																																//$$=$6;
																																}

																																}
	|CASE expression COLON cstatement BREAK END_LINE switch	{c[$2]=$2;$$=$4; /*fprintf(yyout,"case %d\n",$2);*/}
		
	;

cstatement:
	|cstatement statement
	|cstatement declaration
	|cstatement switch
	;
	
statement: END_LINE
	| expression END_LINE {/*fprintf(yyout,"value of exp:%d\n",$1);*/}
	|IF LEFT_BRAC expression RIGHT_BRAC cstatement IF_END  {if($3)
																{fprintf(yyout,"If statement executed\n");}
															else
																{fprintf(yyout,"Value is zero");}
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
	|FOR VARIABLE IN RANGE NUMBER COLON cstatement FOR_END	{ for(far[$2]=1;far[$2]<=$5;far[$2]+=1) {fprintf(yyout,"expression in for loop : %d\n",$7);}	}															
	|FOR VARIABLE IN RANGE NUMBER TO NUMBER COLON statement FOR_END	{ for(far[$2]=$5;far[$2]<$7;far[$2]+=1) {fprintf(yyout,"expression in for loop : %d\n",$9);}	}
	|WHILE compare cstatement WHILE_END { if(wf==1){
											fprintf(yyout,"\nWhile execution is true\n");
											/*fprintf(yyout,"value of the expression in while loop: %d\n",$3);*/}
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
	yyin = fopen("inmix.txt","r");
	yyout = fopen("outmix.txt","w");
	yyparse();
}

int yyerror(char *s) 
{
	fprintf(yyout,"%s\n",s);
	return(0);
}
