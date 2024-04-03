/*
Take two integers as input and print their GCD as the output. We know, GCD of two numbers is the greatest common divisor of two numbers. You can use the logic from Question no. 6 to solve this problem. 
Sample Input 1: 
12 18 
Sample Output 1: 
The GCD of 12 and 18 is 6. 
Explanation: 
Since 6 is the largest number which divides both 12 and 18 so 6 is output.

*/

#include<stdio.h>
int main(){

    int a,b,c;
    scanf("%d %d", &a,&b);

    for (int i = 2; i <= a/2; i++)
    {
        if (a%i==0 && b%i==0)
        {
            c=i;
        }
    }
    printf("%d",c);
    

    return 0;
}