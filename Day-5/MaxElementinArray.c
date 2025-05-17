#include<stdio.h>
int main(){
    int size;
    printf("ENTER SET SIZE FOR ARRAY: ");
    scanf("%d",&size);
    int arr[size];
    printf("ENTER ARRAY ELEMENTS,\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int currentMax=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>currentMax){
            currentMax=arr[i];
        }
    }
    printf("THE MAX ELEMENT FROM THE ARRAY IS %d",currentMax);
}