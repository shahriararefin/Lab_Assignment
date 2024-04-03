#include<stdio.h>

void sort(int n, int* x){

    for (int i = 0; i < n; i++)
    {   
        if (*x+i< *x)
        {
            int temp= *x+i;
            *x+i = *x;
            *x = temp;
        }
        
        
    }
    
    

}

int main(){

    int n;
    scanf("%d", &n);

    int arr[n]; // 2 17 1 1 3 2 5 19 5
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int k;
    scanf("%d", &k);

    sort(n,&arr);

    printf("%d", arr[n]); // 1 1 2 2 3 5 5 17 19
    return 0;
}