//https://www.hackerrank.com/contests/batch-2-course-2-lab-assignment-01/challenges/different-pattern
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    

    return 0;
}
