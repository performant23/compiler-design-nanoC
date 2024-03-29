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

#ifndef YY_YY_31_A3_TAB_H_INCLUDED
# define YY_YY_31_A3_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    IDENTIFIER = 265,              /* IDENTIFIER  */
    INTEGER_CONSTANT = 266,        /* INTEGER_CONSTANT  */
    CHARACTER_CONSTANT = 267,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 268,          /* STRING_LITERAL  */
    LEFT_SQUARE_BRACKET = 269,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 270,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_PARENTHESIS = 271,        /* LEFT_PARENTHESIS  */
    RIGHT_PARENTHESIS = 272,       /* RIGHT_PARENTHESIS  */
    LEFT_CURLY_BRACKET = 273,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 274,     /* RIGHT_CURLY_BRACKET  */
    DOT = 275,                     /* DOT  */
    ARROW = 276,                   /* ARROW  */
    QUESTION_MARK = 277,           /* QUESTION_MARK  */
    COLON = 278,                   /* COLON  */
    SEMICOLON = 279,               /* SEMICOLON  */
    ASSIGN = 280,                  /* ASSIGN  */
    COMMA = 281,                   /* COMMA  */
    BITWISE_AND = 282,             /* BITWISE_AND  */
    BITWISE_NOR = 283,             /* BITWISE_NOR  */
    LOGICAL_AND = 284,             /* LOGICAL_AND  */
    LOGICAL_OR = 285,              /* LOGICAL_OR  */
    ADDITION = 286,                /* ADDITION  */
    SUBTRACTION = 287,             /* SUBTRACTION  */
    MULTIPLICATION = 288,          /* MULTIPLICATION  */
    DIVISION = 289,                /* DIVISION  */
    MODULO = 290,                  /* MODULO  */
    NOT = 291,                     /* NOT  */
    LESS_THAN = 292,               /* LESS_THAN  */
    GREATER_THAN = 293,            /* GREATER_THAN  */
    LESS_THAN_OR_EQUAL_TO = 294,   /* LESS_THAN_OR_EQUAL_TO  */
    GREATER_THAN_OR_EQUAL_TO = 295, /* GREATER_THAN_OR_EQUAL_TO  */
    EQUAL = 296,                   /* EQUAL  */
    NOT_EQUAL = 297                /* NOT_EQUAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "31_A3.y"

    int int_value;
    char char_value;
    char *string_value;

#line 112 "31_A3.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_31_A3_TAB_H_INCLUDED  */
