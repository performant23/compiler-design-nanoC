%{
    #include <stdio.h>
    extern int yylex();
    extern char* yytext;
    void yyerror(char *s);
%}

%union {
    int int_value;
    char char_value;
    char *string_value;
}

%token CHAR
%token ELSE
%token FOR
%token IF
%token INT
%token RETURN
%token VOID

%token <string_value> IDENTIFIER
%token <int_value> INTEGER_CONSTANT
%token <char_value> CHARACTER_CONSTANT
%token <string_value> STRING_LITERAL

%token LEFT_SQUARE_BRACKET
%token RIGHT_SQUARE_BRACKET
%token LEFT_PARENTHESIS
%token RIGHT_PARENTHESIS
%token LEFT_CURLY_BRACKET
%token RIGHT_CURLY_BRACKET 

%token DOT
%token ARROW

%token QUESTION_MARK
%token COLON
%token SEMICOLON
%token ASSIGN
%token COMMA


%token BITWISE_AND
%token BITWISE_NOR

%token LOGICAL_AND
%token LOGICAL_OR

%token ADDITION
%token SUBTRACTION
%token MULTIPLICATION
%token DIVISION
%token MODULO 

%token NOT
%token LESS_THAN
%token GREATER_THAN
%token LESS_THAN_OR_EQUAL_TO
%token GREATER_THAN_OR_EQUAL_TO
%token EQUAL
%token NOT_EQUAL


%nonassoc RIGHT_PARENTHESIS
%nonassoc ELSE

%start translation_unit

%%

primary_expression: IDENTIFIER																										{printf("primary-expression\n");}
                  | INTEGER_CONSTANT																								{printf("primary-expression\n");}
				  | CHARACTER_CONSTANT																								{printf("primary-expression\n");}
                  | STRING_LITERAL																									{printf("primary-expression\n");}
                  | LEFT_PARENTHESIS expression RIGHT_PARENTHESIS																	{printf("primary-expression\n");}
                  ;

postfix_expression: primary_expression																								{printf("postfix-expression\n");}
                  | postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET											{printf("postfix-expression\n");}
                  | postfix_expression LEFT_PARENTHESIS argument_expression_list_opt RIGHT_PARENTHESIS								{printf("postfix-expression\n");}
                  | postfix_expression DOT IDENTIFIER																				{printf("postfix-expression\n");}
                  | postfix_expression ARROW IDENTIFIER																				{printf("postfix-expression\n");}
                  ;

argument_expression_list: assignment_expression																						{printf("argument-expression-list\n");}
                        | argument_expression_list COMMA assignment_expression														{printf("argument-expression-list\n");}
                        ;

unary_expression: postfix_expression																								{printf("unary-expression\n");}
                | unary_operator unary_expression																					{printf("unary-expression\n");}
                ;

unary_operator: BITWISE_AND																											{printf("unary-operator\n");}
              | MULTIPLICATION																										{printf("unary-operator\n");}
              | ADDITION																											{printf("unary-operator\n");}
              | SUBTRACTION																											{printf("unary-operator\n");}
              | NOT																													{printf("unary-operator\n");}
              ;

multiplicative_expression: unary_expression																							{printf("multiplicative-expression\n");}
                         | multiplicative_expression MULTIPLICATION unary_expression												{printf("multiplicative-expression\n");}
                         | multiplicative_expression DIVISION unary_expression														{printf("multiplicative-expression\n");}
                         | multiplicative_expression MODULO unary_expression														{printf("multiplicative-expression\n");}
                         ;

additive_expression: multiplicative_expression																						{printf("additive-expression\n");}
                   | additive_expression ADDITION multiplicative_expression															{printf("additive-expression\n");}
                   | additive_expression SUBTRACTION multiplicative_expression														{printf("additive-expression\n");}
                   ;

relational_expression: additive_expression																							{printf("relational-expression\n");}
                     | relational_expression LESS_THAN additive_expression															{printf("relational-expression\n");}
                     | relational_expression GREATER_THAN additive_expression														{printf("relational-expression\n");}
                     | relational_expression LESS_THAN_OR_EQUAL_TO additive_expression												{printf("relational-expression\n");}
                     | relational_expression GREATER_THAN_OR_EQUAL_TO additive_expression											{printf("relational-expression\n");}
                     ;

equality_expression: relational_expression																							{printf("equality-expression\n");}
                   | equality_expression EQUAL relational_expression																{printf("equality-expression\n");}
                   | equality_expression NOT_EQUAL relational_expression															{printf("equality-expression\n");}
                   ;

