/*
You will be given a number as input. You will have to find the number of digits in that number. 
You will have to use loops to solve this problem as the input can have any number of digits. 
[Hint: Use the modulus operator. You can extract last digit from any number by using %10 operation on the number.] 

For example, 
Sample Input: 
2346167 
Sample Output: 
7 digits 
Since the input had 7 digits so the output is 7. Please use long long int as data type for this problem.
*/

#include<stdio.h>
int main(){

    int count=0;
    long long int n,x;
    scanf("%lld", &n);

    while (n!=0)
    {
        x=n%10;
        n=n/10;
        count++;
    }

    printf("%lld digits",count);
    


    return 0;
}