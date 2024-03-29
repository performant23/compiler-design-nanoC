#include <iostream>
#include <vector>
#include <list>
#include <string>

#ifndef __31_A4_TRANSLATOR_H__
#define __31_A4_TRANSLATOR_H__

using namespace std;

#define _SIZE_VOID      0
#define _SIZE_CHAR      1
#define _SIZE_INT       4
#define _SIZE_POINTER   4
#define _SIZE_FUNCTION  0

class symbolTableInit;
class symbolTableData;
class SymbolTable;
class Quad;
class quadArray;

extern symbolTableInit* currentSymbol;
extern SymbolTable* globalSymbolTable;
extern SymbolTable* currentSymbolTable;
extern quadArray quadrupleArray;
extern int symbolTableCounter;
extern string currentBlock;
extern char* yytext;
extern int yyparse();

class symbolTableData {
public:
    string type;
    int width;
    symbolTableData* arrElementType;

    symbolTableData(string type_, symbolTableData* arrElementType_ = NULL, int width_ = 1);
};

class symbolTableInit {
public:
    string name;
    symbolTableData* symbolTableEntryType;
    string val;
    int size;
    int offset;
    SymbolTable* nestedTable;

    symbolTableInit(string name_, string sym_type_ = "int", symbolTableData* arrType_ = NULL, int width_ = 0);
    symbolTableInit* update_symbol(symbolTableData* type_new);
};

class SymbolTable {
public:
    string name;
    int temporaryVariablesST;
    list<symbolTableInit> symTable;
    SymbolTable* parent;

    SymbolTable(string name_ = "NULL");

    symbolTableInit* findInCurrent(string name_);

    symbolTableInit* lookup(string name_);

    symbolTableInit* createNewSymbol(string name, symbolTableData *t);

    void initializeSymbol(symbolTableInit *sym, string initial_val);

    void addSymbolToTable(symbolTableInit *sym);

    symbolTableInit* gentemp(symbolTableData *t, string initial_val = "");

    void print();
    void printHeader();

    void update();
};


class Quad {
public:
    string op;
    string arg1;
    string arg2;
    string result;

    Quad(string res, string arg1_, string operation = "=", string arg2_ = "");
    Quad(string res, int arg1_, string operation = "=", string arg2_ = "");
    Quad(string res, float arg1_, string operation = "=", string arg2_ = "");

    int print_quad();
};

class quadArray {
public:
    vector<Quad> quads;
    void printQuadArray();
    int print();
};

class Array {
public:
    string arrayType;
    symbolTableInit* STaddress;
    symbolTableInit* array;
    symbolTableData* type;
};

class Statement {
public:
    list<int> nextlist;
};

class Expression {
public:
    string type;
    symbolTableInit* STaddress;
    list<int> truelist;
    list<int> falselist;
    list<int> nextlist;
};

list<int> makelist(int i);
list<int> merge(list<int>& list1, list<int>& list2);
void backpatch(list<int> l, int address);
void emit(string op, string result, string arg1 = "", string arg2 = "");
void emit(string op, string result, int arg1, string arg2 = "");
void emit(string op, string result, float arg1, string arg2 = "");
int typecheck(symbolTableInit*& s1, symbolTableInit*& s2);
int typecheck(symbolTableData* t1, symbolTableData* t2);
string getSymbolTableDataDescription(symbolTableData* t);
Expression* intToBoolConversion(Expression* expr);
Expression* boolToIntConversion(Expression* expr);
void replaceActiveSymbolTable(SymbolTable* new_table);
int nextinstr();
int getSize(symbolTableData* t);
symbolTableInit* convertType(symbolTableInit* s, string t);

#endif