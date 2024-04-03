
//https://www.hackerrank.com/contests/batch-2-course-2-lab-assignment-01/challenges/bablu-and-phone

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int n,i ;
    char c;
    int arr[100];
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d%c", &arr[i],&c);
        
    }

    for ( i = 0; i < n; i++)
    {
        if (arr[i]>=0 && arr[i]<=60)
    {
        int t= ((60-arr[i])+(20*2)+(20*3));
        printf("%d minutes\n",t);
    }
    
    else if (arr[i]>60 && arr[i]<=80)
    {
        int t= (80-arr[i])*2+(20*3);
        printf("%d minutes\n",t);
    }
    
    else if (arr[i]>80 && arr[i]<=100)
    {
        int t= (100-arr[i])*3;
        printf("%d minutes\n",t);
    }
    

    }

    return 0;
}
