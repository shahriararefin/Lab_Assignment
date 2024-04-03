#include<stdio.h>
int main(){

    int n,i,median;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int temp=0;

    if (arr[i]>arr[i+1])
    {
        temp= arr[i];
        arr[i]=arr[i+1];
        arr[i+1]= temp;
    }

    if (n%2==0)
    {
        median= arr[n/2];
        printf("%d", median);
        return 0;
    }

    else
        median= 0.5*(arr[n/2]+arr[n/2+1]);
        printf("%d", median);
        return 0;
    

    return 0;
}