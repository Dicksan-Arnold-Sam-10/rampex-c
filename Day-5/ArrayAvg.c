#include<stdio.h>
int main(){
    int size;
    printf("ENTER SET SIZE FOR ARRAY: ");
    scanf("%d",&size);
    int arr[size];
    printf("ENTER ARRAY ELEMENTS,\n");
    int total=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        total+=arr[i];
    }
    int avg = total/size;
    printf("THE AVERAGE OF THE ARRAY ELEMENTS IS %d",avg);
    return 0;
}