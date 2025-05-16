#include<stdio.h>
int main(){
    unsigned long long int fibo;
    int num;
    printf("ENTER THE LIMIT: ");
    scanf("%d",&num);
    unsigned long long int a=0,b=1;
    for(int i=1;i<=num;i++){
        fibo=a+b;
        if(i!=num){
            printf("%llu, ",a);
        }else{
            printf("%llu",a);
        }
        a=b;
        b=fibo;
    }
    printf("\n");
    return 0;
}