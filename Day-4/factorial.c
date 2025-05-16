#include<stdio.h>
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
        printf("THE FACTORIAL OF THE NUMBER %d IS %d",original,factorial);
    }else{
        printf("INVALID NUMBER FOR FINDING FACTORIAL");
    }
    return 0;
}