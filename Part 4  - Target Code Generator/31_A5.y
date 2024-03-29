%{
    #include <iostream>
    #include "31_A5_translator.h"
    using namespace std;

    extern int yylex();                
    void yyerror(string s);               
    extern char* yytext;                   
    extern int yylineno;                   

    extern int nextinstr;                  
    extern quadArray quadList;             
    extern symbolTable globalSymbolTable;           
    extern symbolTable* ST;                
    extern vector<string> stringConstant;    
    int strCount = 0;                      
    expression* tmpForBool;
%}

%union {
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
}

%token CHAR_LEX
%token ELSE
%token FOR
%token IF
%token INT_LEX
%token RETURN_LEX
%token VOID_LEX

%token LEFT_SQUARE_BRACKET
%token RIGHT_SQUARE_BRACKET
%token LEFT_PARENTHESIS
%token RIGHT_PARENTHESIS
%token LEFT_CURLY_BRACKET
%token RIGHT_CURLY_BRACKET 

%token DOT
%token ARROW

%token BITWISE_AND 
%token MULTIPLICATION 
%token ADD_LEX 
%token SUBTRACTION 
%token BITWISE_NOR 
%token NOT DIVISION 
%token MODULO 

%token LESS_THAN 
%token GREATER_THAN 
%token LESS_THAN_OR_EQUAL_TO 
%token GREATER_THAN_OR_EQUAL_TO 
%token EQUAL 
%token NOT_EQUAL  
%token LOGICAL_AND 
%token LOGICAL_OR 
%token QUESTION_MARK 
%token COLON 
%token SEMICOLON  
%token ASSIGN_LEX  
%token COMMA 

%token <str> IDENTIFIER
%token <intval> INTEGER_CONSTANT
%token <charval> CHARACTER_CONSTANT
%token <str> STRING_LITERAL

%type <expression_parse> 
        expression
        primary_expression 
        multiplicative_expression
        additive_expression
        relational_expression
        equality_expression
        logical_and_expression
        logical_or_expression
        conditional_expression
        assignment_expression
        postfix_expression
        unary_expression
        expression_statement
        statement
        compound_statement
        selection_statement
        iteration_statement
        jump_statement
        block_item
        block_item_list
        initializer
        A
        B

%type <charval> unary_operator
%type <intval> pointer
%type <types> type_specifier 
%type <declaration_parse> direct_declarator init_declarator declarator function_prototype intermediate_identifier intermediate_declarator
%type <list_for_declarations> init_declarator_list
%type <params_parse> parameter_declaration
%type <list_for_params> parameter_list  parameter_list_opt argument_expression_list

%expect 1
%nonassoc ELSE
%start translation_unit

%%

primary_expression: 
        IDENTIFIER
        {
            $$ = new expression(); 
            string s = *($1);
            ST->lookup(s);         
            $$->loc = s;            
        }
        | INTEGER_CONSTANT
        {
            $$ = new expression();                 
            $$->loc = ST->gentemp(INT);             
            emit($$->loc, $1, ASSIGN);
            symbolValue* val = new symbolValue();
            val->constructorInit($1);                  
            ST->lookup($$->loc)->initVal = val;    
        }
        | CHARACTER_CONSTANT
        {
            $$ = new expression();                
            $$->loc = ST->gentemp(CHAR);           
            emit($$->loc, $1, ASSIGN);
            symbolValue* val = new symbolValue();
            val->constructorInit($1);              
            ST->lookup($$->loc)->initVal = val;    
        }
        | STRING_LITERAL
        {
            $$ = new expression();           
            $$->loc = ".LC" + to_string(strCount++);
            stringConstant.push_back(*($1));          
        }
        | LEFT_PARENTHESIS expression RIGHT_PARENTHESIS
        {
            $$ = $2;                               
        }
        ;


