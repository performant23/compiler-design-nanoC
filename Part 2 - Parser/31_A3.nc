// Forward declarations
void swap(int *p, int *q);
void readArray(int size);
void printArray(int size);
void bubbleSort(int n);
int arr[20]; // Global array
// Driver program to test above functions
int main() {
int n;
printStr("Input array size: \n");
readInt(&n);
printStr("Input array elements: \n");
readArray(n);
printStr("Input array: \n");
printArray(n);
bubbleSort(n);
printStr("Sorted array: \n");
printArray(n);
return 0;
}
void swap(int *p, int *q) { /* Swap two numbers */
int t = *p;
*p = *q;
*q = t;
}
void readArray(int size) { /* Function to read an array */
int i;
for (i = 0; i < size; i = i + 1) {
printStr("Input next element\n");
readInt(&arr[i]);
}
}
void printArray(int size) { /* Function to print an array */
int i;
for (i = 0; i < size; i = i + 1) {
printInt(arr[i]); printStr(" ");
}
printStr("\n");
}
void bubbleSort(int n) { /* A function to implement bubble sort */
int i;
int j;
for (i = 0; i < n - 1; i = i + 1)
// Last i elements are already in place
for (j = 0; j < n - i - 1; j = j + 1)
if (arr[j] > arr[j + 1])
swap(&arr[j], &arr[j + 1]);
}

// Find fibonacci by co-recursion
int f_odd(int n);
int f_even(int n);
int fibonacci(int n) {
return (n % 2 == 0)? f_even(n): f_odd(n);
}
int f_odd(int n) {
return (n == 1)? 1: f_even(n-1) + f_odd(n-2);
}
int f_even(int n) {
return (n == 0)? 0: f_odd(n-1) + f_even(n-2);
}
int main() {
int n = 10;
int r;
r = fibonacci(n);
printStr("fibo(");
printInt(n);
printStr(") = ");
printInt(r);
return 0;
}

int f(int x){
    printf("%d\n", x);
}

int main(){
    f(-1);
    char * c = "";
    int a = return 0; // <- Error
}