#include<stdio.h>
int main(){

    int n,t,i,j;

    int arr[100];
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++){
            if (arr[i] > arr[j]){
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    
     for (i=0; i<n; i++){
      printf("%d ", arr[i]);
    }

    printf("\n");
    int k,largest;
    scanf("%d", &k);

    for (int i = 0; i < k; i++)
    {
       largest=arr[i];
        
    }

    printf("%d", largest);
    
    return 0;
}