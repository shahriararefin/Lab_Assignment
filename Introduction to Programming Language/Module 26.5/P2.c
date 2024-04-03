#include<stdio.h>

int swap(int* x, int* y){

    int temp= *x;
    *x = *y;
    *y = temp;
    
}

void pass_reference(int n, int arr[]){

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i]> arr[j+1])
            {
                swap(&arr[i], &arr[j]);
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    
}



int main(){

    int n,i;
    scanf("%d", &n);

    int arr[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    pass_reference(n, arr);
   
    
    return 0;
}