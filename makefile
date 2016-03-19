all:
	$(MAKE) flex
	$(MAKE) grammar
	gcc grammar.tab.c -o parser -lfl -DDEBUG
grammar:
	bison grammar.y
flex:
	flex lex.l
test:
	