#include<stdio.h>
int main(){
    int arr1[] = {1,24,77,2,6,4};
    int arr2[] = {3,8,7,9,5,86};
    int totalSize = (sizeof(arr1)/sizeof(arr1[0]))+(sizeof(arr2)/sizeof(arr2[0]));
    int mergearr[totalSize];
    
    int j=0,k=0;
    for(int i=0;i<totalSize;i++){
        if(i<(sizeof(arr1)/sizeof(arr1[0]))){
            mergearr[i]=arr1[j];
            j++;
        }else{
            mergearr[i]=arr2[k];
            k++;
        }
    }
    for(int i=0;i<totalSize;i++){
        printf("%d, ",mergearr[i]);
    }
    return 0;
}