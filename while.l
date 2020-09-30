%{   
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
        #include <math.h>
	#include "while.tab.h"
        extern int yylval;
	extern FILE *yyin;
	extern FILE *yyout;
%}

Header	"include 'header_file'"
%%

"BEGIN"	{return MAIN;}
"END"	{return RETURN;}
"while"	{return WHILE;}
"while_end"	{return WHILE_END;}
"integer"	{return INT;}
"float"	{return FLOAT;}
"double"	{return DOUBLE;}
"char"	{return CHAR;}
[0-9]+ {
 yylval=atoi(yytext);
     return NUMBER;}
[a-z]  {yylval=*yytext-'a';
   return VARIABLE;}
"if" {return IF;}
"else" {return ELSE;}
","	{return COMMA;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"/"	{return DIV;}
"*"	{return MULT;}
">"	{return GREAT;}
"<"	{return LESS;}
"~"	{return END_LINE;}
"="	{return ASSIGN;}
"("	{return LEFT_BRAC;}
")"	{return RIGHT_BRAC;}
{Header}        {fprintf(yyout,"This is a Header file \n");}
[ \t\n]* ;
%%