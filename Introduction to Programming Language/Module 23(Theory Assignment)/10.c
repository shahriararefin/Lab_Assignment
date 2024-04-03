#include<stdio.h>

char grade(char n){
    
    if(n>=80)
    {
        return 'A';
    }

    else if(n>=60 && n<=79)
    {
        return 'B';
    }

    else if(n>=40 && n<=59)
    {
        return 'C';
    }

    else if(n<=39)
    {
        return 'F';
    }
}
    
    
    

int main(){

    int n;
    scanf("%d", &n);

    printf("%c",grade(n));

   

    return 0;
}