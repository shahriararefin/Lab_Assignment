//https://www.hackerrank.com/contests/batch-2-course-2-lab-assignment-01/challenges/secret-code-7

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    scanf("%d", &n);

    int arr[129];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int counter=0;
        for (int j = 2; j < arr[i]/2; j++)
        {
           if (arr[i]%j ==0)
        {
            
            printf("No\n");
            counter++;
            break;
        } 
        
        if (counter == 0)
        {
            printf("Yes\n" );
            break;
        }
        
    }
    }
    
    
    return 0;
}
