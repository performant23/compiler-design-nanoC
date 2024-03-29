output: a.out test.nc
		./a.out < test.nc > output.txt

a.out:  lex.yy.c syntaxerrorsquad_A2.c
		cc lex.yy.c syntaxerrorsquad_A2.c -lfl

lex.yy.c: syntaxerrorsquad_A2.l
		flex syntaxerrorsquad_A2.l

clean:
	rm a.out lex.yy.c output.txt
