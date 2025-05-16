#include<stdio.h>
int main(){
    int age;
    float salary;
    char name[25];
    printf("ENTER YOUR NAME: ");
    scanf("%s",&name);
    printf("ENTER YOUR AGE: ");
    scanf("%d",&age);
    printf("ENTER YOUR SALARY: ");
    scanf("%f",&salary);

    printf("\tEMPLOYEE DETAILS\n");
    printf("\t----------------\n");
    printf("NAME: %s\n",name);
    printf("AGE: %d\n",age);
    printf("SALARY: %.2f",salary);
    
    return 0;
}