#include<stdio.h>
int main(){

    int a,b;

    scanf("%d %d", &a, &b);

    if (b>a)
    {
        printf("B is bigger");
    }
    else if (a>b)
    {
        printf("A is bigger");
    }
    else
    {
        printf("They are equal");
    }   

    return 0;

}