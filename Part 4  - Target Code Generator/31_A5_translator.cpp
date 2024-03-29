
#include "31_A5_translator.h"
#include <iomanip>
using namespace std;


int nextinstr = 0;


int symbolTable::tempCount = 0;

quadArray quadArr;
symbolTable globalSymbolTable;
symbolTable* ST;



void symbolValue::constructorInit(int val) {
    c = val;
    f = val;
    i = val;
    p = NULL;
}

void symbolValue::constructorInit(char val) {
    c = val;
    f = val;
    i = val;
    p = NULL;
}

void symbolValue::constructorInit(float val) {
    c = val;
    f = val;
    i = val;
    p = NULL;
}



symbol::symbol(): nestedTable(NULL) {}



symbolTable::symbolTable(): offset(0) {}

symbol* symbolTable::createSymbol(string name, DataType t, int pc) {
    symbol* sym = new symbol();
    sym->name = name;
    sym->type.type = t;
    sym->offset = offset;
    sym->initVal = NULL;

    if(pc != 0) {
        sym->size = __POINTER_SIZE;
        sym->type.nextType = t;
        sym->type.pointers = pc;
        sym->type.type = ARRAY;
    }
    else {
        sym->size = sizeOfType(t);
        offset += sym->size;
    }
    symbols.push_back(sym);
    table[name] = sym;

    return sym;
}

symbol* symbolTable::lookup(string name, DataType t, int pc) {
    if(table.count(name) == 0) {
        return createSymbol(name, t, pc);
    }
    return table[name];
}



symbol* symbolTable::searchForSymbol(string name) {
    return (table.count(name) ? table[name] : NULL);
}


string symbolTable::gentemp(DataType t) {
    
    string tempName = "t" + to_string(symbolTable::tempCount++);
    
    
    symbol* sym = new symbol();
    sym->name = tempName;
    sym->size = sizeOfType(t);
    sym->offset = offset;
    sym->type.type = t;
    sym->initVal = NULL;

    offset += sym->size;
    symbols.push_back(sym);
    table[tempName] = sym;  

    return tempName;
}


void printLine(int count) {
    for(int i = 0; i < count; i++)
        cout << '-';
    cout << "\n";
}

void printHeader() {
    
    cout << setfill(' ') << left << setw(25) <<  "Name";
    cout << left << setw(25) << "Type";
    cout << left << setw(20) << "Initial Value";
    cout << left << setw(15) << "Size";
    cout << left << setw(15) << "Offset";
    cout << left << "Nested Symbol Table" << "\n";
}

vector<pair<string, symbolTable*>> printSymbols(vector<symbol*> symbols, string tableName) {
    
    vector<pair<string, symbolTable*>> tableList;

    
    for(int i = 0; i < (int)symbols.size(); i++) {
        symbol* sym = symbols[i];
        cout << left << setw(25) << sym->name;
        cout << left << setw(25) << checkType(sym->type);
        cout << left << setw(20) << getInitVal(sym);
        cout << left << setw(15) << sym->size;
        cout << left << setw(15) << sym->offset;
        cout << left;

        if(sym->nestedTable != NULL) {
            string nestedTableName = tableName + "." + sym->name;
            cout << nestedTableName << "\n";
            tableList.push_back({nestedTableName, sym->nestedTable});
        }
        else
            cout << "NULL" << "\n";
    }

    return tableList;
}

void symbolTable::print(string tableName) {
    printLine(150);
    cout << tableName << "\n";
    printLine(150);
    printHeader();
    printLine(150);

    vector<pair<string, symbolTable*>> tableList = printSymbols(symbols, tableName);

    printLine(150);
    cout << "\n";

    
    for(auto p : tableList) {
        p.second->print(p.first);
    }
}



quad::quad(string res_, string arg1_, string arg2_, opcode op_): op(op_), arg1(arg1_), arg2(arg2_), result(res_) {}

