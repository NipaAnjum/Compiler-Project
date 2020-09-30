%{
	#include <malloc.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
	#define pi 3.1416
	#define deg 180
	extern FILE *yyin;
	extern FILE *yyout;
	int sym[26],check[26];
	int c[30]={0};
	int casea[30]={0};
	int x=0;
	int arr[30];
	int far[30];
	int wh,wf=0,f,sw[30];
%} 


%expect 304

%token NUMBER VARIABLE COMMA INT FLOAT CHAR DOUBLE IF ELSE MAIN RETURN LEFT_BRAC RIGHT_BRAC ASSIGN PLUS MINUS DIV MULT END_LINE LESS GREAT FOR FOR_END SEMI INCREMENT
%token GREAT_EQ DECREMENT LEFT_BK RIGHT_BK COLON LEFT_PAREN RIGHT_PAREN LESS_EQ IN RANGE TO SWITCH DEFAULT CASE BREAK WHILE WHILE_END IF_END ELSE_END ELSE_IF_END ELSE_IF
%token EQUAL SIN COS TAN LOG SQRT SQR CUBE FACTORIAL POW PRINT PRINTLN MINIMUM MAXIMUM SWAP FUNCTION

%nonassoc IFX
%nonassoc ELSE 
%nonassoc FOR
%left LESS GREAT
%left PLUS MINUS
%left MULT DIV
%left SQRT SQR CUBE POW
%left SIN COS TAN LOG
%left FACTORIAL
 
%%

start:/*empty*/
	|function MAIN cstatement RETURN function	{fprintf(yyout,"\nSuccessfully compiled");}
	;
funcall:	FUNCTION LEFT_BRAC fparameter RIGHT_BRAC END_LINE	{fprintf(yyout,"Function is called\n");}
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
	
cstatement: /* empty */	
	|cstatement statement
	|cstatement declaration
	|cstatement switch
	|cstatement print
	|cstatement funcall
	;
	
switch: /* empty */	
	|SWITCH LEFT_BRAC expression RIGHT_BRAC LEFT_PAREN switch DEFAULT COLON cstatement BREAK END_LINE RIGHT_PAREN	{
																																fprintf(yyout,"In switch statement\n");
																																int i;
																																f=0;
																																for(i=0;i<9;i++)
																																{
																																printf("%d %d\n",c[i],casea[i]);
																																if($3==c[i])
																																{
																																//$$=$6;
																																f=1;
																																fprintf(yyout,"value in case %d is %d\n",c[i],casea[i]);
																																break;
																																}
																																}
																																if(f==0)
																																{
																																//$$=$9;
																																fprintf(yyout,"Default value in switch statement is %d\n",$9);
																																//$$=$6;
																																}

																																}
	|CASE expression COLON cstatement BREAK END_LINE switch	{c[$2]=$2;casea[$2]=$4; /*fprintf(yyout,"case %d\n",$2);*/}
		
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
	|NUMBER GREAT_EQ NUMBER	{ fprintf(yyout,"WHILE LOOP IS EXECUTED\n");
										int i;
										for(i=$3;i<=$1;i++)
										{
											fprintf(yyout,"%d ",i);
										}
										fprintf(yyout,"\n");
										wf=1;
							}
	|NUMBER LESS_EQ NUMBER	{ fprintf(yyout,"WHILE LOOP IS EXECUTED\n");
										int i;
										for(i=$1;i<=$3;i++)
										{
											fprintf(yyout,"%d ",i);
										}
										fprintf(yyout,"\n");
										wf=1;
							}
	;	
	
print:	PRINT LEFT_BK expression RIGHT_BK END_LINE	{$$=$3;/*fprintf(yyout,"Value of the expression: %d",$3);*/}
	| PRINTLN LEFT_BK expression RIGHT_BK END_LINE	{fprintf(yyout,"\n");}
	;
declaration: type var END_LINE
	| type VARIABLE ASSIGN expression END_LINE	{$$=$2;
												if(check[$2]==1) {fprintf(yyout,"%c is already declared\n",$2+97);}
												else { arr[$1]=$4; $$=$4;
													fprintf(yyout,"Value of the variable: %d\t\n",$4);}
												}
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
	|POW LEFT_BRAC expression COMMA expression RIGHT_BRAC	{int base, exp;
															base=$3;
															exp=$5;
															int result = 1;
															while (exp != 0) {
																result *= base;
																--exp;
															}
															$$=result;
															fprintf(yyout,"Power of %d = %d\n",$3,$$);}
	|SIN LEFT_BRAC expression RIGHT_BRAC { $$ = sin(($3*pi)/deg); fprintf(yyout,"Sine of %d = %d\n",$3,$$);	}
	|COS LEFT_BRAC expression RIGHT_BRAC { $$ = cos(($3*pi)/deg); fprintf(yyout,"Cosine of %d = %d\n",$3,$$);	}
	|TAN LEFT_BRAC expression RIGHT_BRAC { $$ = tan(($3*pi)/deg); fprintf(yyout,"Tangent of %d = %d\n",$3,$$);	}
	|LOG LEFT_BRAC expression RIGHT_BRAC { $$ = log($3); fprintf(yyout," log of %d = %d\n",$3,$$);	}
	|SQRT LEFT_BRAC expression RIGHT_BRAC { $$ = sqrt($3); fprintf(yyout,"Square root of %d = %d\n",$3,$$);}
	|SQR LEFT_BRAC expression RIGHT_BRAC { $$ = $3 * $3; fprintf(yyout,"Square of %d = %d\n",$3,$$);}
	|CUBE LEFT_BRAC expression RIGHT_BRAC { $$ = $3 * $3 * $3; fprintf(yyout,"Cube of %d = %d\n",$3,$$);}
	|expression FACTORIAL {
						int mult=1 ,i;
						for(i=$1;i>0;i--)
						{
							mult=mult*i;
						}
						$$=mult;
						fprintf(yyout,"Factorial of %d = %d\n",$1,$$); 
					 }
	|MINIMUM LEFT_BRAC expression COMMA expression RIGHT_BRAC	{ int p,q,r;
																p=$3;
																q=$5;
																if(p<q) $$=p;
																else $$=q;
															fprintf(yyout,"Minimum value between %d and %d is: %d\n",$3,$5,$$);
															}
	|MAXIMUM LEFT_BRAC expression COMMA expression RIGHT_BRAC	{ int p,q,r;
																p=$3;
																q=$5;
																if(p>q) $$=p;
																else $$=q;
															fprintf(yyout,"Maximum value between %d and %d is: %d\n",$3,$5,$$);
															}
	|SWAP LEFT_BRAC expression COMMA expression RIGHT_BRAC	{ int s1,s2,tmp;
															s1=$3;
															s2=$5;
															tmp=s1;
															s1=s2;
															s2=tmp;
															fprintf(yyout,"After swapping: %d %d\n",s1,s2);
															}
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
