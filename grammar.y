%{
#include <stdio.h>
#include <stdlib.h>
#define SYMBOLTABLESIZE	1000
#define IDLENGTH	200
#define EMPTY		-1
enum ParseTreeNodetype {PROGRAM, DECL, DECLB, VARDECL, VARDECLB, VARIABLEB,VARIABLE,TYPE, FORMALS, FORMALSB, STMTBLOCK,STMT, EXPR_STMT,IF_STMT,
	WHILE_STMT,FOR_STMT, RETURN_STMT, PRINT_STMT, PRINT_CSTMT, STMTB, INFOR_STMT,EXPR_LIST,EXPR_LISTB,
	ASSIGN,EXPR,EXPR_ADD,EXPR_SUB,EXPR_MUL,EXPR_DIV,EXPR_UMINUS, EXPR_LTHAN, EXPR_LETHAN,
	EXPR_GTHAN,EXPR_GETHAN, EXPR_EQ,EXPR_NQ, EXPR_MOD,EXPRB,INT_CONSTANT, STR_CONSTANT,ID_VALUE,
	BOOL_CONSTANT,CHAR_CONSTANT,FUNCDECL,VOIDFUNCDECL};

char *NodeName[] = {"PROGRAM"," DECL"," DECLB"," VARDECL"," VARDECLB"," VARIABLEB","VARIABLE","TYPE"," FORMALS"," FORMALSB",
	" STMTBLOCK","STMT"," EXPR_STMT","IF_STMT","WHILE_STMT","FOR_STMT"," RETURN_STMT"," PRINT_STMT"," PRINT_CSTMT"," STMTB"," INFOR_STMT","EXPR_LIST","EXPR_LISTB",
		"ASSIGN","EXPR","EXPR_ADD","EXPR_SUB","EXPR_MUL","EXPR_DIV","EXPR_UMINUS"," EXPR_LTHAN"," EXPR_LETHAN",
		"EXPR_GTHAN","EXPR_GETHAN"," EXPR_EQ","EXPR_NQ"," EXPR_MOD","EXPRB","INT_CONSTANT"," STR_CONSTANT","ID_VALUE",
	"BOOL_CONSTANT","CHAR_CONSTANT","FUNCDECL","VOIDFUNCDECL"};	

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL 0
#endif

struct astNode { 
	int item;
	int nodeID;
	struct astNode *first;
	struct astNode *second;
	struct astNode *third;	
};
typedef struct astNode AST_NODE;
typedef AST_NODE *TER_TREE;
TER_TREE newNode(int,int,TER_TREE,TER_TREE,TER_TREE);
#ifdef DEBUG
void printTree(TER_TREE,int);
#endif
void genCode(TER_TREE);
//initialize symbol table
struct symbolTableNode{
	char id[IDLENGTH];
};
typedef struct symbolTableNode SYMTABNODE;
typedef SYMTABNODE	*SYMTABNODEPTR;
SYMTABNODEPTR symtable[SYMBOLTABLESIZE];
int curSymSize = 0;








%}
%start Program

%union {
    //int i;
	char *s;
	int intVal;
	TER_TREE treeVal;
};
%token STRING
%token INT 
%token BOOL CHAR
%token ELSE FOR IF WHILE 
%token RETURN  VOID PRINTF
%token <intVal> INTCONSTANT ID STRINGCONSTANT BOOLCONSTANT CHARCONSTANT
%token ADD SUB MUL DIV MOD LTHAN LETHAN GTHAN GETHAN EQUALEQUAL NOTEQUAL EQUAL 
%token SEMICOLON COMMA LPAREN RPAREN LBRACE RBRACE

%nonassoc "then"
%nonassoc "else"
%right EQUAL ELSE
%right UMINUS
%left ADD SUB
%left MUL DIV MOD
%left LTHAN LETHAN GTHAN GETHAN EQUALEQUAL NOTEQUAL

%type <treeVal> Program Decl DeclB VariableDecl VariableDeclB Variable VariableB Type FunctionDecl Formals
%type <treeVal> FormalsB StmtBlock Stmt StmtB IfStmt WhileStmt ForStmt ReturnStmt PrintStmt ExprList
%type <treeVal> ExprListB Expr ExprB Call Constant
 

%%
 
Program:		
	DeclB {TER_TREE ast;
			ast = newNode(EMPTY,PROGRAM,$1,NULL,NULL);
#ifdef DEBUG
			printTree(ast,0);
#endif
			genCode(ast);
			};
 
