#include<stdio.h>

int main(){

    int n,i;
    scanf("%d", &n);

    int arr[n],last_digit[n],old_val[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        old_val[i] =arr[i];
    }

    
    
    for (int i = 0; i < n; i++)
    {
        last_digit[i]= arr[i]%10;
        printf("Last Digit of %d is %d\n",arr[i], last_digit[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        arr[i]/=1000;
        printf("First Digit of %d is %d\n",old_val[i], arr[i]);
    }
    
  
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i]+last_digit[i];
        
    }

    printf("Sum= %d", sum);
    
   

    return 0;
}