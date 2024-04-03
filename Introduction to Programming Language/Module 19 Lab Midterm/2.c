#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    char s[20];
    int i;

    for (int i = 0; i <'\0'; i++)
    {
         scanf("%s", &s[i]);
    }
   
    int sum=0;

    int a,b;
    scanf("%d %d",&a,&b);

    while (s[i]=='+')
    {
       sum= a+b;
    }

    while (s[i]=='*')
    {
        sum= a*b;
    }

    printf("%d",sum);
    

    
    return 0;
}
