%{   
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
        #include <math.h>
	#include "mix.tab.h"
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
"for"	{return FOR;}
"for_end"	{return FOR_END;}
"in"	{return IN;}
"range"	{return RANGE;}
"to"	{return TO;}
"while"	{return WHILE;}
"while_end"	{return WHILE_END;}
[0-9]+ {
 yylval=atoi(yytext);
     return NUMBER;}
[a-z]  {yylval=*yytext-'a';
   return VARIABLE;}
"if" {return IF;}
"else" {return ELSE;}
"if_end"	{return IF_END;}
"else_end"	{return ELSE_END;}
"elif"	{return ELSE_IF;}
"elif_end"	{return ELSE_IF_END;}
"switch"	{return SWITCH;}
"case"	{return CASE;}
"break"	{return BREAK;}
"default"	{return DEFAULT;}
","	{return COMMA;}
"="	{return ASSIGN;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"/"	{return DIV;}
"*"	{return MULT;}
">"	{return GREAT;}
"<"	{return LESS;}
[=][=]	{return EQUAL;}
[<][=]	{return LESS_EQ;}
[>][=]	{return GREAT_EQ;}
[+][+]	{return INCREMENT;}
[-][-]	{return DECREMENT;}
"["	{return LEFT_BK;}
"]"	{return RIGHT_BK;}
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