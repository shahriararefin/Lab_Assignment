#include<stdio.h> 

    int sum_of_digits(int n){
        int summ;

        while (n!=0)
        {   
            summ+=(n%10);
            n/=10;
        }

        return summ;
    }


    int is_prime(int n){

        for (int i = 2; i <n; i++)
        {
            if (n%i==0)
        {
            return 0;
        }
        }

        return 1; 
    }

int main(){

    int n;
    scanf("%d", &n);

    if (is_prime(sum_of_digits(n))==1)
    {
        printf("Sum of given input is a prime number");
    }

    else
        printf("Sum of given input is not a prime number");
    
    return 0;
}