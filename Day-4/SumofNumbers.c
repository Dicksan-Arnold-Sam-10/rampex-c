#include<stdio.h>
int main(){
    int num;
    int sum;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    if(num>9){
        while(num>0){
            int rem = num%10;
            sum+=rem;
            num/=10;
        }
    }else{
        sum=num;
    }
    printf("THE SUM OF THE NUMBER IS %d",sum);
    return 0;
}