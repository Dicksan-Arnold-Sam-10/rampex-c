#include<stdio.h>
int main(){
    int row,col;
    
    printf("SET THE ROW SIZE OF THE MATRIX: ");
    scanf("%d",&row);
    printf("SET THE COLUMN SIZE OF THE MATRIX: ");
    scanf("%d",&col);

    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int transpose[col][row];
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            transpose[i][j]=arr[j][i];
        }
    }

    printf("THE TRANSPOSE OF THE MATRIX \n");

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}