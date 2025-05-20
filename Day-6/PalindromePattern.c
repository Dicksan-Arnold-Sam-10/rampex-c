#include<stdio.h>
int main(){
    int size;
    printf("SET THE SIZE: ");
    scanf("%d",&size);
    int l=0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            printf(" ");
        }
        for(int k=0;k<=l/2;k++){
            printf("%d",k+1);
        }
        for(int m=l/2;m>0;m--){
            printf("%d",m);
        }
        printf("\n");
        l+=2;
    }
    return 0;
}