// Add two numbers 
int main() 
{ int x = 2; 
int y = 3; 
int z; 
z = x + y; 
printInt(x); 
printStr("a"); 
printInt(y); 
printStr(" = ");    
printInt(z); 
return 0;
}

// Find max of three numbers
int main() {
    int x = 2;
    int y = 3;
    int z = 1;
    int m;

    m = x > y ? x : y;
    m = m > z ? m : z;

    printStr("max(");
    printInt(x);
    printStr(", ");
    printInt(y);
    printStr(", ");
    printInt(z);
    printStr(") = ");
    printInt(m);

    return 0;
}



// Add two numbers from input
int main() {
    int x;
    int y;
    int z;

    readInt(&x);
    readInt(&y);

    z = x + y;

    printInt(x);
    printStr("+");
    printInt(y);
    printStr(" = ");
    printInt(z);

    return 0;
}



// Swap two numbers
void swap(int*, int*);

int main() {
    int x;
    int y;

    readInt(&x);
    readInt(&y);

    printStr("Before swap:\n");
    printStr("x = ");
    printInt(x);
    printStr(" y = ");
    printInt(y);

    swap(&x, &y);

    printStr("\nAfter swap:\n");
    printStr("x = ");
    printInt(x);
    printStr(" y = ");
    printInt(y);

    return 0;
}
void swap(int *p, int *q) {
    int t;
    t = *p;
    *p = *q;
    *q = t;
    return;
}
