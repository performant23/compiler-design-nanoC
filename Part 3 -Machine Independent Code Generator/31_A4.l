%{
    #include <stdio.h>
    #include "31_A4_translator.h"
    #include "31_A4.tab.h"

%}

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
ASSIGN 				            "="
COMMA 				            ","

DOT 				            "."
ARROW 				            "->"

BITWISE_AND 				    "&"
BITWISE_NOR 			        "~"

AND 				            "&&"
OR 					            "||"

ADDITION 			            "+"
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

"char"                          {return CHAR;}
"else"                          {return ELSE;}
"for"                           {return FOR;}
"if"                            {return IF;}
"int"                           {return INT;}
"return"                        {return RETURN;}
"void"                          {return VOID;}


{LEFT_SQUARE_BRACKET}           {return LEFT_SQUARE_BRACKET;}
{RIGHT_SQUARE_BRACKET}          {return RIGHT_SQUARE_BRACKET;}
{LEFT_PARENTHESIS}              {return LEFT_PARENTHESIS;}
{RIGHT_PARENTHESIS}             {return RIGHT_PARENTHESIS;}
{LEFT_CURLY_BRACKET}            {return LEFT_CURLY_BRACKET;}
{RIGHT_CURLY_BRACKET}           {return RIGHT_CURLY_BRACKET;}

{DOT}                           {return DOT;}
{ARROW}                         {return ARROW;}

{QUESTION_MARK}                 {return QUESTION_MARK;}
{COLON}                         {return COLON;}
{SEMICOLON}                     {return SEMICOLON;}
{ASSIGN}                        {return ASSIGN;}
{COMMA}                         {return COMMA;}

{BITWISE_AND}                   {return BITWISE_AND;}

{AND}                           {return LOGICAL_AND;}
{OR}                            {return LOGICAL_OR;}

{ADDITION}                      {return ADDITION;}
{SUBTRACTION}                   {return SUBTRACTION;}
{MULTIPLICATION}                {return MULTIPLICATION;}
{DIVISION}                      {return DIVISION;}
{MODULO}                        {return MODULO;}

{NOT}                           {return NOT;}
{LESS_THAN}                     {return LESS_THAN;}
{GREATER_THAN}                  {return GREATER_THAN;}
{LESS_THAN_OR_EQUAL_TO}         {return LESS_THAN_OR_EQUAL_TO;}
{GREATER_THAN_OR_EQUAL_TO}      {return GREATER_THAN_OR_EQUAL_TO;}
{EQUAL}                         {return EQUAL;}
{NOTEQUAL}                      {return NOT_EQUAL;}

"//".*\n      { /* Ignore single-line comments */ }
"/*"([^*]|"*"+[^*/])*"*"+"/" { /* Ignore multi-line comments */ }

{IDENTIFIER}                    {
    yylval.symptr = currentSymbolTable->lookup(yytext);
    return IDENTIFIER;return IDENTIFIER;}

{INTEGER_CONSTANT}                  { yylval.int_value = atoi(yytext); return INTEGER_CONSTANT; }
{CHARACTER_CONSTANT}                 { yylval.string_value = yytext; return CHARACTER_CONSTANT; }
{STRING_LITERAL}                { yylval.string_value = yytext; return STRING_LITERAL; }


{WS}                            {}



%%
int yywrap()
{
    return 1;
}