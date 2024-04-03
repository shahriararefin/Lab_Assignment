/*
Write a C program to two positive integers N and M as input and print all numbers from 1 to N that are divisible
by M.

Sample Input: Sample Output:
10 3                3 6 9
15 4                4 8 12

*/
#include<stdio.h>
int main(){

    int N,M;
    scanf("%d %d",&N,&M);

    for (int i = 1; i <=N; i++)
    {
        if (i%M==0)
        {
            printf("%d ",i);
        }
        
    }

    return 0;
}