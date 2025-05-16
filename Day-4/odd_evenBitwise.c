#include<stdio.h>
int main(){
    int num;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    if((num&1)==0){
        printf("THE NUMBER %d IS AN EVEN NUMBER",num);
    }else{
        printf("THE NUMBER %d IS AN ODD NUMBER",num);
    }
    // printf("\n%d",num%1);
    return 0;
}