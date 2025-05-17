#include<stdio.h>
int main(){
    int evenCounter=0;
    int oddCounter=0;
    int size;

    printf("ENTER SET SIZE FOR ARRAY: ");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("ENTER ARRAY ELEMENTS,\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0 && arr[i]>-1){
            evenCounter++;
        }else if(arr[i]%2==1 && arr[i]>-1){
            oddCounter++;
        }
    }

    printf("TOTAL EVEN NUMBERS: %d\n",evenCounter);
    printf("TOTAL ODD NUMBERS: %d\n",oddCounter);
    return 0;
}