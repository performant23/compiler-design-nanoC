
#include "31_A5_translator.h"
#include <fstream>
#include <sstream>
#include <stack>
using namespace std;


extern symbolTable globalSymbolTable;
extern symbolTable* ST;
extern quadArray quadArr;


vector<string> stringConstant;
map<int, string> labels;
stack<pair<string, int>> params;
int labelCount = 0;
string funcRunning = "";
string assemblyOT;


void printInt(ofstream& sfile, symbol* sym) {
    if(sym->initVal == NULL) 
    {
        sfile << "\t.comm\t" << sym->name << ",4,4" << "\n";
    }
    else
    {
        string toPrint = "";
        toPrint = "\t.globl\t"+sym->name;
        sfile << toPrint << "\n";
        toPrint ="\t.data";
        sfile << toPrint << "\n";
        toPrint = "\t.type\t" + sym->name + ", @object" ;
        sfile << toPrint << "\n";
        toPrint = "\t.size\t" + sym->name + ", 1" ;
        sfile << toPrint << "\n";
        toPrint = sym->name + ":" ;
        sfile << toPrint << "\n";
        toPrint = "\t.byte\t";
        sfile << toPrint << sym->initVal->i << "\n";
    }
}

void printChar(ofstream& sfile, symbol* sym) {
    if(sym->initVal== NULL) 
    {
        sfile << "\t.comm\t" << sym->name << ",1,1" << "\n";
    }
    else
    {
        string toPrint = "";
        toPrint = "\t.globl\t"+sym->name;
        sfile << toPrint << "\n";
        toPrint ="\t.data";
        sfile << toPrint << "\n";
        toPrint = "\t.type\t" + sym->name + ", @object" ;
        sfile << toPrint << "\n";
        toPrint = "\t.size\t" + sym->name + ", 1" ;
        sfile << toPrint << "\n";
        toPrint = sym->name + ":" ;
        sfile << toPrint << "\n";
        toPrint = "\t.byte\t";
        sfile << toPrint << sym->initVal->c << "\n";
    }
}

void globalInfoToAssembly(ofstream& sfile) {
    vector<symbol*>::iterator it = globalSymbolTable.symbols.begin();
    while( it != globalSymbolTable.symbols.end()) {
        symbol* sym = *it;
        if(sym->type.type == INT && sym->name[0] != 't') {
            printInt(sfile, sym);
        }
        else if(sym->type.type == CHAR && sym->name[0] != 't') {
            printChar(sfile, sym);
        }
        it++;
    }
}




void printStrings(ofstream& sfile) {
    sfile << ".section\t.rodata" << "\n";
    int i = 0;
    vector<string>::iterator it = stringConstant.begin(); 
    while(it != stringConstant.end()) {
        sfile << ".LC" << i++ << ":" << "\n";
        sfile << "\t.string " << *it << "\n";
        it++;
    }
}



void generateGotos(vector<quad>::iterator& it) {
    int target = atoi((it->result.c_str()));
    if(!labels.count(target)) {
        string labelName = ".L" + to_string(labelCount++);
        labels[target] = labelName;
    }
    it->result = labels[target];
}

void generateConditionalGotos(vector<quad>::iterator& it) {
    int target = atoi((it->result.c_str()));
    if(!labels.count(target)) {
        string labelName = ".L" + to_string(labelCount++);
        labels[target] = labelName;
    }
    it->result = labels[target];
}

void generateGotoLabels() {
    int i = 0;
    vector<quad>::iterator it = quadArr.quads.begin();
    while( it != quadArr.quads.end()) {
        if(it->op == GOTO) {
            generateGotos(it);
        }
        if(it->op >= GOTO_EQ && it->op <= IF_FALSE_GOTO){
            generateConditionalGotos(it);
        }
        it++;
    }
}




void printTextSection(ofstream& sfile) {
    string toPrint = "\t.text";
    sfile << "\n" << toPrint << "\n";
}

void printGlobalFunc(ofstream& sfile, string funcRunning) {
    string toPrint = "\t.globl\t" + funcRunning;
    sfile << toPrint << "\n";
}

