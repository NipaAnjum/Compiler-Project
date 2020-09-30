%{   
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
        #include <math.h>
	#include "if.tab.h"
        extern int yylval;
	extern FILE *yyin;
	extern FILE *yyout;
%}

Header	"include 'header_file'"
%%

"BEGIN"	{return MAIN;}
"END"	{return RETURN;}
"integer"	{return INT;}
"float"	{return FLOAT;}
"double"	{return DOUBLE;}
"char"	{return CHAR;}
"if_end"	{return IF_END;}
"else_end"	{return ELSE_END;}
"elif"	{return ELSE_IF;}
"elif_end"	{return ELSE_IF_END;}
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
[=][=]	{ return EQUAL;}
"("	{return LEFT_BRAC;}
")"	{return RIGHT_BRAC;}
{Header}        {fprintf(yyout,"This is a Header file \n");}
[ \t\n]* ;
%%