Decl:		
	VariableDecl{$$ = newNode(EMPTY,DECL,$1,NULL,NULL);}
	| FunctionDecl{$$ = newNode(EMPTY,DECL,$1,NULL,NULL);};

DeclB:
	Decl {$$ = newNode(EMPTY,DECLB,$1,NULL,NULL);}
	| DeclB Decl{$$ = newNode(EMPTY,DECLB,$1,$2,NULL);};
 
VariableDecl:	
	Variable SEMICOLON{$$ = newNode(EMPTY,VARDECL,$1,NULL,NULL);};
 
VariableDeclB:	
	/* Empty */ 	{$$ = newNode(EMPTY,VARDECLB,NULL,NULL,NULL);}
	| VariableDeclB VariableDecl{$$ = newNode(EMPTY,VARDECLB,$1,$2,NULL);};  
 
Variable:		
	Type ID{$$ = newNode($2,VARIABLE,$1,NULL,NULL);};

VariableB:		
	Variable{$$ = newNode(EMPTY,VARIABLEB,$1,NULL,NULL);}
	| VariableB Variable{$$ = newNode(EMPTY,VARIABLEB,$1,$2,NULL);};
 
Type:			
	INT {$$ = newNode(INT,TYPE,NULL,NULL,NULL);}
	| BOOL {$$ = newNode(BOOL,TYPE,NULL,NULL,NULL);}
	| CHAR {$$ = newNode(CHAR,TYPE,NULL,NULL,NULL);}
	| STRING{$$ = newNode(STRING,TYPE,NULL,NULL,NULL);};
 
FunctionDecl:	
	Type ID LPAREN FormalsB RPAREN StmtBlock
	{$$ = newNode(ID,FUNCDECL,$4,$6,NULL);}
	| VOID ID LPAREN FormalsB RPAREN StmtBlock
	{$$ = newNode(ID,VOIDFUNCDECL,$4,$6,NULL);};
 
Formals:
	Variable {$$ = newNode(EMPTY,FORMALS,$1,NULL,NULL);}
	| VariableB COMMA Formals{$$ = newNode(EMPTY,FORMALS,$1,$3,NULL);};
 
FormalsB:	  
	/* Empty */{$$ = newNode(EMPTY,FORMALSB,NULL,NULL,NULL);}
	| Formals{$$ = newNode(EMPTY,FORMALSB,$1,NULL,NULL);};
 
StmtBlock:	
	LBRACE VariableDeclB StmtB RBRACE{$$ = newNode(EMPTY,STMTBLOCK,$2,$3,NULL);};
 
Stmt:			
	ExprB SEMICOLON{$$ = newNode(EMPTY,STMT,$1,NULL,NULL);}
	| IfStmt {$$ = newNode(EMPTY,STMT,$1,NULL,NULL);}
	| WhileStmt {$$ = newNode(EMPTY,STMT,$1,NULL,NULL);}
	| ForStmt {$$ = newNode(EMPTY,STMT,$1,NULL,NULL);}
	| ReturnStmt {$$ = newNode(EMPTY,STMT,$1,NULL,NULL);}
	| PrintStmt {$$ = newNode(EMPTY,STMT,$1,NULL,NULL);}
	| StmtBlock {$$ = newNode(EMPTY,STMT,$1,NULL,NULL);};
 
StmtB:			
	/* Empty */ {$$ = newNode(EMPTY,STMTB,NULL,NULL,NULL);}
	| StmtB Stmt {$$ = newNode(EMPTY,STMTB,$1,$2,NULL);} ;
 
IfStmt:		
	IF LPAREN Expr RPAREN Stmt %prec "then" 
	{$$ = newNode(EMPTY,IF_STMT,$3,$5,NULL);}
	| IF LPAREN Expr RPAREN Stmt ELSE Stmt
	{$$ = newNode(EMPTY,IF_STMT,$3,$5,$7);};
 
WhileStmt:
	WHILE LPAREN Expr RPAREN Stmt{$$ = newNode(EMPTY,WHILE_STMT,$3,$5,NULL);};
 
ForStmt:
	FOR LPAREN ExprB SEMICOLON ExprB SEMICOLON ExprB RPAREN Stmt
	{$$ = newNode(EMPTY,FOR_STMT,newNode(EMPTY,INFOR_STMT,$3,$5,$7),$9,NULL);};
ReturnStmt:		
	RETURN ExprB SEMICOLON
	 {$$ = newNode(EMPTY,RETURN_STMT,$2,NULL,NULL);};
 
