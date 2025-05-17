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

    printf("ASCENDING ORDER SORT\n");
    int sortArr[size];
    for(int i=0;i<size;i++){
        sortArr[i]=arr[i];
    }
    int j=0;
    int temp;
    for(int i=1;i<size;i++){
        temp = sortArr[i];
        j = i - 1;
        while(j >= 0 && sortArr[j] > temp){
            sortArr[j + 1] = sortArr[j];
            j--;
        }
        sortArr[j + 1] = temp;
    }
    for(int i=0;i<size;i++){
        printf("%d, ",sortArr[i]);
    }
    return 0;
}