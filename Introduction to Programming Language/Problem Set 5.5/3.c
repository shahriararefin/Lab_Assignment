/*
Write a C program to take one positive integer N as input and 
print all even numbers from 1 to N.

Sample Input: Sample Output:
10                  2 4 6 8 10
7                   2 4 6


*/



#include<stdio.h>
int main(){


    int n;
    scanf("%d",&n);

    for (int i = 1; i <=n ; i++)
    {   
        if (i%2==0)
        {
            printf("%d ",i);
        
        }
       
    }
    
    

    return 0;
}