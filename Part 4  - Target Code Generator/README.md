# Target Code Generator

This project generates assembly code for the x86-64 architecture from an intermediate representation (IR) of a program based on nanoC (subset of C programming language). The IR is represented as a sequence of quadruples (quads) stored in the `quadArr` data structure.

## Features

- Generates assembly code for integer, character, and pointer data types
- Supports arithmetic operations (addition, subtraction, multiplication, division, modulus)
- Handles control flow statements (goto, conditional branches)
- Implements function calls and returns
- Supports pointer operations (reference, dereference)
- Generates code for array indexing

## Code Structure

The main components of the code are:

- `symbolTable`: Represents a symbol table for variable management.
- `quadArray`: Stores the sequence of quadruples (quads) representing the IR.
- `generateTargetCode`: The main function that generates the assembly code by iterating over the quads and emitting appropriate instructions.

The code also includes helper functions for handling different types of quads, such as `generateGotos`, `generateConditionalGotos`, and various print functions for emitting assembly instructions.

## Features

**Symbol Table Management**: The code manages a global symbol table (`globalSymbolTable`) and a current symbol table (`ST`) to generate assembly code for variables and functions.

**Quadruple Representation**: The `quadArray` represents quadruples (four-element tuples) that define operations to be performed.

**String Constants**: The code handles string constants and outputs them in the `.rodata` section.

**Function Prologue and Epilogue**: Generation of function prologue and epilogue, including stack frame setup and cleanup is handled.

**Expression and Control Flow Handling**: The code supports assembly code for expressions (e.g., arithmetic operations) and control flow statements (e.g., goto, conditionals).

**Function Calls**: It can handle function calls, including passing parameters and managing the stack.

**File Output**: The generated assembly code is written to an `.s` file in `A5_Tests_Outputs`.

**Global Variable Initialization**: The code initializes global variables in the data section.

**String Constants**: String constants are appropriately placed in the `.rodata` section.

**Control Flow**: The translator generates assembly code for various control flow constructs like goto, conditionals, and labels.

**Expression Evaluation**: The code generates assembly code for various expressions, including arithmetic operations and unary minus.

**Memory Access**: The code generates code to access memory, including array indexing, reference, and dereference.

## Limitations

- The program does not support floating-point operations or complex data structures.
- Error handling and input validation are minimal.
- The generated assembly code may not be optimized for performance.



## 31_A5.c

### Includes

We include "myl.h" and define a macro `BUFF_SIZE` for buffer size, providing flexibility in code maintenance.

### Inline Assembly

We use inline assembly, making system calls directly (coupled to the x86-64 architecture).

### String Operations

- `getStrLen` Function: Computes the length of a string using a loop.
- `printStr` Function: Uses inline assembly to print a string to the standard output. It leverages the `syscall` instruction.
- `isDigit` Function: Checks if a character is a digit.

### Integer Operations

- `readInt` Function: Reads an integer from the standard input using syscall. It validates input and checks for overflow conditions.
- `reverseStr` Function: Reverses a substring within a string.
- `printInt` Function: Converts an integer to a string and then prints it using inline assembly. It handles zero, negative, and positive numbers.

## 31_A5_translator.h

### Data Types and Enums

Defines several essential data types and enums, including `DataType` for representing various data types like `VOID`, `BOOL`, `CHAR`, `INT`, `ARRAY`, `POINTER`, and `FUNCTION`. Another enum, `opcode`, enumerates different operations or instructions.


### Code Emission Functions

The `emit` functions are responsible for emitting intermediate code instructions, including operations involving strings, integers, characters, and floats.

### Utility Functions

Several utility functions are present for handling lists, backpatching, type conversions, and obtaining the size of a data type.

## The Parser

The parser mostly remains the same with changes for adapting the syntax tree nodes and the emitted assembly code based on the target language (assembly code) requirements.

## The Lexer

The lexer code largely remains the same as last assignment, with some modifications.

- For `IDENTIFIER`, the lexer now uses `yylval.str` to store a new string containing the identifier for assembly code generation.
- For `CHARACTER_CONSTANT`, the lexer now uses `yylval.charval` to store only the character itself because for `STRING_LITERAL`, the lexer now uses `yylval.str` to store a new string containing the literal to align with the need for string representations in assembly code.


## Test Results

- The first testcase fails and gives the "undefined reference to main" error. This is because the main function is absent in the testcase. It works when we add something like `int main(){return 0;}`.
- The second and third testcases run perfectly and store the binary files, quads, symbol tables, and the binary files correctly.
- The fourth testcase gives a segmentation fault in the compilation. In the testcase, the `sum` function isn’t defined, so it won’t compile and run.
- The fifth testcase also gives a segmentation fault. This testcase has implicit declarations of `fun2`, type conflicts, etc.
- The sixth testcase gives a segmentation fault because the `while` loop isn’t supported by the grammar. The testcase runs if we remove the `while()` loop block.
- The seventh testcase gives a segmentation fault because of the implicit declaration of the function `fact`.

In summary, the code works for syntactically, lexically, and semantically correct testcases but doesn’t include support for code with errors.

## Usage

The project is pre-compiled and so, it can be tested against the file 'A5_tests' using the command `make testX` where `testX` represent the test number for test files in `A5_tests`. This outputs the corresponding assembly files, object files, and the quads in `A5_Tests_Outputs` and binary file for the same in `binary_dump`. Manual compilation can also be done using the Makefile using 'make build' or using the following commands:

1. `bison -dtv 31_A5.y`
2. `flex 31_A5.l`
3. `g++ -c lex.yy.c`
4. `g++ -c 31_A5.tab.c`
5. `g++ -c 31_A5_translator.h`
6. `g++ -c 31_A5_translator.cpp`
7. `g++ -c 31_A5_asm_gen.cpp`
8. `g++ lex.yy.o 31_A5.tab.o 31_A5_translator.o 31_A5_asm_gen.o -lfl -o 31_A5`

and the tests can be run manually using:
1. `gcc -c 31_A5.c`
2. `ar -rcs lib31_A5.a 31_A5.o`
3.` ./31_A5 X < A5_Tests/31_A5_testX.nc > A5_Tests_Outputs/31_A5_quadsX.out`
4. `mv 31_A5_X.s A5_Tests_Outputs/31_A5_quadsX.s`
5. `gcc -c A5_Tests_Outputs/31_A5_quadsX.s -o A5_Tests_Outputs/31_A5_X.o`
6. `gcc A5_Tests_Outputs/31_A5_X.o -o binary_dump/testX -L. -l31_A5 -no-pie`

where `X` denotes the test number

A run on a sample nanoC example is given below:

```c
int main(){
    return 0;
}
```
```
.section	.rodata

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	movq	-4(%rbp), %rax
	leave
	ret
	leave
	ret
	.size	main, .-main
```