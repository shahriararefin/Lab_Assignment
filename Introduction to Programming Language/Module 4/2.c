/*
2. Write a C program to find the sum of the first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55
*/

#include<stdio.h>
int main(){

    int sum=0;
    

    for ( int i = 0; i <=10; i++)
    {
        sum = sum+i;
        
       
    }
     printf("The Sum is : %d", sum);

    return 0;

}
