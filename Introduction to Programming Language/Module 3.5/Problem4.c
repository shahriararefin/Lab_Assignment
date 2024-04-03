#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    if (n<=32)
    {
        printf("F");
    }

    else if (n<=39)
    {
        printf("D");
    }
    
    else if (n<=49)
    {
        printf("C");
    }

    else if(n<=59)
    {
        printf("B");
    }
    else if(n<=69){

        printf("A-");
    }
    else if(n<=79)
    {
        printf("A");
    }

    else if(n<=100)
    {
        printf("A+");
    }
    


    return 0;
}