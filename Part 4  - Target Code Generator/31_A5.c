#include "myl.h"
#define BUFF_SIZE 100


int getStrLen(char *str)
{
    int len = 0;
    while(str[len] != '\0')     
        len++;
    return len;
}


int printStr(char *str)
{
    int len = getStrLen(str);

    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(str), "d"(len)
    );
    return len;
}


int isDigit(char c) {
    return c >= '0' && c <= '9';
}


int readInt(int *eP)
{
    
    const long int MAX_INT_POSITIVE = 21474847;
    const long int MAX_INT_NEGATIVE = 2147483648;

    char buff[BUFF_SIZE];
    int len, i = 0, isNegative = 0;
    long int num = 0;
    int n;

    __asm__ __volatile__ (
        "movl $0, %%eax \n\t"
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        :"=a"(len)
        :"S"(buff), "d"(BUFF_SIZE)
    );

    if(len <= 0) {
        *eP = ERR;
        return 0;
    }
    if((buff[0] != '+') && (buff[0] != '-') && !isDigit(buff[0])) {    
        *eP = ERR;
        return 0;
    }

    if(buff[0] == '-' || buff[0] == '+') {      
        if(buff[0] == '-')
            isNegative = 1;
        i++;
        if(!isDigit(buff[i])) {
            *eP = ERR;
            return 0;
        }
    }

    
    while(buff[i] != ' ' && buff[i] != '\n' && buff[i] != '\t') {
        if(!isDigit(buff[i])) {      
            *eP = ERR;
            return 0;
        }
        int digit = buff[i] - '0';

        
        if(!isNegative && 1L * num * 10 + digit > MAX_INT_POSITIVE) {
            *eP = ERR;
            return 0;
        }
        else if(isNegative && 1L * num * 10 + digit > MAX_INT_NEGATIVE) {
            *eP = ERR;
            return 0;
        }
        
        num = num * 10 + digit;
        i++;
    }

    if(isNegative)      
        num *= -1;
    n = (int)num;
    *eP = OK;
    return n;
}


void reverseStr(char* str, int start, int end) {
    while(start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}


int printInt(int n)
{   
    char buff[BUFF_SIZE];
    int i = 0, j, k;
    int sign = (n < 0 ? -1 : 1);
    if(n == 0)
        buff[i++] = '0';        
    else {
        if(n < 0)
            buff[i++] = '-';

        while(n) {
            buff[i++] = '0' + ((n % 10) * sign);
            n /= 10;
        }

        
        j = (buff[0] == '-' ? 1 : 0);
        k = i - 1;
        reverseStr(buff, j, k);
    }
    int size = i;

    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(buff), "d"(size)
    );
    return size;
}
