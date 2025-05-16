#include<stdio.h>
void greatestof3(int n1,int n2, int n3)
{
    if(n1>n2){
        if(n1>n3){
            printf("%d is greatest number\n",n1);
        }else{
            printf("%d is greatest number\n",n3);
        }
    }else{
        if(n2>n3){
            printf("%d is greatest number\n",n2);
        }else{
            printf("%d is greatest number\n",n3);
        }
    }
}
int main()
{
    int a,b,c;
    a=10;
    b=7;
    c=9;
    if(a>b){
        printf("%d is greater than %d\n",a,b);
    }
    else{
        printf("%d is greater than %d\n",b,a);
    }
    greatestof3(a,b,c);
    return 0;
}