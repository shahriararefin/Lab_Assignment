#include<stdio.h>

    void op(char c,int a, int b){

    int sum=0; 
        
    if (c== '+')
    {
        sum= a+b;
    }
    else if (c == '-')
    {
        sum= a-b;
    }
    else if (c== '*')
    {
        sum= a*b;
    }
    else if (c== '/')
    {
        sum= a/b;
    }
    
    printf("%d", sum);

    }


int main(){

    char c;
    scanf("%c", &c);

    int a,b;

    scanf("%d %d", &a, &b);

    
    op(c,a,b);

    return 0;
}