#include<stdio.h>
int main(){

    int row=3,col=3;
    int s_row=0,s_col=0;
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    //partesi na!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! erpore
   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            s_row= s_row+arr[i][j];
        }
        printf("%d ", s_row);
    }
    
    return 0;
}