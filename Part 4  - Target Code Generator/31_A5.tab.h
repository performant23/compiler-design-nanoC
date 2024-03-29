/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_31_A5_TAB_H_INCLUDED
# define YY_YY_31_A5_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CHAR_LEX = 258,                /* CHAR_LEX  */
    ELSE = 259,                    /* ELSE  */
    FOR = 260,                     /* FOR  */
    IF = 261,                      /* IF  */
    INT_LEX = 262,                 /* INT_LEX  */
    RETURN_LEX = 263,              /* RETURN_LEX  */
    VOID_LEX = 264,                /* VOID_LEX  */
    LEFT_SQUARE_BRACKET = 265,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 266,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_PARENTHESIS = 267,        /* LEFT_PARENTHESIS  */
    RIGHT_PARENTHESIS = 268,       /* RIGHT_PARENTHESIS  */
    LEFT_CURLY_BRACKET = 269,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 270,     /* RIGHT_CURLY_BRACKET  */
    DOT = 271,                     /* DOT  */
    ARROW = 272,                   /* ARROW  */
    BITWISE_AND = 273,             /* BITWISE_AND  */
    MULTIPLICATION = 274,          /* MULTIPLICATION  */
    ADD_LEX = 275,                 /* ADD_LEX  */
    SUBTRACTION = 276,             /* SUBTRACTION  */
    BITWISE_NOR = 277,             /* BITWISE_NOR  */
    NOT = 278,                     /* NOT  */
    DIVISION = 279,                /* DIVISION  */
    MODULO = 280,                  /* MODULO  */
    LESS_THAN = 281,               /* LESS_THAN  */
    GREATER_THAN = 282,            /* GREATER_THAN  */
    LESS_THAN_OR_EQUAL_TO = 283,   /* LESS_THAN_OR_EQUAL_TO  */
    GREATER_THAN_OR_EQUAL_TO = 284, /* GREATER_THAN_OR_EQUAL_TO  */
    EQUAL = 285,                   /* EQUAL  */
    NOT_EQUAL = 286,               /* NOT_EQUAL  */
    LOGICAL_AND = 287,             /* LOGICAL_AND  */
    LOGICAL_OR = 288,              /* LOGICAL_OR  */
    QUESTION_MARK = 289,           /* QUESTION_MARK  */
    COLON = 290,                   /* COLON  */
    SEMICOLON = 291,               /* SEMICOLON  */
    ASSIGN_LEX = 292,              /* ASSIGN_LEX  */
    COMMA = 293,                   /* COMMA  */
    IDENTIFIER = 294,              /* IDENTIFIER  */
    INTEGER_CONSTANT = 295,        /* INTEGER_CONSTANT  */
    CHARACTER_CONSTANT = 296,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 297           /* STRING_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "31_A5.y"

    int intval;                    
    char charval;                   
    float floatval;               
    void* ptr;                     
    string* str;                   
    symbolType* symType;       
    symbol* symp;                   
    DataType types;                
    opcode op_code;                 
    expression* expression_parse;            
    declaration* declaration_parse;              
    vector<declaration*> *list_for_declarations; 
    param* params_parse;                    
    vector<param*> *list_for_params;       

#line 123 "31_A5.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_31_A5_TAB_H_INCLUDED  */