argument_expression_list: 
        assignment_expression
        {
            param* first = new param();                
            first->name = $1->loc;
            first->type = ST->lookup($1->loc)->type;
            $$ = new vector<param*>;
            $$->push_back(first);                   
        }
        | argument_expression_list COMMA assignment_expression
        {
            param* next = new param();             
            next->name = $3->loc;
            next->type = ST->lookup(next->name)->type;
            $$ = $1;
            $$->push_back(next);                        
        }
        ;


postfix_expression: 
        primary_expression
        {}
        | postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET
        {
            symbolType to = ST->lookup($1->loc)->type;    
            string f = "";
            if(!($1->fold)) {
                f = ST->gentemp(INT);                       
                emit(f, 0, ASSIGN);
                $1->folder = new string(f);
            }
            string temp = ST->gentemp(INT);

            
            emit(temp, $3->loc, "", ASSIGN);
            emit(temp, temp, "4", MULT);
            emit(f, temp, "", ASSIGN);
            $$ = $1;
        }
        | postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS
        {   
            symbolTable* funcTable = globalSymbolTable.lookup($1->loc)->nestedTable;
            emit($1->loc, "0", "", CALL);
        }
        | postfix_expression LEFT_PARENTHESIS argument_expression_list RIGHT_PARENTHESIS
        {   
            symbolTable* funcTable = globalSymbolTable.lookup($1->loc)->nestedTable;
            vector<param*> parameters = *($3);                      
            vector<symbol*> paramsList = funcTable->symbols;

            for(int i = 0; i < (int)parameters.size(); i++) {
                emit(parameters[i]->name, "", "", PARAM);   
            }

            DataType retType = funcTable->lookup("RETVAL")->type.type;
            if(retType == VOID)                                         
                emit($1->loc, (int)parameters.size(), CALL);
            else {                                                      
                string retVal = ST->gentemp(retType);
                emit($1->loc, to_string(parameters.size()), retVal, CALL);
                $$ = new expression();
                $$->loc = retVal;
            }
        }
        | postfix_expression DOT IDENTIFIER
        {}
        | postfix_expression ARROW IDENTIFIER
        {}
        ;




unary_expression: 
        postfix_expression
        {}
        | unary_operator unary_expression
        {
            switch($1) {
                case '&':   
                    $$ = new expression();
                    $$->loc = ST->gentemp(POINTER);                
                    emit($$->loc, $2->loc, "", REFERENCE);         
                    break;
                case '*':   
                    $$ = new expression();
                    $$->loc = ST->gentemp(INT);                     
                    $$->fold = 1;
                    $$->folder = new string($2->loc);
                    emit($$->loc, $2->loc, "", DEREFERENCE);       
                    break;
                case '-':   
                    $$ = new expression();
                    $$->loc = ST->gentemp();                        
                    emit($$->loc, $2->loc, "", U_MINUS);           
                    break;
                case '!':   
                    $$ = new expression();
                    $$->loc = ST->gentemp(INT);                    
                    int temp = nextinstr + 2;
                    emit(to_string(temp), $2->loc, "0", GOTO_EQ);   
                    temp = nextinstr + 3;
                    emit(to_string(temp), "", "", GOTO);
                    emit($$->loc, "1", "", ASSIGN);
                    temp = nextinstr + 2;
                    emit(to_string(temp), "", "", GOTO);
                    emit($$->loc, "0", "", ASSIGN);
                    break;
            }
        }
        ;

unary_operator:
        BITWISE_AND
        {
            $$ = '&';
        }
        | MULTIPLICATION
        {
            $$ = '*';
        }
        | ADD_LEX
        {
            $$ = '+';
        }
        | SUBTRACTION
        {
            $$ = '-';
        }
        | NOT
        {
            $$ = '!';
        }
        ;

