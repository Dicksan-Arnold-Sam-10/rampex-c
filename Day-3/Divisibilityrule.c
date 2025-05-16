#include<stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    if(num%5==0 && num%11==0){
        printf("CONDTION MET! THE NUMBER %d IS PERFECTLY DIVISIBLE BY BOTH 5 & 11",num);
    }else{
        printf("CONDITION NOT SATISFIED");
    }
    return 0;
}