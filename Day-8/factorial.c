#include<stdio.h>
unsigned long long factorialFun(int n){
    if(n==0){
        return 1;
    }else{
        return n*factorialFun(n-1);
    }
}

int main(){
    int num,original;
    int factorial=1;

    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    original = num;

    if(num>0){
        while(num>=1){
            factorial*=num;
            num--;
        }
        printf("THE FACTORIAL OF THE NUMBER %d IS %d\n",original,factorial);
    }else{
        printf("INVALID NUMBER FOR FINDING FACTORIAL");
    }

    printf("THE FACTORIAL OF THE NUMBER %d IS %d\n",original,factorialFun(original));
    return 0;
}