PrintStmt:		
	PRINTF LPAREN STRINGCONSTANT COMMA ExprList RPAREN SEMICOLON
	{$$ = newNode(STRINGCONSTANT,PRINT_STMT,$5,NULL,NULL);}
	| PRINTF LPAREN Constant RPAREN SEMICOLON
	{$$ = newNode(EMPTY,PRINT_CSTMT,$3,NULL,NULL);}
	| PRINTF LPAREN ID RPAREN SEMICOLON
	{$$ = newNode($3,PRINT_STMT,NULL,NULL,NULL);};
 
ExprList:
	Expr COMMA ExprList
	{$$ = newNode(EMPTY,EXPR_LIST,$1,$3,NULL);}
	| Expr
	{$$ = newNode(EMPTY,EXPR_LIST,$1,NULL,NULL);};
 
ExprListB:	  
	/* Empty */ {$$ = newNode(EMPTY,EXPR_LISTB,NULL,NULL,NULL);}
	| ExprList
	{$$ = newNode(EMPTY,EXPR_LISTB,$1,NULL,NULL);};

Expr:
	ID EQUAL Expr
	{$$ = newNode($1,ASSIGN,$3,NULL,NULL);}
	| Constant
	{$$ = newNode(EMPTY,EXPR,$1,NULL,NULL);}
	| ID
	{$$ = newNode($1,ID_VALUE,NULL,NULL,NULL);}
	| Call
	{$$ = newNode(EMPTY,EXPR,$1,NULL,NULL);}
	| LPAREN Expr RPAREN
	{$$ = newNode(EMPTY,EXPR,$2,NULL,NULL);}
	| Expr ADD Expr
	{$$ = newNode(EMPTY,EXPR_ADD,$1,$3,NULL);}
	| Expr SUB Expr
	{$$ = newNode(EMPTY,EXPR_SUB,$1,$3,NULL);}
	| Expr MUL Expr 
	{$$ = newNode(EMPTY,EXPR_MUL,$1,$3,NULL);}
	| Expr DIV Expr
	{$$ = newNode(EMPTY,EXPR_DIV,$1,$3,NULL);}
	| SUB Expr %prec UMINUS
	{$$ = newNode(EMPTY,EXPR_UMINUS,$2,NULL,NULL);}
	| Expr LTHAN Expr
	{$$ = newNode(EMPTY,EXPR_LTHAN,$1,$3,NULL);}
	| Expr LETHAN Expr
	{$$ = newNode(EMPTY,EXPR_LETHAN,$1,$3,NULL);}
	| Expr GTHAN Expr
	{$$ = newNode(EMPTY,EXPR_GTHAN,$1,$3,NULL);}
	| Expr GETHAN Expr
	{$$ = newNode(EMPTY,EXPR_GETHAN,$1,$3,NULL);}
	| Expr EQUALEQUAL Expr
	{$$ = newNode(EMPTY,EXPR_EQ,$1,$3,NULL);}
	| Expr NOTEQUAL Expr
	{$$ = newNode(EMPTY,EXPR_NQ,$1,$3,NULL);}
	| Expr MOD Expr
	{$$ = newNode(EMPTY,EXPR_MOD,$1,$3,NULL);};

ExprB:
	/* Empty */ {$$ = newNode(EMPTY,EXPRB,NULL,NULL,NULL);}
	| Expr {$$ = newNode(EMPTY,EXPRB,$1,NULL,NULL);}
	; 
	
	
Call:
	ID LPAREN ExprListB RPAREN
	{$$ = newNode($1,EXPRB,$3,NULL,NULL);};
 
Constant:		
	INTCONSTANT{$$ = newNode($1,INT_CONSTANT,NULL,NULL,NULL);}
	| STRINGCONSTANT{$$ = newNode($1,STR_CONSTANT,NULL,NULL,NULL);}
	| BOOLCONSTANT{$$ = newNode($1,BOOL_CONSTANT,NULL,NULL,NULL);}
	| CHARCONSTANT{$$ = newNode($1,CHAR_CONSTANT,NULL,NULL,NULL);};
%%



