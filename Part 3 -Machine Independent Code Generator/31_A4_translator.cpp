#include <map>
#include <iomanip>
using namespace std;

#ifndef __31_A4_TRANSLATOR_H__
#define __31_A4_TRANSLATOR_H__

#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

#define _SIZE_VOID 0
#define _SIZE_CHAR 1
#define _SIZE_INT 4
#define _SIZE_POINTER 4
#define _SIZE_FUNCTION 0

class symbolTableInit;
class symbolTableData;
class SymbolTable;
class Quad;
class quadArray;

extern symbolTableInit *currentSymbol;
extern SymbolTable *globalSymbolTable;
extern SymbolTable *currentSymbolTable;
extern quadArray quadrupleArray;
extern int symbolTableCounter;
extern string currentBlock;

extern char *yytext;
extern int yyparse();

class symbolTableData
{
public:
    string type;
    int width;
    symbolTableData *arrElementType;
    symbolTableData(string type_, symbolTableData *arrElementType_ = NULL, int width_ = 1);
};

class symbolTableInit
{
public:
    string name;
    symbolTableData *symbolTableEntryType;
    string val;
    int size;
    int offset;
    SymbolTable *nestedTable;
    symbolTableInit(string name_, string sym_type_ = "int", symbolTableData *arrType_ = NULL, int width_ = 0);
    symbolTableInit *update_symbol(symbolTableData *type_new);
};

class SymbolTable
{
public:
    string name;
    int temporaryVariablesST;
    list<symbolTableInit> symTable;
    SymbolTable *parent;

    SymbolTable(string name_ = "NULL");

    symbolTableInit *findInCurrent(string name_);

    symbolTableInit *lookup(string name_);

    symbolTableInit *createNewSymbol(string name, symbolTableData *t);

    void initializeSymbol(symbolTableInit *sym, string initial_val);

    void addSymbolToTable(symbolTableInit *sym);

    symbolTableInit *gentemp(symbolTableData *t, string initial_val = "");

    void printHeader();
    void print();

    void update();
};

class Quad
{
public:
    string op;
    string arg1;
    string arg2;
    string result;
    Quad(string res, string arg1_, string operation = "=", string arg2_ = "");
    Quad(string res, int arg1_, string operation = "=", string arg2_ = "");
    int print_quad();
};

class quadArray
{
public:
    vector<Quad> quads;
    int print();
    void printQuadArray();
};

class Array
{
public:
    string arrayType;
    symbolTableInit *STaddress;
    symbolTableInit *array;
    symbolTableData *type;
};

class Statement
{
public:
    list<int> nextlist;
};

class Expression
{
public:
    string type;
    symbolTableInit *STaddress;
    list<int> truelist;
    list<int> falselist;
    list<int> nextlist;
};

list<int> makelist(int i);
list<int> merge(list<int> &list1, list<int> &list2);
void backpatch(list<int> l, int address);
void emit(string op, string result, string arg1 = "", string arg2 = "");
void emit(string op, string result, int arg1, string arg2 = "");
int typecheck(symbolTableInit *&s1, symbolTableInit *&s2);
int typecheck(symbolTableData *t1, symbolTableData *t2);
string getSymbolTableDataDescription(symbolTableData *t);
Expression *intToBoolConversion(Expression *expr);
Expression *boolToIntConversion(Expression *expr);
void replaceActiveSymbolTable(SymbolTable *new_table);
int nextinstr();
int getSize(symbolTableData *t);
symbolTableInit *convertType(symbolTableInit *s, string t);

#endif

symbolTableInit *currentSymbol;
SymbolTable *globalSymbolTable;
SymbolTable *currentSymbolTable;
quadArray quadrupleArray;
int symbolTableCounter;
string currentBlock;
string prevType;

symbolTableData::symbolTableData(string type_, symbolTableData *arrType_, int width_) : type(type_), arrElementType(arrType_), width(width_) {}

symbolTableInit::symbolTableInit(string name_, string type_, symbolTableData *arrType_, int width) : name(name_), val("-"), offset(0), nestedTable(NULL)
{
    symbolTableEntryType = new symbolTableData(type_, arrType_, width);
    size = getSize(symbolTableEntryType);
}

symbolTableInit *symbolTableInit::update_symbol(symbolTableData *type_)
{
    symbolTableEntryType = type_;
    size = getSize(type_);
    return this;
}

SymbolTable::SymbolTable(string name_) : name(name_), temporaryVariablesST(0) {}

symbolTableInit *SymbolTable::findInCurrent(string name_)
{
    for (auto it = symTable.begin(); it != symTable.end(); ++it)
    {
        if (it->name == name_)
        {
            return &(*it);
        }
    }
    return NULL;
}

symbolTableInit *SymbolTable::lookup(string name_)
{
    symbolTableInit *s = findInCurrent(name_);
    if (s != NULL)
    {
        return s;
    }

    if (parent != NULL)
    {
        s = parent->lookup(name_);
    }

    if (currentSymbolTable == this && s == NULL)
    {
        symTable.push_back(symbolTableInit(name_));
        return &(symTable.back());
    }

    return s;
}

