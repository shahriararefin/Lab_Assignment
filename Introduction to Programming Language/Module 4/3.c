/*
3. Write a program in C to display n terms of natural number and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
*/

#include<stdio.h>
int main(){
    int sum=0;


    printf("The first 7 natural number is :\n");
    for (int i = 1; i <= 7; i++)
    {

        printf("%d ",i);
        
       sum= sum+i;
    }
    
    printf("\nThe Sum of Natural Number upto 7 terms : %d",sum);

    return 0;
}