void printFuncType(ofstream& sfile, string funcRunning) {
    sfile << "\t.type\t" << funcRunning << ", @function" << "\n";
}

void printFuncLabel(ofstream& sfile, string funcRunning) {
    string toPrint = funcRunning + ":";
    sfile << toPrint << "\n";
}

void printPushRbp(ofstream& sfile) {
    string toPrint = "\tpushq\t%rbp";
    sfile << toPrint << "\n";
}

void printMovRspRbp(ofstream& sfile) {
    string toPrint = "\tmovq\t%rsp, %rbp";
    sfile << toPrint << "\n";
}

void printSubqRsp(ofstream& sfile, int memBind) {
    int width = 16;
    string toPrint = "\tsubq\t$";
    sfile << toPrint << (memBind / width + 1) * width << ", %rsp" << "\n";
}

void generatePrologueSection(int memBind, ofstream& sfile) {
    printTextSection(sfile);
    printGlobalFunc(sfile, funcRunning);
    printFuncType(sfile, funcRunning);
    printFuncLabel(sfile, funcRunning);
    printPushRbp(sfile);
    printMovRspRbp(sfile);
    printSubqRsp(sfile, memBind);
}

void writeMov(ofstream& sfile, string toPrint1){
     sfile << "\tmovl\t" << toPrint1 << ", %eax" << "\n";
}
void writeCmpl(ofstream& sfile, string toPrint2){
    sfile << "\tcmpl\t" << toPrint2 << ", %eax" << "\n";
}

void writeJump(ofstream& sfile, string str){
    sfile << "\tjmp\t" << str << "\n";
}




