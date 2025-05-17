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
    printf("THE ELEMENTS INSIDE THE ARRAY WERE,\n");
    for(int i=0;i<size;i++){
        if(i!=size-1){
            printf("%d, ",arr[i]);
        }else{
            printf("%d.",arr[i]);
        }
    }
    return 0;
}