/*
Write a C program to take one positive integer N as input and print all divisors of N.

Sample Input: Sample Output:
10                  1 2 5 10
18                  1 2 3 6 9 18
24                  1 2 3 4 6 8 12 24

*/

#include<stdio.h>
int main(){

     int n;
    scanf("%d",&n);

    for (int i = 1; i <= n ; i++)
    {   
        if (n%i==0)
        {
            printf("%d ",i);
        
        }
       
    }

    return 0;
}