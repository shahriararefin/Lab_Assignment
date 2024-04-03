//https://www.hackerrank.com/contests/batch-2-course-2-lab-assignment-01/challenges/out-of-team

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int n,k,count=0;
    scanf("%d %d", &n, &k);

    int arr[10];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
       if (arr[i]<k)
       {
        count++;
       }
       
    }
    printf("%d", count);
    
    
    
    
    
    return 0;
}
