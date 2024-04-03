#include<stdio.h>
int main(){

    int a,b;
    char ch;

    scanf("%c", &ch);
    scanf("%d %d", &a,&b);

    int sum=0;
    if (ch == '+')
    {
        sum= a+b;
    }
    else if (ch == '-')
    {
        sum= a-b;
    }

     else if (ch == '*')
    {
        sum= a*b;
    }

     else if (ch == '/')
    {
        sum= a/b;
    }
    
    

    printf("%d", sum);

    return 0;
}