
#include <stdio.h>
#include<stdio.h>
#define KEYWORD                     1
#define IDENTIFIER                  2
#define INTEGER_CONSTANT            3
#define CHAR_CONSTANT               4
#define STRING_LITERAL              5
#define PUNCTUATOR                  6
#define DOT_CASE                    7

extern char* yytext;
extern int yylex();

int main() 
{
    int token;
    int fin = 0;
    while(token = yylex()) 
    {
        switch(token) 
        {
            case KEYWORD: 
                printf("<KEYWORD, %s>\n", yytext);
                break;

            case IDENTIFIER: 
                printf("<IDENTIFIER, %s>\n", yytext);
                break;

            case INTEGER_CONSTANT: 
                printf("<INTEGER_CONSTANT, %s>\n", yytext);
                break;

            case CHAR_CONSTANT: 
                printf("<CHAR CONSTANT, %s>\n", yytext);
                break;

            case STRING_LITERAL: 
                printf("<STRING_LITERAL, %s>\n", yytext);
                break;

            case PUNCTUATOR: 
                printf("<PUNCTUATOR, %s>\n", yytext);
                break;

            case DOT_CASE:
                printf("<INVALID TOKEN>");
                fin = 1;

            default:
                break;
        }
        if(fin == 1)
        {
            break;
        }
    }
    return 0;
}