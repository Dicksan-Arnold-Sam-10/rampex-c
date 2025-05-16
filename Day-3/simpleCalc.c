#include<stdio.h>
int main(){
    char choice;
    int n1,n2;
    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d",&n1,&n2);
    printf("ENTER YOUR CHOICE( + | - | * | / | %% ):");
    scanf(" %c",&choice);
    switch(choice){
        case '+':
        printf("%d + %d = %d\n",n1,n2,n1+n2);
        break;

        case '-':
        printf("%d - %d = %d\n",n1,n2,n1-n2);
        break;
        
        case '*':
        printf("%d * %d = %d\n",n1,n2,n1*n2);
        break;
        
        case '/':
        if (n2 == 0) {
            printf("Division by zero is not allowed.\n");
        } else {
            printf("%d / %d = %d\n",n1,n2,n1/n2);
        }
        break;
        
        case '%':
        if (n2 == 0) {
            printf("Modulus by zero is not allowed.\n");
        } else {
            printf("%d %% %d = %d\n",n1,n2,n1%n2);
        }
        break;
        
        default:
        printf("INVALID CHOICE");
    }
    return 0;
}