#include<stdio.h>

int main(){

    int n,k;
    scanf("%d %d", &n, &k);

    int arr[n-1];

    int even,odd; 

    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
           // printf("%d ", i);

            arr[even]= i;
            even++;
        }

    odd= even/2;
        
    }

    for (int i = 0; i < n; i++)
    {
        if (i%2!=0){

            // printf("%d ", i);
            arr[odd]= i;
            odd++;
        }
        
            
    }

    printf("\n");

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);  
    }
    printf("\n");
    printf("%d", arr[k-1]);
    


    return 0;
}