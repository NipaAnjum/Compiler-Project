%{   
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
        #include <math.h>
	#include "try.tab.h"
        extern int yylval;
	extern FILE *yyin;
	extern FILE *yyout;
%}

Header	"include 'header_file'"
%%

"BEGIN"	{return MAIN;}
"END"	{return RETURN;}
"switch"	{return SWITCH;}
"case"	{return CASE;}
"break"	{return BREAK;}
"default"	{return DEFAULT;}
[0-9]+ {
 yylval=atoi(yytext);
     return NUMBER;}
[a-z]  {yylval=*yytext-'a';
   return VARIABLE;}
"="	{return ASSIGN;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"/"	{return DIV;}
"*"	{return MULT;}
">"	{return GREAT;}
"<"	{return LESS;}
"~"	{return END_LINE;}
":"	{return COLON;}
"("	{return LEFT_BRAC;}
")"	{return RIGHT_BRAC;}
"{"	{return LEFT_PAREN;}
"}"	{return RIGHT_PAREN;}
{Header}        {fprintf(yyout,"This is a Header file \n");}
[ \t\n]* ;
%%