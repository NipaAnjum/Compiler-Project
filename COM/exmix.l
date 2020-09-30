%{   
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
    #include <math.h>
	#include "exmix.tab.h"
    extern YYSTYPE yylval;
	extern FILE *yyin;
	extern FILE *yyout;
%}

Header	"include 'header_file'"
Comment	"/*"[^*/]+"*/"
Single_comment	"#".*"\n"

%%

"BEGIN"	{return MAIN;}
"END"	{return RETURN;}
"write"	{return PRINT;}
"writeln"	{return PRINTLN;}
"swap"	{return SWAP;}
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
"-"?[0-9]+	{
 yylval=atoi(yytext);
     return NUMBER;}
"-"?[0-9]+?"."[0-9]+	{
	yylval=atof(yytext);
	return NUMBER;
}
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
"pow"	{return POW;}
"sin"	{return SIN;}
"cos"	{return COS;}
"tan"	{return TAN;}
"log"	{return LOG;}
"sqrt"	{return SQRT;}
"sqr"	{return SQR;}
"cube"	{return CUBE;}
"!"	{return FACTORIAL;}
"minimum"	{return MINIMUM;}
"maximum"	{return MAXIMUM;}
{Header}        {fprintf(yyout,"This is a Header file \n");}
{Comment}	{fprintf(yyout,"Multiple line comment\n");}
{Single_comment}	{fprintf(yyout,"Single line comment\n");}
"func "[A-Z0-9]+	{return FUNCTION;}
[ \t\n]* ;
%%