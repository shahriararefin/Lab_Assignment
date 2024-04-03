//https://www.hackerrank.com/contests/batch-2-course-2-lab-assignment-01/challenges/hand-shakes-2

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    long long int n;
    scanf("%lld", &n);

    printf("%lld", ((n*(n-1))/2));

    return 0;
}
