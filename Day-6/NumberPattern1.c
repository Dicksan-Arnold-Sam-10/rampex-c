#include<stdio.h>
int main(){
    int size;
    printf("SET THE SIZE: ");
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}