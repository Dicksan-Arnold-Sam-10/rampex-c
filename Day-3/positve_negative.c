#include<stdio.h>
int main(){
    int num;
    printf("ENTER A NUMER: ");
    scanf("%d",&num);
    if(num<0){
        printf("the number %d is a negative number.",num);
    }else if(num==0){
        printf("the number is zero, it is neither positve nor negative.");
    }else{
        printf("the number %d is a positive number.",num);
    }
    return 0;
}