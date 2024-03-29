%{  

    #include <stdio.h>
    #include "31_A5_translator.h"
    #include "31_A5.tab.h"
%}

%option yylineno
%option noyywrap


DIGIT                           [0-9]
IDENTIFIER_NON_DIGIT            [a-zA-Z_]
NON_ZERO_DIGIT                  [1-9]
IDENTIFIER                     {IDENTIFIER_NON_DIGIT}({DIGIT}|{IDENTIFIER_NON_DIGIT})*

SIGN                            [+-]


CONSTANT                        {INTEGER_CONSTANT}|{CHARACTER_CONSTANT}

DIGIT_SEQUENCE                  {DIGIT}+
INTEGER_CONSTANT                {NON_ZERO_DIGIT}{DIGIT}*|[0]

ESCAPE_SEQUENCE                 "\\'"|"\\""|"\\?"|"\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"

C_CHAR                          [^\'\n\\]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE                 {C_CHAR}+
CHARACTER_CONSTANT              \'{C_CHAR_SEQUENCE}\'


S_CHAR                          [^\"\n\\]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE                 {S_CHAR}+
STRING_LITERAL                  \"{S_CHAR_SEQUENCE}?\"

WS                              [ \t\n]

LEFT_SQUARE_BRACKET 			"["
RIGHT_SQUARE_BRACKET 			"]"
LEFT_PARENTHESIS 			    "("
RIGHT_PARENTHESIS 			    ")"
LEFT_CURLY_BRACKET 			    "{"
RIGHT_CURLY_BRACKET 			"}"

QUESTION_MARK 			        "?"
COLON 				            ":"
SEMICOLON 			            ";"
COMMA 				            ","

DOT 				            "."
ARROW 				            "->"

BITWISE_AND 				    "&"
BITWISE_NOR 			        "~"

AND 				            "&&"
OR 					            "||"

SUBTRACTION 		            "-"
MULTIPLICATION 		            "*"
DIVISION 			            "/"
MODULO 				            "%"

NOT 		                    "!"
LESS_THAN 	 		            "<"
GREATER_THAN 		            ">"
LESS_THAN_OR_EQUAL_TO 	        "<="
GREATER_THAN_OR_EQUAL_TO 	    ">="
EQUAL 				            "=="
NOTEQUAL 			            "!="


%%

"char"                          { return CHAR_LEX; }
"else"                          { return ELSE; }
"for"                           { return FOR; }
"if"                            { return IF; }
"int"                           { return INT_LEX; }
"return"                        { return RETURN_LEX; }
"void"                          { return VOID_LEX; }

{LEFT_SQUARE_BRACKET}           {return LEFT_SQUARE_BRACKET;}
{RIGHT_SQUARE_BRACKET}          {return RIGHT_SQUARE_BRACKET;}
{LEFT_PARENTHESIS}              {return LEFT_PARENTHESIS;}
{RIGHT_PARENTHESIS}             {return RIGHT_PARENTHESIS;}
{LEFT_CURLY_BRACKET}            {return LEFT_CURLY_BRACKET;}
{RIGHT_CURLY_BRACKET}           {return RIGHT_CURLY_BRACKET;}

{DOT}                           {return DOT;}
{ARROW}                         {return ARROW;}

{BITWISE_AND}                   {return BITWISE_AND;}
"+"                             { return ADD_LEX; }
{SUBTRACTION}                   {return SUBTRACTION;}
{NOT}                           {return NOT;}
{MULTIPLICATION}                {return MULTIPLICATION;}
{DIVISION}                      {return DIVISION;}

{MODULO}                        {return MODULO;}

{LESS_THAN}                     {return LESS_THAN;}
{GREATER_THAN}                  {return GREATER_THAN;}
{LESS_THAN_OR_EQUAL_TO}         {return LESS_THAN_OR_EQUAL_TO;}
{GREATER_THAN_OR_EQUAL_TO}      {return GREATER_THAN_OR_EQUAL_TO;}
{EQUAL}                         {return EQUAL;}
{NOTEQUAL}                      {return NOT_EQUAL;}

{AND}                           {return LOGICAL_AND;}
{OR}                            {return LOGICAL_OR;}

"="                             { return ASSIGN_LEX; }
{QUESTION_MARK}                 {return QUESTION_MARK;}
{COLON}                         {return COLON;}
{SEMICOLON}                     {return SEMICOLON;}
{COMMA}                         {return COMMA;}


"//".*\n      { /* Ignore single-line comments */ }
"/*"([^*]|"*"+[^*/])*"*"+"/" { /* Ignore multi-line comments */ }


{IDENTIFIER}                    { yylval.str = new string(yytext); return IDENTIFIER; }
{INTEGER_CONSTANT}              { yylval.intval = atoi(yytext); return INTEGER_CONSTANT; }
{CHARACTER_CONSTANT}                 { yylval.charval = yytext[1]; return CHARACTER_CONSTANT; }
{STRING_LITERAL}                { yylval.str = new string(yytext); return STRING_LITERAL; }
{WS}                            {}

%%
