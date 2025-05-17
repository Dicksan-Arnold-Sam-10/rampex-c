#include<stdio.h>
int main(){
    int size;
    int pos;

    printf("ENTER SET SIZE FOR ARRAY: ");
    scanf("%d",&size);

    int arr[size];
    printf("ENTER ARRAY ELEMENTS,\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("ENTER THE INDEX POSITION FOR DELETION: ");
    scanf("%d",&pos);

    int newArr[size-1];
    for(int i=0;i<pos;i++){
        newArr[i]=arr[i];
    }
    for(int i=pos;i<size-1;i++){
        newArr[i]=arr[i+1];
    }

    for(int i=0;i<size-1;i++){
        printf("%d, ",newArr[i]);
    }
    return 0;
}