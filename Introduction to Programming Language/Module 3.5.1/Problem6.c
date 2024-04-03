// You will be given three non-negative integers A,B and C. 
// You need to tell if these integers form an equilateral triangle (A triangle whose three sides are the same and each side contains a positive value). 
// If the answer is yes, print "Yes" otherwise "No".

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);

    if (A==B && B==C && A>0 && B>0 && C>0)
    {
        printf("Yes");
    }

    else{
        printf("No");
    }

    return 0;
}