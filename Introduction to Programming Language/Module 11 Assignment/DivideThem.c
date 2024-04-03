//https://www.hackerrank.com/contests/batch-2-course-2-lab-assignment-01/challenges/divide-them

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    int arr[109];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    for (int i = k; i < n; i++)
    {

        printf("%d ", arr[i]);
    }

    for (int i = 0; i < k; i++)
    {
         printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}
