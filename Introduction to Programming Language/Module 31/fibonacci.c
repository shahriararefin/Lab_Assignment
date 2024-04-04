#include<stdio.h>

int main(){

    int x=0;
    int y=1;
    int n;

    printf("Enter the integer number: ");
    scanf("%d", &n);

    int next_term;

    printf("Fibonacci: %d, %d", x,y);

    for (int i = 3; i <= n; i++)
    {
        next_term= x+y;
        printf(", %d", next_term);

        x= y;
        y= next_term;
    }
    

    return 0;
}