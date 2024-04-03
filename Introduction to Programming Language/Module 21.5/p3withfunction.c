#include<stdio.h>

    int values(int n){

    
    int arr[n],old_val[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        old_val[i] = arr[i];
 
    }

        int last_digit[n],sum_last_digit,sum_first_digit;

        for (int i = 0; i < n; i++)
    {
        last_digit[i]= arr[i]%10;
        printf("Last Digit of %d is %d\n",arr[i], last_digit[i]);

    // sum of last digit

        sum_last_digit+= last_digit[i];
    }


        for (int i = 0; i < n; i++)
    {
        arr[i]/=1000;
        printf("First Digit of %d is %d\n",old_val[i], arr[i]);

        sum_first_digit+= arr[i];

    }

        int sumofvalues= sum_first_digit+sum_last_digit;

        return sumofvalues;
    
    }


int main(){

    int n,i;
    scanf("%d", &n);

    int arr[n];

   
    
    printf("%d",values(n));


    return 0;
}