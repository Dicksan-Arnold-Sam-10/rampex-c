#include<stdio.h>
#include<math.h>
int main(){
    
    int a,b,c;
    printf("ASSIGN VALUES FOR VARIABLES (A, B, C) : ");
    scanf("%d %d %d",&a,&b,&c);
    
    float quadeq1 = (-b + sqrt(b*b - (4*a*c))) / 2*a;
    float quadeq2 = (-b - sqrt(b*b - (4*a*c))) / 2*a;

    printf("X1 - %.2f\n",quadeq1);
    printf("X2 - %.2f\n",quadeq2);
    return 0;
}