#include<stdio.h>
int main(){ 

    for (int i = 0; i < 5; i++)
    {
        printf("* ");
        for (int j = 0; j < i ; j++)
        {
            printf("* ");
        //890-_=+*()
        }
        printf("\n");
    }

    for (int i = 5; i > 0; i--)
    {
        printf("*");
        for (int j = 0; j < i ; j++)
        {
            printf(" *");
        //890-_=+*()
        }
        printf("\n");
    }
    
    

    return 0;
}