multiplicative_expression: 
        unary_expression
        {
            $$ = new expression();                                  
            symbolType tp = ST->lookup($1->loc)->type;
            if(tp.type == ARRAY) {                                  
                string t = ST->gentemp(tp.nextType);                
                if($1->folder != NULL) {
                    emit(t, $1->loc, *($1->folder), ARR_IDX_ARG);   
                    $1->loc = t;
                    $1->type = tp.nextType;
                    $$ = $1;
                }
                else
                    $$ = $1;        
            }
            else
                $$ = $1;           
        }
        | multiplicative_expression MULTIPLICATION unary_expression
        {   
            
            $$ = new expression();
            symbol* one = ST->lookup($1->loc);                  
            symbol* two = ST->lookup($3->loc);                  
            if(two->type.type == ARRAY) {                      
                string t = ST->gentemp(two->type.nextType);
                emit(t, $3->loc, *($3->folder), ARR_IDX_ARG);
                $3->loc = t;
                $3->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                      
                string t = ST->gentemp(one->type.nextType);
                emit(t, $1->loc, *($1->folder), ARR_IDX_ARG);
                $1->loc = t;
                $1->type = one->type.nextType;
            }

            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            $$->loc = ST->gentemp(final);                     
            emit($$->loc, $1->loc, $3->loc, MULT);
        }
        | multiplicative_expression DIVISION unary_expression
        {
            
            $$ = new expression();
            symbol* one = ST->lookup($1->loc);                
            symbol* two = ST->lookup($3->loc);                  
            if(two->type.type == ARRAY) {                       
                string t = ST->gentemp(two->type.nextType);
                emit(t, $3->loc, *($3->folder), ARR_IDX_ARG);
                $3->loc = t;
                $3->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                      
                string t = ST->gentemp(one->type.nextType);
                emit(t, $1->loc, *($1->folder), ARR_IDX_ARG);
                $1->loc = t;
                $1->type = one->type.nextType;
            }

            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            $$->loc = ST->gentemp(final);                       
            emit($$->loc, $1->loc, $3->loc, DIV);
        }
        | multiplicative_expression MODULO unary_expression
        {
            
            $$ = new expression();
            symbol* one = ST->lookup($1->loc);                  
            symbol* two = ST->lookup($3->loc);                 
            if(two->type.type == ARRAY) {                     
                string t = ST->gentemp(two->type.nextType);
                emit(t, $3->loc, *($3->folder), ARR_IDX_ARG);
                $3->loc = t;
                $3->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                      
                string t = ST->gentemp(one->type.nextType);
                emit(t, $1->loc, *($1->folder), ARR_IDX_ARG);
                $1->loc = t;
                $1->type = one->type.nextType;
            }

            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            $$->loc = ST->gentemp(final);                     
            emit($$->loc, $1->loc, $3->loc, MOD);
        }
        ;

additive_expression: 
        multiplicative_expression
        {}

        | additive_expression ADD_LEX multiplicative_expression
        {   

            
            $$ = new expression();
            symbol* one = ST->lookup($1->loc);                 
            symbol* two = ST->lookup($3->loc);                 
            if(two->type.type == ARRAY) {                       
                string t = ST->gentemp(two->type.nextType);
                emit(t, $3->loc, *($3->folder), ARR_IDX_ARG);
                $3->loc = t;
                $3->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                      
                string t = ST->gentemp(one->type.nextType);
                emit(t, $1->loc, *($1->folder), ARR_IDX_ARG);
                $1->loc = t;
                $1->type = one->type.nextType;
            }

            
            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            $$->loc = ST->gentemp(final);                       
            emit($$->loc, $1->loc, $3->loc, ADD);
        }
        | additive_expression SUBTRACTION multiplicative_expression
        {
            $$ = new expression();
            symbol* one = ST->lookup($1->loc);               
            symbol* two = ST->lookup($3->loc);           
            if(two->type.type == ARRAY) {                       
                string t = ST->gentemp(two->type.nextType);
                emit(t, $3->loc, *($3->folder), ARR_IDX_ARG);
                $3->loc = t;
                $3->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                    
                string t = ST->gentemp(one->type.nextType);
                emit(t, $1->loc, *($1->folder), ARR_IDX_ARG);
                $1->loc = t;
                $1->type = one->type.nextType;
            }

            
            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            $$->loc = ST->gentemp(final);                
            emit($$->loc, $1->loc, $3->loc, SUB);
        }
        ;


