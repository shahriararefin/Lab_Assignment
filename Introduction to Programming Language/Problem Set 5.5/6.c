/*
Write a C program to take two non-negative integers N and M. Here N and M represents time in hours (24 hours
format). You need to print from N to M, if you need to start from beginning again, you can do that. See the
sample input output for more clarification.

Sample Input: Sample Output:
5 12                    5 6 7 8 9 10 11 12
21 7                  21 22 23 0 1 2 3 4 5 6 7
*/

#include<stdio.h>
int main(){

    int N,M;

    scanf("%d %d", &N,&M);

     if (N<M)
    {
        for (int i = N; i <= M; i++)
    {
        printf("%d ",i);
    }

    }

    else if (N>M)
    {

        for (int i = N; i <24 ; i++)
        {
            printf("%d ",i);
            
            if (i==23)
            {
                for (int i = 0; i <= M; i++)
                {
                    printf("%d ",i);
                }
        
            }
            
           
        }
        
    }



    

    return 0;
}