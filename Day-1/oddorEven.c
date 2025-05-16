#include <stdio.h>
int main(){
    int number; 

    printf("Enter an integer: ");
    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("%d The number is Even\n", number);
    } else {
        printf("%d The number is oddd\n", number);
    }

    return 0;
}