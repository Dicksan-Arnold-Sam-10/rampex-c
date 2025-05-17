#include<stdio.h>
int main(){
    int size;
    int pos;
    int value;
    
    printf("ENTER SET SIZE FOR ARRAY: ");
    scanf("%d",&size);

    int arr[size];
    printf("ENTER ARRAY ELEMENTS,\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("ENTER THE INDEX POSITION FOR INSERTION: ");
    scanf("%d",&pos);
    printf("ENTER THE VALUE FOR INSERTING: ");
    scanf("%d",&value);

    int newArr[size+1];
    int temp;
    for(int i=0;i<pos;i++){
        newArr[i]=arr[i];
    }
    newArr[pos]=value;
    for(int i=pos+1;i<=size;i++){
        newArr[i]=arr[i-1];
    }

    for(int i=0;i<size+1;i++){
        printf("%d, ",newArr[i]);
    }
    return 0;
}