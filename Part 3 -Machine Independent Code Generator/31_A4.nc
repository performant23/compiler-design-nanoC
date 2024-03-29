int printStr(char *s);
int printInt(int n);
int readInt(int *eP);
void swap(int *a, int *b) {
int t;
t = *a;
*a = *b;
*b = t;
}
int kt(int n) {
int p; // Previous number
int d1; // Largest digit
int d2; // Second largest digit
int d3; // Smallest digit
int m; // Next number
p = n; // Remember current number
// Extract digits in sorted order
d1 = n % 10;
n = n / 10;
d2 = n % 10;
n = n / 10;
if (d1 < d2)
swap(&d1, &d2);
d3 = n % 10;
if (d2 < d3) {
swap(&d2, &d3);
if (d1 < d2)
swap(&d1, &d2);
}
// Check digits to debug
printInt(d1);
printInt(d2);
printInt(d3);
printStr("\n");
// Compute the diff of largest and smallest
// three digit numbers with the given digits
m = (d1 - d3) * 99;
// Check for the fixed point
if (m == p)
return m; // Should return 495 if n != 0
else
return kt(m); // Continue search for fixed point
}
int main() {
int n;
int m;
while (1) {
    n = readInt(0);
    m = kt(n);
printStr("Constant = ");
printInt(m);
printStr("\n");
}
return 0;
}