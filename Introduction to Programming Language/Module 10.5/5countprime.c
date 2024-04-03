#include<stdio.h>
int main(){


    int n,z=0,arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 2; i < n/2; i++)
    {
        if (arr[i]%n !=0 )
        {
            
            printf("%d ", arr[i]);
            
        }
        
    }

    
    
    return 0;
}