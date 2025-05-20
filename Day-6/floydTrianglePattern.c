#include<stdio.h>
int main(){
    int size;
    int counter=1;
    printf("SET THE SIZE: ");
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",counter);
            counter++;
        }
        printf("\n");
    }
    return 0;
}