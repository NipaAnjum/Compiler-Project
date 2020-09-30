%{   
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
        #include <math.h>
	#include "tst.tab.h"
        extern YYSTYPE yylval;
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
[0-9]+ {
 yylval=atoi(yytext);
     return NUMBER;}
[a-z]  {yylval=*yytext-'a';
   return VARIABLE;}
[a-zA-z0-9]+	{return FUNCTION;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"/"	{return DIV;}
"*"	{return MULT;}
">"	{return GREAT;}
"<"	{return LESS;}
[<][=]	{return LESS_EQ;}
[>][=]	{return GREAT_EQ;}
[+][+]	{return INCREMENT;}
[-][-]	{return DECREMENT;}
"~"	{return END_LINE;}
";"	{return SEMI;}
":"	{return COLON;}
"("	{return LEFT_BRAC;}
")"	{return RIGHT_BRAC;}
"{"	{return LEFT_PAREN;}
"}"	{return RIGHT_PAREN;}
{Header}        {fprintf(yyout,"This is a Header file \n");}
[ \t\n]* ;
%%