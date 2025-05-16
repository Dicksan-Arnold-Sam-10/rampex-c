#include <stdio.h>

int main(){

    int a, b, c, temp;

    a = 1;
    b = 2;
    c = 3;

    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);

    temp = 1;
    a = b;
    b = c;
    c = temp;

    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}