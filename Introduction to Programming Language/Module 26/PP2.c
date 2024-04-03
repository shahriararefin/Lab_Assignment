#include<stdio.h> 
    void find_maxv_minv(int n, int arr[], int *a, int* b){

        *a = arr[0];
        *b = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > *a)
        {
            *a = arr[i];
        }

        if (arr[i] < *b)
        {
            *b = arr[i];
        }
        
        
    }
    

    }

int main(){

    int arr[]={12,6,9,3,5,21,4};
    int n=7;
    int maxv,minv;

    find_maxv_minv(n, arr, &maxv, &minv);

    printf("%d %d", maxv, minv);
    
    return 0;
}