void generateTargetCode(ofstream& sfile) {
    globalInfoToAssembly(sfile);
    printStrings(sfile);
    symbolTable* currFuncTable = NULL;
    symbol* currFunc = NULL;
    generateGotoLabels();

    
    for(int i = 0; i < (int)quadArr.quads.size(); i++) {
        
        if(labels.count(i)==0);
        else
            sfile << labels[i] << ":" << "\n";

        
        if(quadArr.quads[i].op != FUNC_BEG);
        else {
            if(quadArr.quads[i+1].op == FUNC_END){i++;continue;}

            currFunc = globalSymbolTable.searchForSymbol(quadArr.quads[i].result);
            currFuncTable = currFunc->nestedTable;
            int takingParam = 1, memBind = 16;
            ST = currFuncTable;
            for(int j = 0; j < (int)currFuncTable->symbols.size(); j++) {
                if(currFuncTable->symbols[j]->name == "RETVAL") {
                    takingParam = 0;
                    memBind = 0;
                    if(currFuncTable->symbols.size() > j + 1)
                        memBind = -currFuncTable->symbols[j + 1]->size;
                }
                else {
                    if(!takingParam) {
                        currFuncTable->symbols[j]->offset = memBind;
                        if(currFuncTable->symbols.size() > j + 1)
                            memBind -= currFuncTable->symbols[j + 1]->size;
                    }
                    else {
                        currFuncTable->symbols[j]->offset = memBind;
                        memBind += 8;
                    }
                }
            }
            if(memBind >= 0)
                memBind = 0;
            else
                memBind *= -1;
            funcRunning = quadArr.quads[i].result;
            generatePrologueSection(memBind, sfile);
        }
        if(quadArr.quads[i].op == FUNC_BEG);
        
        else if(quadArr.quads[i].op == FUNC_END) {
            ST = &globalSymbolTable;
            funcRunning = "";
            sfile << "\tleave" << "\n";
            sfile << "\tret" << "\n";
            sfile << "\t.size\t" << quadArr.quads[i].result << ", .-" << quadArr.quads[i].result << "\n";
        }

        if(funcRunning != "")
        {
            quad q = quadArr.quads[i];
            string strLabel = q.result;
            bool hasStrLabel = (q.result[0] == '.' && q.result[1] == 'L' && q.result[2] == 'C');
            string toPrint1 = "", toPrint2 = "", toPrintRes = "";
            int off1 = 0, off2 = 0, offRes = 0;

            symbol* loc1 = ST->lookup(q.arg1);
            symbol* loc2 = ST->lookup(q.arg2);
            symbol* loc3 = ST->lookup(q.result);
            symbol* glb1 = globalSymbolTable.searchForSymbol(q.arg1);
            symbol* glb2 = globalSymbolTable.searchForSymbol(q.arg2);
            symbol* glb3 = globalSymbolTable.searchForSymbol(q.result);

            if(ST != &globalSymbolTable) {
                if(glb1 == NULL)
                    off1 = loc1->offset;
                if(glb2 == NULL)
                    off2 = loc2->offset;
                if(glb3 == NULL)
                    offRes = loc3->offset;

                if(q.arg1[0] < '0' || q.arg1[0] > '9') {
                    if(glb1 != NULL)
                        toPrint1 = q.arg1 + "(%rip)";
                    else
                        toPrint1 = to_string(off1) + "(%rbp)";
                }
                if(q.arg2[0] < '0' || q.arg2[0] > '9') {
                    if(glb2 != NULL)
                        toPrint2 = q.arg2 + "(%rip)";
                    else
                        toPrint2 = to_string(off2) + "(%rbp)";
                }
                if(q.result[0] < '0' || q.result[0] > '9') {
                    if(glb3 != NULL)
                        toPrintRes = q.result + "(%rip)";
                    else
                        toPrintRes = to_string(offRes) + "(%rbp)";
                }
            }
            else {
                toPrint1 = q.arg1;
                toPrint2 = q.arg2;
                toPrintRes = q.result;
            }

            if(hasStrLabel)
                toPrintRes = strLabel;

            if(q.op == ASSIGN) {
                if(q.result[0] != 't' || loc3->type.type == INT || loc3->type.type == POINTER) {
                    if(loc3->type.type != POINTER) {
                        if(q.arg1[0] < '0' || q.arg1[0] > '9')
                        {
                           writeMov(sfile, toPrint1);
                            sfile << "\tmovl\t%eax, " << toPrintRes << "\n"; 
                        }
                        else
                            sfile << "\tmovl\t$" << q.arg1 << ", " << toPrintRes << "\n";
                    }
                    else {
                        sfile << "\tmovq\t" << toPrint1 << ", %rax" << "\n";
                        sfile << "\tmovq\t%rax, " << toPrintRes << "\n"; 
                    }
                }
                else {
                    int temp = q.arg1[0];
                    sfile << "\tmovb\t$" << temp << ", " << toPrintRes << "\n";
                }
            }
            else if(q.op == U_MINUS) {
               writeMov(sfile, toPrint1);
                sfile << "\tnegl\t%eax" << "\n";
                sfile << "\tmovl\t%eax, " << toPrintRes << "\n";
            }
            else if(q.op == ADD) {
                if(q.arg1[0] > '0' && q.arg1[0] <= '9')
                    sfile << "\tmovl\t$" << q.arg1 << ", %eax" << "\n";
                else
                   writeMov(sfile, toPrint1); 
                if(q.arg2[0] > '0' && q.arg2[0] <= '9')
                    sfile << "\tmovl\t$" << q.arg2 << ", %edx" << "\n";
                else
                    sfile << "\tmovl\t" << toPrint2 << ", %edx" << "\n"; 
                sfile << "\taddl\t%edx, %eax" << "\n";
                sfile << "\tmovl\t%eax, " << toPrintRes << "\n";
            }
            else if(q.op == SUB) {
                if(q.arg1[0] > '0' && q.arg1[0] <= '9')
                    sfile << "\tmovl\t$" << q.arg1 << ", %edx" << "\n";
                else
                    sfile << "\tmovl\t" << toPrint1 << ", %edx" << "\n"; 
                if(q.arg2[0]>'0' && q.arg2[0]<='9')
                    sfile << "\tmovl\t$" << q.arg2 << ", %eax" << "\n";
                else
                    sfile << "\tmovl\t" << toPrint2 << ", %eax" << "\n"; 
                sfile << "\tsubl\t%eax, %edx" << "\n";
                sfile << "\tmovl\t%edx, %eax" << "\n";
                sfile << "\tmovl\t%eax, " << toPrintRes << "\n";
            }
            else if(q.op == MULT) {
                if(q.arg1[0] > '0' && q.arg1[0] <= '9')
                    sfile << "\tmovl\t$" << q.arg1 << ", %eax" << "\n";
                else
                   writeMov(sfile, toPrint1); 
                sfile << "\timull\t";
                if(q.arg2[0] > '0' && q.arg2[0] <= '9')
                    sfile << "$" << q.arg2 << ", %eax" << "\n";
                else
                    sfile << toPrint2 << ", %eax" << "\n";
                sfile << "\tmovl\t%eax, " << toPrintRes << "\n";
            }
            else if(q.op == DIV) {
               writeMov(sfile, toPrint1);
                sfile << "\tcltd\n\tidivl\t" << toPrint2 << "\n";
                sfile << "\tmovl\t%eax, " << toPrintRes << "\n";
            }
            else if(q.op == MOD) {
               writeMov(sfile, toPrint1);
                sfile << "\tcltd\n\tidivl\t" << toPrint2 << "\n";
                sfile << "\tmovl\t%edx, " << toPrintRes << "\n";
            }
            else if(q.op == GOTO)
                writeJump(sfile, q.result);
            else if(q.op == GOTO_LT) {
               writeMov(sfile, toPrint1);
                writeCmpl(sfile, toPrint2);
                sfile << "\tjge\t.L" << labelCount << "\n";
                writeJump(sfile, q.result);
                sfile << ".L" << labelCount++ << ":" << "\n";
            }
            else if(q.op == GOTO_GT) {
               writeMov(sfile, toPrint1);
                writeCmpl(sfile, toPrint2);
                sfile << "\tjle\t.L" << labelCount << "\n";
                writeJump(sfile, q.result);
                sfile << ".L" << labelCount++ << ":" << "\n";
            }
            else if(q.op == GOTO_GTE) {
               writeMov(sfile, toPrint1);
                writeCmpl(sfile, toPrint2);
                sfile << "\tjl\t.L" << labelCount << "\n";
                writeJump(sfile, q.result);
                sfile << ".L" << labelCount++ << ":" << "\n";
            }
            else if(q.op == GOTO_LTE) {
               writeMov(sfile, toPrint1);
                writeCmpl(sfile, toPrint2);
                sfile << "\tjg\t.L" << labelCount << "\n";
                writeJump(sfile, q.result);
                sfile << ".L" << labelCount++ << ":" << "\n";
            }
            else if(q.op == GOTO_GTE) {
               writeMov(sfile, toPrint1);
                writeCmpl(sfile, toPrint2);
                sfile << "\tjl\t.L" << labelCount << "\n";
                writeJump(sfile, q.result);
                sfile << ".L" << labelCount++ << ":" << "\n";
            }
            else if(q.op == GOTO_EQ) {
               writeMov(sfile, toPrint1);
                if(q.arg2[0] >= '0' && q.arg2[0] <= '9')
                    sfile << "\tcmpl\t$" << q.arg2 << ", %eax" << "\n";
                else
                    writeCmpl(sfile, toPrint2);
                sfile << "\tjne\t.L" << labelCount << "\n";
                writeJump(sfile, q.result);
                sfile << ".L" << labelCount++ << ":" << "\n";
            }
            else if(q.op == GOTO_NEQ) {
               writeMov(sfile, toPrint1);
                writeCmpl(sfile, toPrint2);
                sfile << "\tje\t.L" << labelCount << "\n";
                writeJump(sfile, q.result);
                sfile << ".L" << labelCount++ << ":" << "\n";
            }
            else if(q.op == IF_GOTO) {
               writeMov(sfile, toPrint1);
                sfile << "\tcmpl\t$0" << ", %eax" << "\n";
                sfile << "\tje\t.L" << labelCount << "\n";
                writeJump(sfile, q.result);
                sfile << ".L" << labelCount++ << ":" << "\n";
            }
            else if(q.op == IF_FALSE_GOTO) {
               writeMov(sfile, toPrint1);
                sfile << "\tcmpl\t$0" << ", %eax" << "\n";
                sfile << "\tjne\t.L" << labelCount << "\n";
                writeJump(sfile, q.result);
                sfile << ".L" << labelCount++ << ":" << "\n";
            }
            else if(q.op == ARR_IDX_ARG) {
                sfile << "\tmovl\t" << toPrint2 << ", %edx" << "\n";
                sfile << "cltq" << "\n";
                if(off1 < 0) {
                    sfile << "\tmovl\t" << off1 << "(%rbp,%rdx,1), %eax" << "\n";
                    sfile << "\tmovl\t%eax, " << toPrintRes << "\n";
                }
                else {
                    sfile << "\tmovq\t" << off1 << "(%rbp), %rdi" << "\n";
                    sfile << "\taddq\t%rdi, %rdx" << "\n";
                    sfile << "\tmovq\t(%rdx) ,%rax" << "\n";
                    sfile << "\tmovq\t%rax, " << toPrintRes << "\n";
                }
            }
            else if(q.op == ARR_IDX_RES) {
                sfile << "\tmovl\t" << toPrint2 << ", %edx" << "\n";
               writeMov(sfile, toPrint1);
                sfile << "cltq" << "\n";
                if(offRes > 0) {
                    sfile << "\tmovq\t" << offRes << "(%rbp), %rdi" << "\n";
                    sfile << "\taddq\t%rdi, %rdx" << "\n";
                    sfile << "\tmovl\t%eax, (%rdx)" << "\n";
                }
                else
                    sfile << "\tmovl\t%eax, " << offRes << "(%rbp,%rdx,1)" << "\n";
            }
            else if(q.op == REFERENCE) {
                if(off1 < 0) {
                    sfile << "\tleaq\t" << toPrint1 << ", %rax" << "\n";
                    sfile << "\tmovq\t%rax, " << toPrintRes << "\n";
                }
                else {
                    sfile << "\tmovq\t" << toPrint1 << ", %rax" << "\n";
                    sfile << "\tmovq\t%rax, " << toPrintRes << "\n";
                }
            }
            else if(q.op == DEREFERENCE) {
                sfile << "\tmovq\t" << toPrint1 << ", %rax" << "\n";
                sfile << "\tmovq\t(%rax), %rdx" << "\n";
                sfile << "\tmovq\t%rdx, " << toPrintRes << "\n";
            }
            else if(q.op == L_DEREF) {
                sfile << "\tmovq\t" << toPrintRes << ", %rdx" << "\n";
               writeMov(sfile, toPrint1);
                sfile << "\tmovl\t%eax, (%rdx)" << "\n";
            }
            else if(q.op == PARAM) {
                int paramSize;
                DataType t;
                if(glb3 != NULL)
                    t = glb3->type.type;
                else
                    t = loc3->type.type;
                if(t == INT)
                    paramSize = __INTEGER_SIZE;
                else if(t == CHAR)
                    paramSize = __CHARACTER_SIZE;
                else
                    paramSize = __POINTER_SIZE;
                stringstream ss;
                if(q.result[0] == '.')
                    ss << "\tmovq\t$" << toPrintRes << ", %rax" <<"\n";
                else if(q.result[0] >= '0' && q.result[0] <= '9')
                    ss << "\tmovq\t$" << q.result << ", %rax" <<"\n";
                else {
                    if(loc3->type.type != ARRAY) {
                        if(loc3->type.type != POINTER)
                            ss << "\tmovq\t" << toPrintRes << ", %rax" <<"\n";
                        else if(loc3 == NULL)
                            ss << "\tleaq\t" << toPrintRes << ", %rax" <<"\n";
                        else
                            ss << "\tmovq\t" << toPrintRes << ", %rax" <<"\n";
                    }
                    else {
                        if(offRes < 0)
                            ss << "\tleaq\t" << toPrintRes << ", %rax" <<"\n";
                        else {
                            ss << "\tmovq\t" << offRes << "(%rbp), %rdi" <<"\n";
                            ss << "\tmovq\t%rdi, %rax" <<"\n";
                        }
                    }
                }
                params.push(make_pair(ss.str(), paramSize));
            }
            else if(q.op == CALL) {
                int numParams = atoi(q.arg1.c_str());
                int totalSize = 0, k = 0;

                
                if(numParams > 6) {
                    for(int i = 0; i < numParams - 6; i++) {
                        string s = params.top().first;
                        sfile << s << "\tpushq\t%rax" << "\n";
                        totalSize += params.top().second;
                        params.pop();
                    }
                    sfile << params.top().first << "\tpushq\t%rax" << "\n" << "\tmovq\t%rax, %r9d" << "\n";
                    totalSize += params.top().second;
                    params.pop();
                    sfile << params.top().first << "\tpushq\t%rax" << "\n" << "\tmovq\t%rax, %r8d" << "\n";
                    totalSize += params.top().second;				
                    params.pop();
                    sfile << params.top().first << "\tpushq\t%rax" << "\n" << "\tmovq\t%rax, %rcx" << "\n";
                    totalSize += params.top().second;
                    params.pop();
                    sfile << params.top().first << "\tpushq\t%rax" << "\n" << "\tmovq\t%rax, %rdx" << "\n";
                    totalSize += params.top().second;
                    params.pop();
                    sfile << params.top().first << "\tpushq\t%rax" << "\n" << "\tmovq\t%rax, %rsi" << "\n";
                    totalSize += params.top().second;
                    params.pop();
                    sfile << params.top().first << "\tpushq\t%rax" << "\n" << "\tmovq\t%rax, %rdi" << "\n";
                    totalSize += params.top().second;
                    params.pop();
                }
                else {
                    while(!params.empty()) {
                        switch(params.size()){
                            case 1:sfile << params.top().first << "\tpushq\t%rax" << "\n" << "\tmovq\t%rax, %rdi" << "\n";
                            totalSize += params.top().second;
                            params.pop();break;
                            case 2:sfile << params.top().first << "\tpushq\t%rax" << "\n" << "\tmovq\t%rax, %rsi" << "\n";
                            totalSize += params.top().second;
                            params.pop();break;
                            case 3:sfile << params.top().first << "\tpushq\t%rax" << "\n" << "\tmovq\t%rax, %rdx" << "\n";
                            totalSize += params.top().second;
                            params.pop();break;
                            case 4:sfile << params.top().first << "\tpushq\t%rax" << "\n" << "\tmovq\t%rax, %rcx" << "\n";
                            totalSize += params.top().second;
                            params.pop();break;
                            case 5:sfile << params.top().first << "\tpushq\t%rax" << "\n" << "\tmovq\t%rax, %r8d" << "\n";
                            totalSize += params.top().second;
                            params.pop();break;
                            case 6:
                            sfile << params.top().first << "\tpushq\t%rax" << "\n" << "\tmovq\t%rax, %r9d" << "\n";
                            totalSize += params.top().second;
                            params.pop();
                            break;
                            default:break;
                        }
                    }
                }
                sfile << "\tcall\t" << q.result << "\n";
                if(q.arg2 != "")
                    sfile << "\tmovq\t%rax, " << toPrint2 << "\n";
                sfile << "\taddq\t$" << totalSize << ", %rsp" << "\n";
            }
            else if(q.op == RETURN) {
                if(q.result != "")
                    sfile << "\tmovq\t" << toPrintRes << ", %rax" << "\n";
                sfile << "\tleave" << "\n";
                sfile << "\tret" << "\n";
            }

        }        
    }
}

int main(int argc, char* argv[]) {
    ST = &globalSymbolTable;
    yyparse();

    assemblyOT = "31_A5_" + string(argv[argc - 1]) + ".s";
    ofstream sfile;
    sfile.open(assemblyOT);

    quadArr.print();               

    ST->print("ST.global");         

    ST = &globalSymbolTable;

    generateTargetCode(sfile);      

    sfile.close();

    return 0;
}