string getBinaryOperator(int op) {
    if (op == ADD) {
        return "+";
    } else if (op == SUB) {
        return "-";
    } else if (op == MULT) {
        return "*";
    } else if (op == DIV) {
        return "/";
    } else if (op == MOD) {
        return "%";
    } else if (op == SL) {
        return "<<";
    } else if (op == SR) {
        return ">>";
    } else if (op == BW_AND) {
        return "&";
    } else if (op == BW_OR) {
        return "|";
    } else if (op == BW_XOR) {
        return "^";
    }
    return "";
}

string getUnaryOperator(int op) {
    if (op == BW_U_NOT) {
        return "~";
    } else if (op == U_PLUS) {
        return "+";
    } else if (op == U_MINUS) {
        return "-";
    } else if (op == REFERENCE) {
        return "&";
    } else if (op == DEREFERENCE) {
        return "*";
    } else if (op == U_NEG) {
        return "!";
    }
    return "";
}

string getConditionalOperator(int op) {
    if (op == GOTO_EQ) {
        return "==";
    } else if (op == GOTO_NEQ) {
        return "!=";
    } else if (op == GOTO_GT) {
        return ">";
    } else if (op == GOTO_GTE) {
        return ">=";
    } else if (op == GOTO_LT) {
        return "<";
    } else if (op == GOTO_LTE) {
        return "<=";
    } else if (op == IF_GOTO) {
        return "!= 0";
    } else if (op == IF_FALSE_GOTO) {
        return "== 0";
    }
    return "";
}

string getTypeConversionFunction(int op) {
    if (op == CtoI) {
        return "CharToInt";
    } else if (op == ItoC) {
        return "IntToChar";
    } else if (op == FtoI) {
        return "FloatToInt";
    } else if (op == ItoF) {
        return "IntToFloat";
    } else if (op == FtoC) {
        return "FloatToChar";
    } else if (op == CtoF) {
        return "CharToFloat";
    }
    return "";
}

string quad::print() {
    string out = "";
    if(op >= ADD && op <= BW_XOR) {                 
        out += (result + " = " + arg1 + " " + getBinaryOperator(op) + " " + arg2);
    }
    else if(op >= BW_U_NOT && op <= U_NEG) {        
        out += (result + " = " + getUnaryOperator(op) + arg1);
    }
    else if(op >= GOTO_EQ && op <= IF_FALSE_GOTO) { 
        out += ("if " + arg1 + " " + getConditionalOperator(op) + " " + arg2 + " goto " + result);
    }
    else if(op >= CtoI && op <= CtoF) {             
        out += (result + " = " + getTypeConversionFunction(op) + "(" + arg1 + ")");
    }
    else if(op == ASSIGN)                       
        out += (result + " = " + arg1);
    else if(op == GOTO)                         
        out += ("goto " + result);
    else if(op == RETURN)                       
        out += ("return " + result);
    else if(op == PARAM)                        
        out += ("param " + result);
    else if(op == CALL) {                       
        if(arg2.size() > 0)
            out += (arg2 + " = ");
        out += ("call " + result + ", " + arg1);
    }
    else if(op == ARR_IDX_ARG)                  
        out += (result + " = " + arg1 + "[" + arg2 + "]");
    else if(op == ARR_IDX_RES)                  
        out += (result + "[" + arg2 + "] = " + arg1);
    else if(op == FUNC_BEG)                     
        out += (result + ": ");
    else if(op == FUNC_END) {                   
    }
    else if(op == L_DEREF)                      
        out += ("*" + result + " = " + arg1);

    return out;
}



void quadArray::print() {

    cout << "\n";    
    int i=0;
    while(i < (int)quads.size()) {
        if(quads[i].op != FUNC_BEG && quads[i].op != FUNC_END)
            cout << left << setw(4) << i << ":    ";
        else if(quads[i].op == FUNC_BEG)
            cout << "\n" << left << setw(4) << i << ": ";
        else if(quads[i].op == FUNC_END)
            cout << left << setw(4) << i << ": ";
        cout << quads[i].print() << "\n";
        i++;
    }
    cout << "\n";
}



expression::expression(): fold(0), folder(NULL) {}



void emit(string result, string arg1, string arg2, opcode op) {
    quad q(result, arg1, arg2, op);
    quadArr.quads.push_back(q);
    nextinstr++;
}

