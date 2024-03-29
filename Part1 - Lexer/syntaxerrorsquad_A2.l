%{
    #include<stdio.h>
    #define KEYWORD                     1
    #define IDENTIFIER                  2
    #define INTEGER_CONSTANT            3
    #define CHAR_CONSTANT               4
    #define STRING_LITERAL              5
    #define PUNCTUATOR                  6
    #define DOT_CASE                    7
%}

%x SINGLE_LINE_COMMENT
%x MULTI_LINE_COMMENT

KEYWORD                 "char"|"else"|"for"|"if"|"int"|"return"|"void"
DIGIT                   [0-9]
IDENTIFIER              [a-zA-Z_][a-zA-Z0-9_]*
INTEGER_CONSTANT        [1-9][0-9]*|[0]+

ESCAPE_SEQUENCE         "\\\'"|"\\\""|"\?"|"\\"|"\a"|"\b"|"\f"|"\n"|"\r"|"\t"|"\v"

C_CHAR                  [^\'\\\n]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE         {C_CHAR}+

CHARACTER_CONSTANT      \'({C_CHAR_SEQUENCE})\'

Constants               {INTEGER_CONSTANT}|{CHARACTER_CONSTANT}

S_CHAR                  [^\"\\\n]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE         {S_CHAR}+
STRING_LITERAL          \"({S_CHAR_SEQUENCE})\"

PUNCTUATOR              "("|")"|"["|"]"|"{"|"}"|"->"|"&"|"*"|"+"|"-"|"/"|"%"|"!"|"?"|"<"|">"|"<="|">="|"=="|"!="|"&&"|"||"|":"|";"|"="|","
WS                      [ \t\n]

%%
{KEYWORD}                       {return KEYWORD;}
{PUNCTUATOR}                    {return PUNCTUATOR;}
{IDENTIFIER}                    {return IDENTIFIER;}
{INTEGER_CONSTANT}              {return INTEGER_CONSTANT;}
{CHARACTER_CONSTANT}            {return CHAR_CONSTANT;}
{STRING_LITERAL}                {return STRING_LITERAL;}
{ESCAPE_SEQUENCE}|" "

"//".*\n      { /* Ignore single-line comments */ }
"/*"([^*]|"*"+[^*/])*"*"+"/" { /* Ignore multi-line comments */ }
.                               {return DOT_CASE;}

%%

int yywrap()
{
    return 1;
}