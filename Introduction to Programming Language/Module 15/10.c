/*
How can you find the sum of digits of a number? Write a C program that will extract the digits of the given integer number as input and add them to find the required output. 
For example, if the input is 1235623, then the output will be 22. Because, 1+2+3+5+6+2+3 = 22.
*/
#include<stdio.h>

int main(){

    int n,sum=0;
    scanf("%d", &n);

    while (n!=0)
    {
       sum+=n%10;
       n/=10;
    }

    printf("%d", sum);
    

    return 0;
}