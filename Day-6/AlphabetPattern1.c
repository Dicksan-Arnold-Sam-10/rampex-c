#include<stdio.h>
int main(){
    char c;
    int size;
    printf("SET THE SIZE: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            c=65+j;
            printf("%c ",c);
        }
        printf("\n");
    }
    return 0;
}