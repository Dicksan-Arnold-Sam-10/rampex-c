#include<stdio.h>
int main(){
    int size;
    printf("SET THE SIZE: ");
    scanf("%d",&size);
    printf("\n\n");
    int l=0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            printf(" ");
        }
        for(int k=0;k<=l;k++){
            printf("*");
        }
        printf("\n");
        l+=2;
    }
    return 0;
}