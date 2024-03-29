# Machine Independent Code Generator

This project is generates an intermediate representation in the form of quadruples for a code in a subset of C language (nanoC). 

## Table of Contents

- [Overview](#overview)
- [Design Choices](#design-choices)
- [Working Mechanism](#working-mechanism)
- [Usage](#usage)

## Overview

The translator consists of several key components:

1. **Symbol Table**: Implemented using the `symbolTableData`, `symbolTableInit`, and `SymbolTable` classes, the symbol table maintains information about variables, their types, and scopes.
2. **Type System**: A comprehensive type system is defined in the `symbolTableData` class, supporting basic types (`void`, `char`, `int`), pointers (`ptr`), arrays (`arr`), and functions (`func`).
3. **Quadruple Representation**: Intermediate code is represented using quadruples, implemented through the `Quad` and `quadArray` classes.

## Design Choices

1. **Hierarchy Structure**: The symbol table is designed with a hierarchical structure, allowing for nested symbol tables and scopes.
2. **Type Conversions**: Explicit type conversions between `int` and `char` types are supported through the `convertType` function.
3. **Symbol Table Management**: Symbols are created, looked up, and added to the symbol table using various functions (`createNewSymbol`, `addSymbolToTable`, `gentemp`, etc.).
4. **Symbol Table Printing**: The symbol table can be printed in a formatted, readable manner, displaying details like name, type, initial value, size, offset, and nested symbol table information.
5. **Quadruple Printing**: Quadruples are printed with specific formatting, using the `print_quad` method in the `Quad` class and the `printQuadArray` method in the `quadArray` class.
6. **Intermediate Code Generation**: Intermediate code is generated using the `emit` function, which creates new quadruples and adds them to the quadruple array.
7. **Type Checking**: Type checking is implemented in the `typecheck` functions, ensuring type consistency and handling type mismatches through conversions or error reporting.

## Working Mechanism

1. **Parsing**: The translator assumes that the input C source code has been parsed, and the relevant syntax tree or intermediate representation is available.
2. **Symbol Table Creation**: As the parser traverses the syntax tree, it creates symbols in the symbol table, representing variables, functions, and their associated types.
3. **Type Checking**: Type checking is performed during symbol creation and expression evaluation to ensure type consistency.
4. **Intermediate Code Generation**: As the parser encounters expressions, statements, and other constructs, it generates corresponding quadruples using the `emit` function.
5. **Quadruple Array**: All generated quadruples are stored in the `quadArray` data structure for further processing or code generation.
6. **Output**: The translator outputs the final quadruple array, representing the intermediate code for the input C program.


The header **31_A4_translator.h** file declares various classes, functions, and data structures that constitute the translator for nanoC.


## Usage

The project is pre-compiled and so, it can be tested against the file 'testcase.nc' using the command `make output` for linux which would save the results in `output.txt`. Manual compilation can be done using the Makefile using 'make build' or using the following commands:

1. `bison -dt 31_A4.y` (creates tab.c and tab.h)
2. `flex 31_A4.l` (creates lex.yy.c)
3. `g++ -c lex.yy.c`
4. `g++ -c 31_A4.tab.c`
5. `g++ -c -o 31_A4_translator.o 31_A4_translator.cpp`
6. `g++ lex.yy.o 31_A4.tab.o 31_A4_translator.o -lfl -o translator`
7. `./translator < testcase.nc > output.txt`

A run for a sample C program is given below:
```c
int i = 0;
int main(){
    return 0;
}
```

```



0   :	t0 = 0
1   :	i = t0

2   :	main: 
3   :	t0 = 0
4   :	return t0

--------------------
ST: Global              , Parent : NULL                
--------------------
name                     type                     initial value            size           offset         nested symbol table
i                        int                      0                        4              0              NULL
t0                       int                      0                        4              4              NULL
main                     int                      -                        4              8              main


--------------------
ST: main                , Parent : Global              
--------------------
name                     type                     initial value            size           offset         nested symbol table
return                   int                      -                        4              0              NULL
t0                       int                      0                        4              4              NULL

```