logical_and_expression: equality_expression																						    {printf("logical-AND-expression\n");}
                      | logical_and_expression LOGICAL_AND equality_expression													    {printf("logical-AND-expression\n");}
                      ;

logical_or_expression: logical_and_expression																						{printf("logical-OR-expression\n");}
                     | logical_or_expression LOGICAL_OR logical_and_expression														{printf("logical-OR-expression\n");}
                     ;

conditional_expression: logical_or_expression																						{printf("conditional-expression\n");}
                      | logical_or_expression QUESTION_MARK expression COLON conditional_expression									{printf("conditional-expression\n");}
                      ;

assignment_expression: conditional_expression																						{printf("assignment-expression\n");}
                     | unary_expression ASSIGN assignment_expression													            {printf("assignment-expression\n");}
                     ;

expression: assignment_expression																									{printf("expression\n");}
          ;

declaration: type_specifier init_declarator SEMICOLON																                {printf("declaration\n");}
           ;

init_declarator: declarator																											{printf("init-declarator\n");}
               | declarator ASSIGN initializer 																						{printf("init-declarator\n");}
               ;

type_specifier: VOID																												{printf("type-specifier\n");}
              | CHAR																												{printf("type-specifier\n");}
              | INT																													{printf("type-specifier\n");}
              ;

declarator: pointer_opt direct_declarator																							{printf("declarator\n");}
          ;

direct_declarator: IDENTIFIER																										{printf("direct-declarator\n");}
                | IDENTIFIER LEFT_SQUARE_BRACKET INTEGER_CONSTANT RIGHT_SQUARE_BRACKET											    {printf("direct-declarator\n");}
                | IDENTIFIER LEFT_PARENTHESIS parameter_list_opt RIGHT_PARENTHESIS											        {printf("direct-declarator\n");}
                 ;

pointer: MULTIPLICATION 																							                {printf("pointer\n");}
       ;

parameter_list: parameter_declaration																								{printf("parameter-list\n");}
              | parameter_list COMMA parameter_declaration																			{printf("parameter-list\n");}
              ;

parameter_declaration: type_specifier pointer_opt identifier_opt                                                                    {printf("parameter-declaration\n");}
                     ;


initializer: assignment_expression																									{printf("initializer\n");}
           ;


statement: compound_statement																										{printf("statement\n");}
         | expression_statement																										{printf("statement\n");}
         | selection_statement																										{printf("statement\n");}
         | iteration_statement																										{printf("statement\n");}
         | jump_statement																											{printf("statement\n");}
         ;

compound_statement: LEFT_CURLY_BRACKET block_item_list_opt RIGHT_CURLY_BRACKET														{printf("compound-statement\n");}
                  ;

block_item_list: block_item																											{printf("block-item-list\n");}
               | block_item_list block_item																							{printf("block-item-list\n");}
               ;

block_item: declaration																												{printf("block-item\n");}
          | statement																												{printf("block-item\n");}
          ;

expression_statement: expression_opt SEMICOLON																						{printf("expression-statement\n");}
                    ;

selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement														{printf("selection-statement\n");}
                   | IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement										{printf("selection-statement\n");}
                   ;

iteration_statement: FOR LEFT_PARENTHESIS expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RIGHT_PARENTHESIS statement	{printf("iteration-statement\n");}
                   ;

jump_statement: RETURN expression_opt SEMICOLON																						{printf("jump-statement\n");}
              ;

translation_unit: external_declaration																								{printf("translation-unit\n");}
                | translation_unit external_declaration																				{printf("translation-unit\n");}
                ;

external_declaration: function_definition																							{printf("external-declaration\n");}
                    | declaration																									{printf("external-declaration\n");}
                    ;
function_definition: type_specifier declarator  declaration_list_opt  compound_statement			                                {printf("function-definition\n");}
                   ;

identifier_opt: IDENTIFIER																											{}
              |																														
              ;

pointer_opt: pointer																												{}
           |																														
           ;


parameter_list_opt: parameter_list                                                                                                  {}                                                        
                    |                                                                                                               
                    ;


block_item_list_opt: block_item_list																								{}
                   |																												
                   ;


expression_opt: expression																											{}
              |																														
              ;


argument_expression_list_opt: argument_expression_list                                                                              {}																				
                    |																										        
                    ;
            

declaration_list_opt: declaration_list																					            
                    |																												{}
                    ;

declaration_list: declaration																										{}
                | declaration_list declaration																						
                ;

%%

void yyerror(char *s) {
printf("Error: %s on '%s'\n", s, yytext);
}