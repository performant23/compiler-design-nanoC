CC = gcc
CFLAGS = -Werror

SOURCES = lex.yy.c 31_A3.tab.c 31_A3.c
EXECUTABLE = parser

output: $(EXECUTABLE) test.nc
	./$(EXECUTABLE) < test.nc > output.txt

build: $(SOURCES)
	$(CC) -o $(EXECUTABLE) $(SOURCES) -lfl $(CFLAGS)

lex.yy.c: 31_A3.l
	flex -o lex.yy.c 31_A3.l

31_A3.tab.c: 31_A3.y
	bison $< --defines=31_A3.tab.h -o $@

clean:
	rm -f lex.yy.c 31_A3.tab.c 31_A3.tab.h $(EXECUTABLE) output.txt
