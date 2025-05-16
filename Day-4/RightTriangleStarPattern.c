#include<stdio.h>
int main(){
    int size;
    printf("SET THE SIZE = ");
    scanf("%d",&size);
    int i, j;
    for(i=1; i<=size; i++){
        for(j=0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}