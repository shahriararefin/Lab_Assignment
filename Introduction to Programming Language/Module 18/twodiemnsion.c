#include<stdio.h>
int main(){

  
    scanf("%d%d, &n,&m");
    int arr[3][3],arr1[3][3],ans[3][3];;

    
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    printf("\n");

    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
       
    }

     printf("\n");

    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", &arr1[i][j]);
        }
       
    }

    

    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j]= arr[i][0]*arr1[0][j] + arr[i][1]* arr1[1][j] +arr[i][2]* arr1[2][j];

        }
        printf("\n");
    }
    
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", &arr1[i][j]);
        }
       
    }

    return 0;
}