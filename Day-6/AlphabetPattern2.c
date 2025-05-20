#include<stdio.h>
int main(){
    char c;
    int size;
    printf("SET THE SIZE: ");
    scanf("%d",&size);
    int n = 65+size-1;
    if(n>=65 && n<=90){
        for(int i=0;i<size;i++){
            for(int j=0;j<=i;j++){
                c = n;
                printf("%c ",c);
                n--;
            }
            n=65+size-1;
            printf("\n");
        }
    }
    return 0;
}