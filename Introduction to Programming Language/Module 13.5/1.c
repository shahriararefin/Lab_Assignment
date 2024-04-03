#include<stdio.h>
#include<string.h>

int main(){

    int count=0,i,t;
    char n[123];

    fgets(n,sizeof(n),stdin);

    for ( i = 0; i != '\0'; i++)
    if (n[i]>n[i+1])
    {
        {
        t= n[i];
        n[i]= n[i+1];
        n[i+1]= t;
    }
    }
    
    printf("%s", n);

    return 0;
}