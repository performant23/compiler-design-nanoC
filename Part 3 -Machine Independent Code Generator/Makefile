BASE=31_A4
build: translator

translator: lex.yy.o $(BASE).tab.o $(BASE)_translator.o
	g++ lex.yy.o $(BASE).tab.o $(BASE)_translator.o -lfl -o translator

$(BASE)_translator.o: $(BASE)_translator.cpp $(BASE)_translator.h
	g++ -c -o $(BASE)_translator.o $(BASE)_translator.cpp

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

$(BASE).tab.o: $(BASE).tab.c
	g++ -c $(BASE).tab.c

lex.yy.c: $(BASE).l $(BASE).tab.h $(BASE)_translator.h
	flex $(BASE).l

$(BASE).tab.c $(BASE).tab.h: $(BASE).y
	bison -dt $(BASE).y


clean:
	rm -f lex.yy.c $(BASE).tab.c $(BASE).tab.h *.o translator *.gch

