BASE=31_A5

31_A5: lex.yy.o $(BASE).tab.o $(BASE)_translator.o $(BASE)_asm_gen.o
	g++ lex.yy.o $(BASE).tab.o $(BASE)_translator.o $(BASE)_asm_gen.o -lfl -o 31_A5

$(BASE)_asm_gen.o: $(BASE)_asm_gen.cpp
	g++ -c $(BASE)_asm_gen.cpp

$(BASE)_translator.o: $(BASE)_translator.h $(BASE)_translator.cpp
	g++ -c $(BASE)_translator.h
	g++ -c $(BASE)_translator.cpp

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

$(BASE).tab.o: $(BASE).tab.c
	g++ -c $(BASE).tab.c

lex.yy.c: $(BASE).l $(BASE).tab.h $(BASE)_translator.h
	flex $(BASE).l

$(BASE).tab.c: $(BASE).y
	bison -dtv $(BASE).y

$(BASE).tab.h: $(BASE).y
	bison -dtv $(BASE).y

lib$(BASE).a: $(BASE).o
	ar -rcs lib$(BASE).a $(BASE).o

$(BASE).o: $(BASE).c myl.h
	gcc -c $(BASE).c

$(BASE).c:
	touch $(BASE).c

test1: 31_A5 lib$(BASE).a
	@mkdir -p A5_Tests_Outputs
	@mkdir -p binary_dump
	./31_A5 1 < A5_Tests/$(BASE)_test1.nc > A5_Tests_Outputs/$(BASE)_quads1.out
	mv $(BASE)_1.s A5_Tests_Outputs/$(BASE)_quads1.s
	gcc -c A5_Tests_Outputs/$(BASE)_quads1.s -o A5_Tests_Outputs/$(BASE)_1.o
	gcc A5_Tests_Outputs/$(BASE)_1.o -o binary_dump/test1 -L. -l$(BASE) -no-pie

test2: 31_A5 lib$(BASE).a
	@mkdir -p A5_Tests_Outputs
	@mkdir -p binary_dump
	./31_A5 2 < A5_Tests/$(BASE)_test2.nc > A5_Tests_Outputs/$(BASE)_quads2.out
	mv $(BASE)_2.s A5_Tests_Outputs/$(BASE)_quads2.s
	gcc -c A5_Tests_Outputs/$(BASE)_quads2.s -o A5_Tests_Outputs/$(BASE)_2.o
	gcc A5_Tests_Outputs/$(BASE)_2.o -o binary_dump/test2 -L. -l$(BASE) -no-pie

test3: 31_A5 lib$(BASE).a
	@mkdir -p A5_Tests_Outputs
	@mkdir -p binary_dump
	./31_A5 3 < A5_Tests/$(BASE)_test3.nc > A5_Tests_Outputs/$(BASE)_quads3.out
	mv $(BASE)_3.s A5_Tests_Outputs/$(BASE)_quads3.s
	gcc -c A5_Tests_Outputs/$(BASE)_quads3.s -o A5_Tests_Outputs/$(BASE)_3.o
	gcc A5_Tests_Outputs/$(BASE)_3.o -o binary_dump/test3 -L. -l$(BASE) -no-pie

test4: 31_A5 lib$(BASE).a
	@mkdir -p A5_Tests_Outputs
	@mkdir -p binary_dump
	./31_A5 4 < A5_Tests/$(BASE)_test4.nc > A5_Tests_Outputs/$(BASE)_quads4.out
	mv $(BASE)_4.s A5_Tests_Outputs/$(BASE)_quads4.s
	gcc -c A5_Tests_Outputs/$(BASE)_quads4.s -o A5_Tests_Outputs/$(BASE)_4.o
	gcc A5_Tests_Outputs/$(BASE)_4.o -o binary_dump/test4 -L. -l$(BASE) -no-pie

test5: 31_A5 lib$(BASE).a
	@mkdir -p A5_Tests_Outputs
	@mkdir -p binary_dump
	./31_A5 5 < A5_Tests/$(BASE)_test5.nc > A5_Tests_Outputs/$(BASE)_quads5.out
	mv $(BASE)_5.s A5_Tests_Outputs/$(BASE)_quads5.s
	gcc -c A5_Tests_Outputs/$(BASE)_quads5.s -o A5_Tests_Outputs/$(BASE)_5.o
	gcc A5_Tests_Outputs/$(BASE)_5.o -o binary_dump/test5 -L. -l$(BASE) -no-pie

test6: 31_A5 lib$(BASE).a
	@mkdir -p A5_Tests_Outputs
	@mkdir -p binary_dump
	./31_A5 6 < A5_Tests/$(BASE)_test6.nc > A5_Tests_Outputs/$(BASE)_quads6.out
	mv $(BASE)_6.s A5_Tests_Outputs/$(BASE)_quads6.s
	gcc -c A5_Tests_Outputs/$(BASE)_quads6.s -o A5_Tests_Outputs/$(BASE)_6.o
	gcc A5_Tests_Outputs/$(BASE)_6.o -o binary_dump/test6 -L. -l$(BASE) -no-pie

test7: 31_A5 lib$(BASE).a
	@mkdir -p A5_Tests_Outputs
	@mkdir -p binary_dump
	./31_A5 7 < A5_Tests/$(BASE)_test7.nc > A5_Tests_Outputs/$(BASE)_quads7.out
	mv $(BASE)_7.s A5_Tests_Outputs/$(BASE)_quads7.s
	gcc -c A5_Tests_Outputs/$(BASE)_quads7.s -o A5_Tests_Outputs/$(BASE)_7.o
	gcc A5_Tests_Outputs/$(BASE)_7.o -o binary_dump/test7 -L. -l$(BASE) -no-pie

build: 31_A5

clean:
	rm -f lex.yy.c lex.yy.o $(BASE).tab.c $(BASE).tab.h $(BASE)_asm_gen.o $(BASE)_translator.o $(BASE).tab.o $(BASE).output $(BASE).o $(BASE).s lib$(BASE).a *.gch 31_A5 A5_Tests_Outputs/* binary_dump/*

.PHONY: test1 test2 test3 test4 test5 test6 test7 build clean