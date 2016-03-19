To draw the Parse Tree this can be done by  putting a -DDEBUG on the makefile i.e gcc grammar.tab.c -o parser -lfl -DDEBUG.
This will print out the Tree of the passed program. 
First i want to create an interpreter but decided to focus on making a compiler instead.

In doing so, i tried to generate a code using the Oolong for JVM but could not get it to work
without getting compiler error. As an alternative i have a function called 'genCode' which output a 
c equivalent of the b file(you can then do ./parser < [file.b] > [file.c]). This is just to show what the code looks like in c (ofcourse you can 
also compile the c file using the gcc but that would defeat the purpose of the whole project). This has only limited functionality such as creating 
variables,assigning integers, relOP, EQOP, if and while statements. 

HOW TO RUN:
1. make
2. ./parser < [file]

[OPTIONAL]
~add -DDEBUG in makefile
~output a c file using the parser 
