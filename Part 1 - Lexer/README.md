# Lexer Design Documentation

This repository contains a lexer for a subset of the C language, implemented using Flex.

## Design Choices

### Token Categories
The lexer recognizes the following token categories:

- **Keywords**: Including "char," "else," "for," "if," "int," "return," and "void."
- **Identifiers**: Comprising sequences of letters and digits, starting with a letter.
- **Constants**: Recognizing both integer constants and character constants.
- **Escape Sequences**: Handling special character sequences within character and string literals.
- **String Literals**: Enclosing sequences of characters within double quotes.
- **Punctuators**: Identifying various punctuation symbols used in the language.
- **Whitespace**: Ignoring spaces, tabs, and newlines.
- **Comments**: Ignoring both single-line and multi-line comments.
- **Invalid Tokens**: Identifying and reporting any unrecognized or invalid input.

### Regular Expressions
Regular expressions (regex) are used to define patterns for recognizing tokens and handling comments. 

### Handling Comments
The lexer handles both single-line and multi-line comments as per language specifications. Comments are ignored to ensure they do not affect the tokenization process. Special regular expressions are used to recognize and skip over comment contents.

### Error Handling
When an invalid token is encountered, the lexer halts any further analysis and reports the presence of invalid input.


### Usage
The project is pre-compiled and so, it can be tested against the file 'test.nc' using the command './a.out < test.nc' for linux. Manual compilation can be done using the Makefile using 'make' or using the following commands:

1. `flex syntaxerrorsquad.l` (This generates lex.yy.c)
2. `gcc lex.yy.c syntaxerrorsquad_A2.c`

A run on sample nanoC code is given below:

```c
// Add two numbers 
int main() 
{ int x = 2; 
int y = 3; 
int z; 
z = x + y; 
printInt(x); 
printStr("a"); 
printInt(y); 
printStr(" = ");    
printInt(z); 
return 0;
}
```

```
<KEYWORD, int>
<IDENTIFIER, main>
<PUNCTUATOR, (>
<PUNCTUATOR, )>
<PUNCTUATOR, {>
<KEYWORD, int>
<IDENTIFIER, x>
<PUNCTUATOR, =>
<INTEGER_CONSTANT, 2>
<PUNCTUATOR, ;>
<KEYWORD, int>
<IDENTIFIER, y>
<PUNCTUATOR, =>
<INTEGER_CONSTANT, 3>
<PUNCTUATOR, ;>
<KEYWORD, int>
<IDENTIFIER, z>
<PUNCTUATOR, ;>
<IDENTIFIER, z>
<PUNCTUATOR, =>
<IDENTIFIER, x>
<PUNCTUATOR, +>
<IDENTIFIER, y>
<PUNCTUATOR, ;>
<IDENTIFIER, printInt>
<PUNCTUATOR, (>
<IDENTIFIER, x>
<PUNCTUATOR, )>
<PUNCTUATOR, ;>
<IDENTIFIER, printStr>
<PUNCTUATOR, (>
<STRING_LITERAL, "a">
<PUNCTUATOR, )>
<PUNCTUATOR, ;>
<IDENTIFIER, printInt>
<PUNCTUATOR, (>
<IDENTIFIER, y>
<PUNCTUATOR, )>
<PUNCTUATOR, ;>
<IDENTIFIER, printStr>
<PUNCTUATOR, (>
<STRING_LITERAL, " = ">
<PUNCTUATOR, )>
<PUNCTUATOR, ;>
<IDENTIFIER, printInt>
<PUNCTUATOR, (>
<IDENTIFIER, z>
<PUNCTUATOR, )>
<PUNCTUATOR, ;>
<KEYWORD, return>
<INTEGER_CONSTANT, 0>
<PUNCTUATOR, ;>
<PUNCTUATOR, }>
```