void emit(string result, int constant, opcode op) {
    quad q(result, to_string(constant), "", op);
    quadArr.quads.push_back(q);
    nextinstr++;
}

void emit(string result, char constant, opcode op) {
    quad q(result, to_string(constant), "", op);
    quadArr.quads.push_back(q);
    nextinstr++;
}

void emit(string result, float constant, opcode op) {
    quad q(result, to_string(constant), "", op);
    quadArr.quads.push_back(q);
    nextinstr++;
}



list<int> makelist(int i) {
    list<int> l(1, i);
    return l;
}


list<int> merge(list<int> list1, list<int> list2) {
    list1.merge(list2);
    return list1;
}


void backpatch(list<int> l, int address) {
    string str = to_string(address);
    list<int>::iterator it = l.begin();
    while(it != l.end()) {
        quadArr.quads[*it].result = str;
        it++;
    }
}



void convertIntToChar(expression* arg, expression* res) {
    emit(arg->loc, res->loc, "", ItoC);
}

void convertCharToInt(expression* arg, expression* res) {
    emit(arg->loc, res->loc, "", CtoI);
}

void convertToType(expression* arg, expression* res, DataType toType) {
    if(res->type == toType)
        return;

    switch (res->type) {
        case INT:
            if(toType == CHAR)
                convertIntToChar(arg, res);
            break;
        case CHAR:
            if(toType == INT)
                convertCharToInt(arg, res);
            break;
        default:
            break;
    }
}

void convertIntToChar(string t, string f) {
    emit(t, f, "", ItoC);
}

void convertCharToInt(string t, string f) {
    emit(t, f, "", CtoI);
}

void convertToType(string t, DataType to, string f, DataType from) {
    if(to == from)
        return;  

    switch (from) {
        case INT:
            if(to == CHAR)
                convertIntToChar(t, f);
            break;
        case CHAR:
            if(to == INT)
                convertCharToInt(t, f);
            break;
        default:
            break;
    }
}


void convertIntToBool(expression* expression_parse) {
    if(expression_parse->type != BOOL) {
        expression_parse->type = BOOL;
        expression_parse->falselist = makelist(nextinstr);    
        emit("", expression_parse->loc, "", IF_FALSE_GOTO);
        expression_parse->truelist = makelist(nextinstr);     
        emit("", "", "", GOTO);
    }
}


int sizeOfType(DataType t) {

    switch (t) {
        case VOID:
            return __VOID_SIZE;
        case CHAR:
            return __CHARACTER_SIZE;
        case INT:
            return __INTEGER_SIZE;
        case POINTER:
            return __POINTER_SIZE;
        case FUNCTION:
            return __FUNCTION_SIZE;
        default:
            return 0;
    }

}


string getPointerType(symbolType t) {
    string tp = "";
    if(t.nextType == CHAR)
        tp += "char";
    else if(t.nextType == INT)
        tp += "int";
    tp += string(t.pointers, '*');
    return tp;
}

string getArrayType(symbolType t) {
    string tp = "";
    if(t.nextType == CHAR)
        tp += "char";
    else if(t.nextType == INT)
        tp += "int";
    vector<int> dim = t.dims;
    for(int i = 0; i < (int)dim.size(); i++) {
        if(dim[i])
            tp += "[" + to_string(dim[i]) + "]";
        else
            tp += "[]";
    }
    if((int)dim.size() == 0)
        tp += "[]";
    return tp;
}

string checkType(symbolType t) {
    switch(t.type) {
        case VOID:
            return "void";
        case CHAR:
            return "char";
        case INT:
            return "int";
        case FUNCTION:
            return "function";
        case POINTER:
            return getPointerType(t);
        case ARRAY:
            return getArrayType(t);
        default:
            return "unknown";
    }
}



string getInitVal(symbol* sym) {
    if(sym->initVal != NULL) {
        switch(sym->type.type) {
            case CHAR:
                return to_string(sym->initVal->c);
            case INT:
                return to_string(sym->initVal->i);
            default:
                return "-";
            }
        
    }
    else{
        return "-";
    }
        
}