TER_TREE newNode(int ival,int node_ID, TER_TREE t1,TER_TREE t2,TER_TREE t3)
{
	TER_TREE tree;
	tree = (TER_TREE)malloc(sizeof(AST_NODE));
	tree->item = ival;
	tree->nodeID = node_ID;
	tree->first = t1;
	tree->second = t2;
	tree->third = t3;
	return tree;
}
void printTree(TER_TREE tree,int indent)
{
	int i;
	if(tree ==NULL) return;
	for(i=indent;i;i--)
		printf(" ");
	if(tree->nodeID == INT_CONSTANT)
		printf("INT: %d ",tree->item);
	else if(tree->nodeID == ID_VALUE){
		if(tree->item > 0 && tree->item < SYMBOLTABLESIZE )
			printf("id: %s ",symtable[tree->item]->id);
		else
			printf("unknown id: %d ", tree->item);
	}
	if(tree->item != EMPTY){
		printf("item: %d ",tree->item);
	}		
	if (tree->nodeID < 0 || tree->nodeID > sizeof(NodeName))
		printf("UNKNOWNnodeID: %d\n",tree->nodeID);
	else
		printf("%s\n",NodeName[tree->nodeID]);//remeber to change back to %d and the id
	printTree(tree->first,indent+3);
	printTree(tree->second,indent+3);
	printTree(tree->third,indent+3);
}
void genCode(TER_TREE tree)
{
	
	if(tree == NULL)return;
	
	
	switch(tree->nodeID)
	{
	
		case (PROGRAM):
			printf("int main() {\n");
			genCode(tree->first);
			printf("}\n");
			return;
		case(VARIABLE):
			printf("int ");
			if(tree->item > 0 && tree->item < SYMBOLTABLESIZE )
				printf("%s",symtable[tree->item]->id);
			else
				printf("unknownID:%d ", tree->item);
			genCode(tree->first);
			printf(";\n");
			return;
		case (IF_STMT):
			printf("if (");
			genCode(tree->first);
			printf(") {\n");
			genCode(tree->second);
			printf("}\n");
			return;
		case (WHILE_STMT):
			printf("while (");
			genCode(tree->first);
			printf(") {\n");
			genCode(tree->second);
			printf("}\n");
			return;
		case (ASSIGN):
			if(tree->item > 0 && tree->item < SYMBOLTABLESIZE )
				printf("%s",symtable[tree->item]->id);
			else
				printf("unknownID:%d ", tree->item);
			printf(" = ");
			genCode(tree->first);
			printf(";\n");
			return;
		case (INT_CONSTANT):
			printf("%d",tree->item);
			return;
		case (EXPR_ADD):
			genCode(tree->first);
			printf(" + ");
			genCode(tree->second);
			return;
		case (EXPR_SUB):
			genCode(tree->first);
			printf(" - ");
			genCode(tree->second);
			return;
		case (EXPR_MUL):
			genCode(tree->first);
			printf(" * ");
			genCode(tree->second);
			return;
		case (EXPR_DIV):
			genCode(tree->first);
			printf(" / ");
			genCode(tree->second);
			return;
		case (EXPR_UMINUS):
			printf("-");
			genCode(tree->first);
			return;
		case (EXPR_LTHAN):
			genCode(tree->first);
			printf(" < ");
			genCode(tree->second);
			return;
		case (EXPR_LETHAN):
			genCode(tree->first);
			printf(" <= ");
			genCode(tree->second);
			return;
		case (EXPR_GTHAN):
			genCode(tree->first);
			printf(" > ");
			genCode(tree->second);
			return;
		case (EXPR_GETHAN):
			genCode(tree->first);
			printf(" >= ");
			genCode(tree->second);
			return;
		case (EXPR_EQ):
			genCode(tree->first);
			printf(" == ");
			genCode(tree->second);
			return;
		case (EXPR_NQ):
			genCode(tree->first);
			printf(" != ");
			genCode(tree->second);
			return;
		/*case (EXPR_MOD):
			genCode(tree->first);
			printf(" % ");
			genCode(tree->second);
			printf(";\n");
			return;*/
		case (ID_VALUE):
			if(tree->item > 0 && tree->item < SYMBOLTABLESIZE )
				printf("%s",symtable[tree->item]->id);
			else
				printf("unknownID:%d ", tree->item);
			return;
		case (PRINT_STMT):
			printf("printf(");
			if(tree->item > 0 && tree->item < SYMBOLTABLESIZE )
				printf("%s",symtable[tree->item]->id);
			else
				printf("unknownID:%d ", tree->item);
			printf(");\n");
		
	}	
	
	genCode(tree->first);
	genCode(tree->second);
	genCode(tree->third);
}
#include "lex.yy.c"
yyerror(char *s)
{
	exit(-1);
}

int main(int argc, char **argv)	{ 
	yyparse();
}