relational_expression: 
        additive_expression
        {}
        | relational_expression LESS_THAN additive_expression
        {
            $$ = new expression();
            symbol* one = ST->lookup($1->loc);                 
            symbol* two = ST->lookup($3->loc);                 
            if(two->type.type == ARRAY) {                  
                string t = ST->gentemp(two->type.nextType);
                emit(t, $3->loc, *($3->folder), ARR_IDX_ARG);
                $3->loc = t;
                $3->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                      
                string t = ST->gentemp(one->type.nextType);
                emit(t, $1->loc, *($1->folder), ARR_IDX_ARG);
                $1->loc = t;
                $1->type = one->type.nextType;
            }
            $$ = new expression();
            $$->loc = ST->gentemp();
            $$->type = BOOL;                                   
            emit($$->loc, "1", "", ASSIGN);
            $$->truelist = makelist(nextinstr);                
            emit("", $1->loc, $3->loc, GOTO_LT);              
            emit($$->loc, "0", "", ASSIGN);
            $$->falselist = makelist(nextinstr);               
            emit("", "", "", GOTO);                           
        }
        | relational_expression GREATER_THAN additive_expression
        {
            $$ = new expression();
            symbol* one = ST->lookup($1->loc);                  
            symbol* two = ST->lookup($3->loc);                  
            if(two->type.type == ARRAY) {                   
                string t = ST->gentemp(two->type.nextType);
                emit(t, $3->loc, *($3->folder), ARR_IDX_ARG);
                $3->loc = t;
                $3->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                      
                string t = ST->gentemp(one->type.nextType);
                emit(t, $1->loc, *($1->folder), ARR_IDX_ARG);
                $1->loc = t;
                $1->type = one->type.nextType;
            }
            $$ = new expression();
            $$->loc = ST->gentemp();
            $$->type = BOOL;                                    
            emit($$->loc, "1", "", ASSIGN);
            $$->truelist = makelist(nextinstr);            
            emit("", $1->loc, $3->loc, GOTO_GT);            
            emit($$->loc, "0", "", ASSIGN);
            $$->falselist = makelist(nextinstr);           
            emit("", "", "", GOTO);                           
        }
        | relational_expression LESS_THAN_OR_EQUAL_TO additive_expression
        {
            $$ = new expression();
            symbol* one = ST->lookup($1->loc);                  
            symbol* two = ST->lookup($3->loc);              
            if(two->type.type == ARRAY) {                     
                string t = ST->gentemp(two->type.nextType);
                emit(t, $3->loc, *($3->folder), ARR_IDX_ARG);
                $3->loc = t;
                $3->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       
                string t = ST->gentemp(one->type.nextType);
                emit(t, $1->loc, *($1->folder), ARR_IDX_ARG);
                $1->loc = t;
                $1->type = one->type.nextType;
            }
            $$ = new expression();
            $$->loc = ST->gentemp();
            $$->type = BOOL;                                    
            emit($$->loc, "1", "", ASSIGN);
            $$->truelist = makelist(nextinstr);                
            emit("", $1->loc, $3->loc, GOTO_LTE);              
            emit($$->loc, "0", "", ASSIGN);
            $$->falselist = makelist(nextinstr);                
            emit("", "", "", GOTO);                            
        }
        | relational_expression GREATER_THAN_OR_EQUAL_TO additive_expression
        {
            $$ = new expression();
            symbol* one = ST->lookup($1->loc);               
            symbol* two = ST->lookup($3->loc);          
            if(two->type.type == ARRAY) {                  
                string t = ST->gentemp(two->type.nextType);
                emit(t, $3->loc, *($3->folder), ARR_IDX_ARG);
                $3->loc = t;
                $3->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                      
                string t = ST->gentemp(one->type.nextType);
                emit(t, $1->loc, *($1->folder), ARR_IDX_ARG);
                $1->loc = t;
                $1->type = one->type.nextType;
            }
            $$ = new expression();
            $$->loc = ST->gentemp();
            $$->type = BOOL;                                 
            emit($$->loc, "1", "", ASSIGN);
            $$->truelist = makelist(nextinstr);              
            emit("", $1->loc, $3->loc, GOTO_GTE);           
            emit($$->loc, "0", "", ASSIGN);
            $$->falselist = makelist(nextinstr);             
            emit("", "", "", GOTO);                          
        }
        ;

