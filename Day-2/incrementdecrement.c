#include<stdio.h>
int main(){
    int a,b,c;
    a = 5;
    a++;
    b = a++;
    printf("a = %d \t b = %d\n", a, b);
    b = ++a;
    printf("a = %d \t b = %d\n", a, b);
    c = a++ + ++b;
    printf("a = %d \t b = %d \t c = %d\n", a, b, c);
    return 0;
}