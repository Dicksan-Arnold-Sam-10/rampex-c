#include<stdio.h>
void square(int num){
    printf("the square of the number %d is %d\n",num,num*num);
}
void cube(int num){
    printf("the cube of the number %d is %d\n",num,num*num*num);
}
int main(){
    int num;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    square(num);
    cube(num);
    return 0;
}