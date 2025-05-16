#include<stdio.h>
int main(){
    int age;
    printf("ENTER YOUR AGE: ");
    scanf("%d",&age);
    if(age>=18){
        printf("YOU ARE ELIGIBLE FOR VOTING\n");
    }
    else{
        printf("YOU ARE NOT ELIGIBLE FOR VOTING\n");
    }
    return 0;
}