equality_expression: 
        relational_expression
        {
            $$ = new expression();
            $$ = $1;
        }
        | equality_expression EQUAL relational_expression
        {
            $$ = new expression();
            symbol* one = ST->lookup($1->loc);             
            symbol* two = ST->lookup($3->loc);                
            if(two->type.type == ARRAY) {                       
                string t = ST->gentemp(two->type.nextType);
                emit(t, $3->loc, *($3->folder), ARR_IDX_ARG);
                $3->loc = t;
                $3->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       
                string t = ST->gentemp(one->type.nextType);
                emit(t, $1->loc, *($1->folder), ARR_IDX_ARG);
                $1->loc = t;
                $1->type = one->type.nextType;
            }
            $$ = new expression();
            $$->loc = ST->gentemp();
            $$->type = BOOL;                              
            emit($$->loc, "1", "", ASSIGN);
            $$->truelist = makelist(nextinstr);            
            emit("", $1->loc, $3->loc, GOTO_EQ);         
            emit($$->loc, "0", "", ASSIGN);
            $$->falselist = makelist(nextinstr);            
            emit("", "", "", GOTO);                         
        }
        | equality_expression NOT_EQUAL relational_expression
        {
            $$ = new expression();
            symbol* one = ST->lookup($1->loc);                  
            symbol* two = ST->lookup($3->loc);               
            if(two->type.type == ARRAY) {                    
                string t = ST->gentemp(two->type.nextType);
                emit(t, $3->loc, *($3->folder), ARR_IDX_ARG);
                $3->loc = t;
                $3->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {               
                string t = ST->gentemp(one->type.nextType);
                emit(t, $1->loc, *($1->folder), ARR_IDX_ARG);
                $1->loc = t;
                $1->type = one->type.nextType;
            }
            $$ = new expression();
            $$->loc = ST->gentemp();
            $$->type = BOOL;                                    
            emit($$->loc, "1", "", ASSIGN);
            $$->truelist = makelist(nextinstr);              
            emit("", $1->loc, $3->loc, GOTO_NEQ);              
            emit($$->loc, "0", "", ASSIGN);
            $$->falselist = makelist(nextinstr);              
            emit("", "", "", GOTO);                     
        }
        ;

logical_and_expression: 
        equality_expression
        {}
        | logical_and_expression LOGICAL_AND A equality_expression
        {
            backpatch($1->truelist, $3->instr);                   
            $$->falselist = merge($1->falselist, $4->falselist);   
            $$->truelist = $4->truelist;                           
            $$->type = BOOL;                                       
        }
        ;

logical_or_expression: 
        logical_and_expression
        {}
        | logical_or_expression LOGICAL_OR A logical_and_expression
        {
            backpatch($1->falselist, $3->instr);                  
            $$->truelist = merge($1->truelist, $4->truelist);      
            $$->falselist = $4->falselist;                        
            $$->type = BOOL;                                      
        }
        ;

conditional_expression: 
        logical_or_expression
        {
            $$ = $1;    
        }
        | logical_or_expression B QUESTION_MARK A expression B COLON A conditional_expression
        {   
            symbol* one = ST->lookup($5->loc);
            $$->loc = ST->gentemp(one->type.type);     
            $$->type = one->type.type;
            emit($$->loc, $9->loc, "", ASSIGN);    
            list<int> temp = makelist(nextinstr);
            emit("", "", "", GOTO);                  
            backpatch($6->nextlist, nextinstr);     
            emit($$->loc, $5->loc, "", ASSIGN);
            temp = merge(temp, makelist(nextinstr));
            emit("", "", "", GOTO);                  
            backpatch($2->nextlist, nextinstr);      
            convertIntToBool($1);                       
            backpatch($1->truelist, $4->instr);         
            backpatch($1->falselist, $8->instr);        
            backpatch($2->nextlist, nextinstr);         
        }
        ;

A: %empty
        {   
            
            $$ = new expression();
            $$->instr = nextinstr;
        }
        ;

B: %empty
        {
            
            $$ = new expression();
            $$->nextlist = makelist(nextinstr);
            emit("", "", "", GOTO);
        }
        ;

assignment_expression: 
        conditional_expression
        {}

        | unary_expression assignment_operator assignment_expression
        {

            symbol* sym1 = ST->lookup($1->loc);         
            symbol* sym2 = ST->lookup($3->loc);         
            if($1->fold == 0) {
                if(sym1->type.type != ARRAY)
                    emit($1->loc, $3->loc, "", ASSIGN);
                else
                    emit($1->loc, $3->loc, *($1->folder), ARR_IDX_RES);
            }
            else
                emit(*($1->folder), $3->loc, "", L_DEREF);
            $$ = $1;        
        }
        ;

assignment_operator: 
        ASSIGN_LEX
        {}
        ;

expression: 
        assignment_expression
        {}
        ;


declaration: 
        type_specifier init_declarator_list SEMICOLON
        {

            DataType currType = $1;
            int currSize = -1;
            
            if(currType == INT)
                currSize = __INTEGER_SIZE;
            else if(currType == CHAR)
                currSize = __CHARACTER_SIZE;
            vector<declaration*> decs = *($2);
            for(vector<declaration*>::iterator it = decs.begin(); it != decs.end(); it++) {
                declaration* currDec = *it;
                if(currDec->type == FUNCTION) {
                    ST = &globalSymbolTable;
                    emit(currDec->name, "", "", FUNC_END);
                    symbol* one = ST->lookup(currDec->name);        
                    symbol* two = one->nestedTable->lookup("RETVAL", currType, currDec->pointers);
                    one->size = 0;
                    one->initVal = NULL;
                    continue;
                }

                symbol* three = ST->lookup(currDec->name, currType);        
                three->nestedTable = NULL;
                if(currDec->li == vector<int>() && currDec->pointers == 0) {
                    three->type.type = currType;
                    three->size = currSize;
                    if(currDec->initVal != NULL) {
                        string rval = currDec->initVal->loc;
                        emit(three->name, rval, "", ASSIGN);
                        three->initVal = ST->lookup(rval)->initVal;
                    }
                    else
                        three->initVal = NULL;
                }
                else if(currDec->li != vector<int>()) {         
                    three->type.type = ARRAY;
                    three->type.nextType = currType;
                    three->type.dims = currDec->li;
                    vector<int> temp = three->type.dims;
                    int sz = currSize;
                    for(int i = 0; i < (int)temp.size(); i++)
                        sz *= temp[i];
                    ST->offset += sz;
                    three->size = sz;
                    ST->offset -= 4;
                }
                else if(currDec->pointers != 0) {               
                    three->type.type = POINTER;
                    three->type.nextType = currType;
                    three->type.pointers = currDec->pointers;
                    ST->offset += (__POINTER_SIZE - currSize);
                    three->size = __POINTER_SIZE;
                }
            }
        }

        ;



init_declarator_list: 
        init_declarator
        {
            $$ = new vector<declaration*>;      
            $$->push_back($1);
        }
        | init_declarator_list COMMA init_declarator
        {
            $1->push_back($3);                  
            $$ = $1;
        }
        ;

init_declarator: 
        declarator
        {
            $$ = $1;
            $$->initVal = NULL;         
        }
        | declarator ASSIGN_LEX initializer
        {   
            $$ = $1;
            $$->initVal = $3;           
        }
        ;

type_specifier: 
        VOID_LEX
        {
            $$ = VOID;
        }
        | CHAR_LEX
        {
            $$ = CHAR;
        }
        | INT_LEX
        {
            $$ = INT; 
        }
        ;


declarator: 
        pointer direct_declarator
        {
            $$ = $2;
            $$->pointers = $1;
        }
        | direct_declarator
        {
            $$ = $1;
            $$->pointers = 0;
        }
        ;

intermediate_identifier:
        IDENTIFIER
        {

            $$ = new declaration();
            $$->name = *($1);
        }
        ;

direct_declarator: 
        IDENTIFIER
        {

            $$ = new declaration();
            $$->name = *($1);
        }
        | intermediate_identifier LEFT_SQUARE_BRACKET INTEGER_CONSTANT RIGHT_SQUARE_BRACKET
        {

            $1->type = ARRAY;       
            $1->nextType = INT;     
            $$ = $1;
            
            int index = $3;   

            $$->li.push_back(index);
        }
        | intermediate_identifier LEFT_PARENTHESIS parameter_list_opt RIGHT_PARENTHESIS
        {
            $$ = $1;
            $$->type = FUNCTION;    
            symbol* funcData = ST->lookup($$->name, $$->type);
            symbolTable* funcTable = new symbolTable();
            funcData->nestedTable = funcTable;
            vector<param*> paramList = *($3);   
            for(int i = 0; i < (int)paramList.size(); i++) {
                param* curParam = paramList[i];
                if(curParam->type.type == ARRAY) {          
                    funcTable->lookup(curParam->name, curParam->type.type);
                    funcTable->lookup(curParam->name)->type.nextType = INT;
                    funcTable->lookup(curParam->name)->type.dims.push_back(0);
                }
                else if(curParam->type.type == POINTER) {   
                    funcTable->lookup(curParam->name, curParam->type.type);
                    funcTable->lookup(curParam->name)->type.nextType = INT;
                    funcTable->lookup(curParam->name)->type.dims.push_back(0);
                }
                else                                        
                    funcTable->lookup(curParam->name, curParam->type.type);
            }
            ST = funcTable;         
            emit($$->name, "", "", FUNC_BEG);
        }
        ;

parameter_list_opt:
        parameter_list
        {}
        | %empty
        {
            $$ = new vector<param*>;
        }
        ;

pointer: 
        MULTIPLICATION
        {
            $$ = 1;
        }
        ;

parameter_list: 
        parameter_declaration
        {
            $$ = new vector<param*>;         
            $$->push_back($1);              
        }
        | parameter_list COMMA parameter_declaration
        {
            $1->push_back($3);              
            $$ = $1;
        }
        ;
intermediate_declarator:
        pointer intermediate_identifier
        {
            $$ = $2;
            $$->pointers = $1;
        }
        | intermediate_identifier
        {
            $$ = $1;
            $$->pointers = 0;
        }
        ;

parameter_declaration: 
        type_specifier intermediate_declarator
        {
            $$ = new param();
            $$->name = $2->name;
            if($2->type == ARRAY) {
                $$->type.type = ARRAY;
                $$->type.nextType = $1;
            }
            else if($2->pc != 0) {
                $$->type.type = POINTER;
                $$->type.nextType = $1;
            }
            else
                $$->type.type = $1;
        }
        | type_specifier
        {}
        ;


initializer: 
        assignment_expression
        {
            $$ = $1;   
        }
        ;


statement: 
        compound_statement{}
        | expression_statement{}
        | selection_statement{}
        | iteration_statement{}
        | jump_statement{}
        ;



compound_statement: 
        LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET
        {}
        | LEFT_CURLY_BRACKET block_item_list RIGHT_CURLY_BRACKET
        {

            $$ = $2;
        }
        ;

block_item_list: 
        block_item
        {
            $$ = $1;    
            backpatch($1->nextlist, nextinstr);
        }
        | block_item_list A block_item
        {   
            $$ = new expression();
            backpatch($1->nextlist, $2->instr);    
            $$->nextlist = $3->nextlist;
        }
        ;

block_item: 
        declaration
        {
            $$ = new expression();   
        }
        | statement{}
        ;

expression_statement: 
        expression SEMICOLON
        {}
        | SEMICOLON
        {
            $$ = new expression();  
        }
        ;

selection_statement: 
        IF LEFT_PARENTHESIS expression B RIGHT_PARENTHESIS A statement B
        {
            backpatch($4->nextlist, nextinstr);         
            convertIntToBool($3);                       
            backpatch($3->truelist, $6->instr);         
            $$ = new expression();                      
            
            $7->nextlist = merge($8->nextlist, $7->nextlist);
            $$->nextlist = merge($3->falselist, $7->nextlist);
        }
        | IF LEFT_PARENTHESIS expression B RIGHT_PARENTHESIS A statement B ELSE A statement B
        {
            backpatch($4->nextlist, nextinstr);         
            convertIntToBool($3);                       
            backpatch($3->truelist, $6->instr);         
            backpatch($3->falselist, $10->instr);
            $$ = new expression();                      
            
            $$->nextlist = merge($7->nextlist, $8->nextlist);
            $$->nextlist = merge($$->nextlist, $11->nextlist);
            $$->nextlist = merge($$->nextlist, $12->nextlist);
        }
        ;

iteration_statement: 
         FOR LEFT_PARENTHESIS expression_statement A expression_statement B A expression B RIGHT_PARENTHESIS A statement
        {
            $$ = new expression();                   
            emit("", "", "", GOTO);
            $12->nextlist = merge($12->nextlist, makelist(nextinstr - 1));
            backpatch($12->nextlist, $7->instr);    
            backpatch($9->nextlist, $4->instr);     
            backpatch($6->nextlist, nextinstr);     
            convertIntToBool($5);                   
            backpatch($5->truelist, $11->instr);    
            $$->nextlist = $5->falselist;           
        }
        ;

jump_statement: 
        RETURN_LEX SEMICOLON
        {
            if(ST->lookup("RETVAL")->type.type == VOID) {
                emit("", "", "", RETURN);           
            }
            $$ = new expression();
        }
        | RETURN_LEX expression SEMICOLON
        {
            if(ST->lookup("RETVAL")->type.type == ST->lookup($2->loc)->type.type) {
                emit($2->loc, "", "", RETURN);      
            }
            $$ = new expression();
        }
        ;

translation_unit: 
        external_declaration
        {}
        | translation_unit external_declaration
        {}

        ;

external_declaration: 
        function_definition
        {}
        | declaration
        {}
        ;

function_definition: 
        type_specifier declarator declaration_list compound_statement
        {}
        | function_prototype compound_statement
        {
            ST = &globalSymbolTable;                     
            emit($1->name, "", "", FUNC_END);
        }
        ;

function_prototype:
        type_specifier declarator
        {
            DataType currType = $1;
            int currSize = -1;
            if(currType == CHAR)
                currSize = __CHARACTER_SIZE;
            if(currType == INT)
                currSize = __INTEGER_SIZE;
            declaration* currDec = $2;
            symbol* sym = globalSymbolTable.lookup(currDec->name);
            if(currDec->type == FUNCTION) {
                symbol* retval = sym->nestedTable->lookup("RETVAL", currType, currDec->pointers);   
                sym->size = 0;
                sym->initVal = NULL;
            }
            $$ = $2;
        }
        ;

declaration_list: 
        declaration
        {}
        | declaration_list declaration
        {}

        ;

%%

void yyerror(string s) {
    cout << "ERROR -> " << s << endl;
    cout << "Line: " << yylineno << endl;
    cout << "Can't Parse -> " << yytext << " <--" << endl; 
}

