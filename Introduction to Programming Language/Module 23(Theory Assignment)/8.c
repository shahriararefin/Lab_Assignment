#include<stdio.h>
int main(){

    char s[123];
    gets(s);

    int n;
    scanf("%d", &n);

    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i]=s[i]+5;
        
    }

    puts(s);
    

    return 0;
    
}