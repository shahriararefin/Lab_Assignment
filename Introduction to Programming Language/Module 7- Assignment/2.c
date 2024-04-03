/*
You need to take 4 distinct integer as input. 
Print the largest and smallest among them. 
Distinct means all of them are separate integers. 
None of them is equal to any other of them. 
Sample Input: 
123 435 34 612 
Sample Output: 
Largest = 612 
Smallest = 34 

*/

#include<stdio.h>
int main(){

    int a,b,c,d;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    if (a>b && a>c && a>d)
    {
        printf("Largest = %d\n", a);
    }

    else if (b>a && b>c && b>d)
    {
        printf("Largest = %d\n", b);
    }

    else if (c>a && c>b && c>d)
    {
        printf("Largest = %d\n", c);
    }
    else
        {
        printf("Largest = %d\n", d);
    }

    if (a<b && a<c && a<d)
    {
        printf("Smallest = %d\n", a);
    }

    else if (b<a && b<c && b<d)
    {
        printf("Smallest = %d\n", b);
    }

    else if (c<a && c<b && c<d)
    {
        printf("Smallest = %d\n", c);
    }
    else
        {
        printf("Smallest = %d\n", d);
    }


    return 0;
}