symbolTableInit *SymbolTable::createNewSymbol(string name, symbolTableData *t)
{
    symbolTableInit *sym = new symbolTableInit(name);
    sym->symbolTableEntryType = t;
    return sym;
}

void SymbolTable::initializeSymbol(symbolTableInit *sym, string initial_val)
{
    sym->val = initial_val;
    sym->size = getSize(sym->symbolTableEntryType);
}

void SymbolTable::addSymbolToTable(symbolTableInit *sym)
{
    symTable.push_back(*sym);
}

symbolTableInit *SymbolTable::gentemp(symbolTableData *t, string initial_val)
{
    string name = "t" + to_string(temporaryVariablesST++);
    symbolTableInit *sym = createNewSymbol(name, t);
    initializeSymbol(sym, initial_val);
    addSymbolToTable(sym);
    return &symTable.back();
}

void SymbolTable::printHeader()
{
    cout << "--------------------";
    cout << "\n";
    cout << "ST: " << setfill(' ') << left << setw(20) << this->name << ", Parent : " << setfill(' ') << left << setw(20) << ((this->parent != NULL) ? this->parent->name : "NULL") << "\n";
    cout << "--------------------";
    cout << "\n";
    cout << setfill(' ') << left << setw(25) << "name";
    cout << left << setw(25) << "type";
    cout << left << setw(25) << "initial value";
    cout << left << setw(15) << "size";
    cout << left << setw(15) << "offset";
    cout << left << "nested symbol table";
    cout << "\n";
}

void SymbolTable::print()
{
    printHeader();

    list<SymbolTable *> tableList;

    auto it = this->symTable.begin();
    while (it != this->symTable.end())
    {
        cout << left << setw(25) << it->name;
        cout << left << setw(25) << getSymbolTableDataDescription(it->symbolTableEntryType);
        cout << left << setw(25) << (it->val != "" ? it->val : "-");
        cout << left << setw(15) << it->size;
        cout << left << setw(15) << it->offset;
        cout << left;

        if (it->nestedTable != NULL)
        {
            cout << it->nestedTable->name << "\n";
            tableList.push_back(it->nestedTable);
        }
        else
        {
            cout << "NULL"
                 << "\n";
        }
        it++;
    }
    cout << "\n"
         << "\n";

    list<SymbolTable *>::iterator it1 = tableList.begin();
    while (it1 != tableList.end())
    {
        (*it1)->print();
        it1++;
    }
}

void SymbolTable::update()
{
    list<SymbolTable *> tableList;
    int offset_;

    auto it = symTable.begin();
    while (it != symTable.end())
    {
        if (it != symTable.begin())
        {
            it->offset = offset_;
            offset_ = it->offset + it->size;
        }
        else
        {
            it->offset = 0;
            offset_ = it->size;
        }

        if (it->nestedTable != NULL)
        {
            tableList.push_back(it->nestedTable);
        }
        it++;
    }

    auto iter = tableList.begin();
    while (iter != tableList.end())
    {
        (*iter)->update();
        iter++;
    }
}

Quad::Quad(string res, string arg1_, string operation, string arg2_) : result(res), arg1(arg1_), op(operation), arg2(arg2_) {}

Quad::Quad(string res, int arg1_, string operation, string arg2_) : result(res), op(operation), arg2(arg2_)
{
    arg1 = to_string(arg1_);
}

int Quad::print_quad()
{
    string pRemover = "";
    if (op != "=")
    {
        if (op != "=[]")
        {
            if (op != "*=")
            {
                if (op != "[]=")
                {
                    if (op == "goto" || op == "param" || op == "return")
                        pRemover = op + " " + result;
                    else if (op == "call")
                        pRemover = result + " = " + "call " + arg1 + ", " + arg2;
                    else if (op == "label")
                        pRemover = result + ": ";
                    else if (op == "= &" || op == "= *" || op == "= -" || op == "= !")
                        pRemover = result + " " + op + arg1;
                    else if (op == "+" || op == "-" || op == "*" || op == "/" || op == "%" || op == "|" || op == "&")
                        pRemover = result + " = " + arg1 + " " + op + " " + arg2;
                    else if (op == "==" || op == "!=" || op == "<" || op == ">" || op == "<=" || op == ">=")
                        pRemover = "if " + arg1 + " " + op + " " + arg2 + " goto " + result;
                    else
                        pRemover = "Invalid operator";
                }
                else
                    pRemover = result + "[" + arg1 + "]" + " = " + arg2;
            }
            else
                pRemover = "*" + result + " = " + arg1;
        }
        else
            pRemover = result + " = " + arg1 + "[" + arg2 + "]";
    }
    else
        pRemover = result + " = " + arg1;
    cout << pRemover;
    return 1;
}

void quadArray::printQuadArray()
{
    cout << "\n";

    int count = 0;
    auto it = this->quads.begin();
    while (it != this->quads.end())
    {
        if (it->op != "label")
        {
            cout << left << setw(4) << count << ":\t";
            it->print_quad();
        }
        else
        {
            cout << "\n"
                 << left << setw(4) << count << ":\t";
            it->print_quad();
        }
        cout << endl;
        it++;
        count++;
    }
}

