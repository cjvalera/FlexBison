%{
#include <stdlib.h>
#include <string.h>
#include "grammar.tab.h"
extern SYMTABNODEPTR symtable[SYMBOLTABLESIZE];
extern int curSymSize;
%}

%x comment

%%
"bool"				{return BOOL;}
"char"				{return CHAR;}
"else"				{return ELSE;}
"for"				{return FOR;}
"if"				{return IF;}
"int"				{return INT;}
"printf"			{return PRINTF;}
"return"			{return RETURN;}
"string"			{return STRING;}
"void"				{return VOID;}
"while"				{return WHILE;}
[\n]				{}
[\t]				{}			
" "					{}
"0x"{1}[A-F0-9]+	{return INTCONSTANT;}
"0X"{1}[A-F0-9]+	{return INTCONSTANT;}
[0-9]+				{yylval.intVal = atoi(yytext);return INTCONSTANT;}
"\""[^\n"\""]*"\""	{return STRINGCONSTANT;}
"true"				{return BOOLCONSTANT;}
"false"				{return BOOLCONSTANT;}
"+"					{return ADD;}
"-"					{return SUB;}
"*"					{return MUL;}
"/"					{return DIV;}
"%"					{return MOD;}
"<"					{return LTHAN;}
"<="				{return LETHAN;}
">"					{return GTHAN;}
">="				{return GETHAN;}
"=="				{return EQUALEQUAL;}
"!="				{return NOTEQUAL;}
"="					{return EQUAL;}
";"					{return SEMICOLON;}
","					{return COMMA;}
"("					{return LPAREN;}
")"					{return RPAREN;}
"{"					{return LBRACE;}
"}"					{return RBRACE;}
[a-zA-Z][a-zA-Z0-9_]*		{yylval.intVal = installId(yytext);return ID;}
'([^'\\\n]|\\.)'	{return CHARCONSTANT;}
"//"[^\r\n]*		{}
"/*"				{BEGIN(comment);}
<comment>(?s:.)		{}
<comment>"*/"		{BEGIN(INITIAL);}

%%
SYMTABNODEPTR newSymTabNode()
{
	return ((SYMTABNODEPTR)malloc(sizeof(SYMTABNODE)));
}
int installId(char *s)
{
	extern SYMTABNODEPTR symtable[SYMBOLTABLESIZE];
	extern int curSymSize;
	int i;
	i = lookup(s);
	if(i >= 0){
		return(i);
	}
	else if(curSymSize >= SYMBOLTABLESIZE)
	{
		return (EMPTY);
	}
	else{
		symtable[curSymSize] = newSymTabNode();
		strncpy(symtable[curSymSize]->id,s,IDLENGTH);
		symtable[curSymSize]->id[IDLENGTH-1] = '\0';
		return(curSymSize++);
	}
}
int lookup(char *s)
{
	extern SYMTABNODEPTR symtable[SYMBOLTABLESIZE];
	extern int curSymSize;
	int i;
	for(i=0;i<curSymSize;i++)
	{
		if(strncmp(s,symtable[i]->id,IDLENGTH) == 0){
			return (i);
		}
	}
	return(-1);
}
