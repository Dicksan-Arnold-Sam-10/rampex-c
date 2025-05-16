#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int mod(int a,int b){
    return a%b;
}
int main()
{
    int a,b,c;
    printf("ENTER TWO NUMBERS \n");
    scanf("%d %d",&a,&b);
    c = add(a,b);
    printf("%d + %d = %d\n",a,b,c);
    c = sub(a,b);
    printf("%d - %d = %d\n",a,b,c);
    c = mul(a,b);
    printf("%d * %d = %d\n",a,b,c);
    c = div(a,b);
    printf("%d / %d = %d\n",a,b,c);
    c = mod(a,b);
    printf("%d %% %d = %d\n",a,b,c);
    return 0;
}