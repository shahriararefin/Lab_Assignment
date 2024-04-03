#include<stdio.h>

    int is_beautiful(int n, int arr[]){

        int c_value= n/2,count=0;

        int* array = &arr[0];

        for (int i = 0; i < n; i++)
        {
            int* array[i] = &arr[0];
            if (*array[i]%10==7 )
            {
                count++;
                *array[i]/=10;
                *array[i++];
            }
            
            
        }

        //printf("c_value--->%d\n", c_value);
        //printf("count--->%d\n", count);

        if (c_value<= count)

            printf("Beautiful");
        
        else
            printf("Ugly");
    
        

    }


int main(){

    int n;
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    is_beautiful(n, arr);

    return 0;
}