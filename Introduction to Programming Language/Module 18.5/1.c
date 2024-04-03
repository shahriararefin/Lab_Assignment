/*
You are given an integer n or –n .If you are given n , print n to –n , if you are given –n, print –n to n.
See the sample output for more clarification.
Sample Input : Sample Output :

5           5 4 3 2 1 0 -1 -2 -3 -4 -5
-4          -4 -3 -2 -1 0 1 2 3 4

*/

#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    if (n>0)
    {
        for (int i = n; i >= -n; i--)
        {
            printf("%d ",i);
        }
    }

    if (n<0)
    {
        for (int i = n; i <= -n; i++)
        {
            printf("%d ",i);
        }
        
    }
    
    
    return 0;
}