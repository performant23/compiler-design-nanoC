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

#ifndef YY_YY_31_A4_TAB_H_INCLUDED
# define YY_YY_31_A4_TAB_H_INCLUDED
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
    CHAR = 258,                    /* CHAR  */
    ELSE = 259,                    /* ELSE  */
    FOR = 260,                     /* FOR  */
    IF = 261,                      /* IF  */
    INT = 262,                     /* INT  */
    RETURN = 263,                  /* RETURN  */
    VOID = 264,                    /* VOID  */
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
    ADDITION = 275,                /* ADDITION  */
    SUBTRACTION = 276,             /* SUBTRACTION  */
    NOT = 277,                     /* NOT  */
    DIVISION = 278,                /* DIVISION  */
    MODULO = 279,                  /* MODULO  */
    LESS_THAN = 280,               /* LESS_THAN  */
    GREATER_THAN = 281,            /* GREATER_THAN  */
    LESS_THAN_OR_EQUAL_TO = 282,   /* LESS_THAN_OR_EQUAL_TO  */
    GREATER_THAN_OR_EQUAL_TO = 283, /* GREATER_THAN_OR_EQUAL_TO  */
    EQUAL = 284,                   /* EQUAL  */
    NOT_EQUAL = 285,               /* NOT_EQUAL  */
    LOGICAL_AND = 286,             /* LOGICAL_AND  */
    LOGICAL_OR = 287,              /* LOGICAL_OR  */
    QUESTION_MARK = 288,           /* QUESTION_MARK  */
    COLON = 289,                   /* COLON  */
    SEMICOLON = 290,               /* SEMICOLON  */
    ASSIGN = 291,                  /* ASSIGN  */
    COMMA = 292,                   /* COMMA  */
    IDENTIFIER = 293,              /* IDENTIFIER  */
    INTEGER_CONSTANT = 294,        /* INTEGER_CONSTANT  */
    CHARACTER_CONSTANT = 295,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 296,          /* STRING_LITERAL  */
    THEN = 297                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "31_A4.y"

    int int_value;
    char* string_value;
    int instr;
    char unaryOp;
    int numParams;
    Expression* expr;
    Statement* stmt;
    symbolTableInit* symptr;
    symbolTableData* symType;
    Array* arr;

#line 119 "31_A4.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_31_A4_TAB_H_INCLUDED  */
