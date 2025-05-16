#include<stdio.h>
#include<stdbool.h>
int main()
{
    int age,val;
    bool isValidDriver;
    printf("ENTER YOUR AGE : ");
    scanf("%d",&age);
    printf("DO YOU HAVE A DRIVING LICENCE(0 false/1 true) : ");
    scanf("%d",&val);
    isValidDriver = val;
    if(age>=18 && isValidDriver==true){
        printf("ELIGIBLE TO DRIVE");
    }else{
        printf("NOT ELIGIBLE TO DRIVE");
    }
    return 0;
}