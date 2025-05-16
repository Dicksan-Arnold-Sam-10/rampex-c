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
    if(original==reverse){
        printf("THE NUMBER %d IS A PALINDROME",original);
    }else{
        printf("THE NUMBER %d IS NOT A PALINDROME",original);
    }
    return 0;
}