int quadArray::print()
{
    printQuadArray();
    return 1;
}

list<int> makelist(int i)
{
    list<int> l(1, i);
    return l;
}

list<int> merge(list<int> &list1, list<int> &list2)
{
    list1.merge(list2);
    return list1;
}

void backpatch(list<int> l, int address)
{
    auto it = l.begin();
    while (it != l.end())
    {
        quadrupleArray.quads[*it].result = to_string(address);
        it++;
    }
}

void emit(string op, string result, string arg1, string arg2)
{
    Quad *q = new Quad(result, arg1, op, arg2);
    quadrupleArray.quads.push_back(*q);
}

void emit(string op, string result, int arg1, string arg2)
{
    Quad *q = new Quad(result, arg1, op, arg2);
    quadrupleArray.quads.push_back(*q);
}

int typecheck(symbolTableInit *&s1, symbolTableInit *&s2)
{
    symbolTableData *t1 = s1->symbolTableEntryType;
    symbolTableData *t2 = s2->symbolTableEntryType;

    if (typecheck(t1, t2))
        return 1;
    if (s1 = convertType(s1, t2->type))
        return 1;
    if (s2 = convertType(s2, t1->type))
        return 1;
    return 0;
}

int typecheck(symbolTableData *t1, symbolTableData *t2)
{
    if (t1 == NULL && t2 == NULL)
        return 1;
    if (t1 == NULL)
        return 0;
    if (t2 == NULL)
        return 0;
    if (t1->type != t2->type)
        return 0;

    return typecheck(t1->arrElementType, t2->arrElementType);
}

string getTypeDescription(symbolTableData *type_)
{
    if (type_->type == "void" || type_->type == "char" || type_->type == "int" || type_->type == "block" || type_->type == "func")
        return type_->type;
    else if (type_->type == "ptr")
        return "ptr(" + getSymbolTableDataDescription(type_->arrElementType) + ")";
    else if (type_->type == "arr")
        return "arr(" + to_string(type_->width) + ", " + getSymbolTableDataDescription(type_->arrElementType) + ")";
    else
        return "unknown";
}

string getSymbolTableDataDescription(symbolTableData *type_)
{
    if (type_ == NULL)
        return "null";
    else
        return getTypeDescription(type_);
}

Expression *intToBoolConversion(Expression *expr)
{
    if (expr->type == "bool")
        ;
    else
    {
        expr->falselist = makelist(nextinstr());
        emit("==", expr->STaddress->name, "0");
        expr->truelist = makelist(nextinstr());
        emit("goto", "");
    }
    return expr;
}

Expression *boolToIntConversion(Expression *expr)
{
    if (expr->type != "bool")
        ;
    else if (expr->type == "bool")
    {
        expr->STaddress = currentSymbolTable->gentemp(new symbolTableData("int"));
        backpatch(expr->truelist, nextinstr());
        emit("=", expr->STaddress->name, "true");
        emit("goto", to_string(nextinstr() + 1));
        backpatch(expr->falselist, nextinstr());
        emit("=", expr->STaddress->name, "false");
    }
    return expr;
}

void replaceActiveSymbolTable(SymbolTable *newTable)
{
    currentSymbolTable = newTable;
}

int nextinstr()
{
    int x = quadrupleArray.quads.size();
    return x;
}

int getSize(symbolTableData *t)
{
    int ty = -1;
    if (t->type == "void")
        ty = 0;
    if (t->type == "char")
        ty = 1;
    if (t->type == "int")
        ty = 2;
    if (t->type == "ptr")
        ty = 3;
    if (t->type == "func")
        ty = 4;

    int ret = -1;

    switch (ty)
    {
    case 0:
        ret = _SIZE_VOID;
        break;

    case 1:
        ret = _SIZE_CHAR;
        break;

    case 2:
        ret = _SIZE_INT;
        break;

    case 3:
        ret = _SIZE_POINTER;
        break;

    case 4:
        ret = _SIZE_FUNCTION;
        break;

    default:
        ret = -1;
    }
    return ret;
}

symbolTableInit *convertType(symbolTableInit *s, string t)
{
    symbolTableInit *temp = currentSymbolTable->gentemp(new symbolTableData(t));

    if (s->symbolTableEntryType->type != "int")
    {
        if (s->symbolTableEntryType->type != "char")
            ;
        else
        {
            if (t == "int")
            {
                emit("=", temp->name, "char2int(" + s->name + ")");
                return temp;
            }
            return s;
        }
    }
    else
    {
        if (t == "char")
        {
            emit("=", temp->name, "int2char(" + s->name + ")");
            return temp;
        }
        return s;
    }

    return s;
}

int main()
{
    symbolTableCounter = 0;
    globalSymbolTable = new SymbolTable("Global");
    currentSymbolTable = globalSymbolTable;
    currentBlock = "";

    yyparse();
    globalSymbolTable->update();
    quadrupleArray.print();
    cout << "\n";
    globalSymbolTable->print();

    return 0;
}
