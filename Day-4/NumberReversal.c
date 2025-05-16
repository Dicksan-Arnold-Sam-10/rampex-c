#include<stdio.h>
int main(){
    int num,original;
    int reverse=0;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    original = num;
    while(num>=1){
        int rem = num%10;
        reverse = reverse*10 +rem;
        num/=10;
    }
    printf("THE ORIGINAL NUMBER : %d\n",original);
    printf("THE REVERSED NUMBER : %d\n",reverse);
    return 0;
}