#include<stdio.h>
int main(){
    int rightpos,leftpos;
    int size;
    
    printf("ENTER SET SIZE FOR ARRAY: ");
    scanf("%d",&size);
    int arr[size];
    printf("ENTER ARRAY ELEMENTS,\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    rightpos = size-1;
    leftpos = 0;
    
    for(int i=0;i<size/2;i++){
        int temp = arr[rightpos];
        arr[rightpos]=arr[leftpos];
        arr[leftpos]=temp;
        rightpos--;
        leftpos++;
    }

    printf("THE REVERSED ARRAY IS\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}