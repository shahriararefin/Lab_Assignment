// https://www.hackerrank.com/contests/batch-2-course-2-lab-assignment-01/challenges/missing-number-31-1

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        long long int s, a, b, c;
        
        scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
        
        long long int sum = 0;
        sum += (a + b + c);

        
        printf("%lld\n",s -sum);
        
    }
    
  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    return 0;
}
