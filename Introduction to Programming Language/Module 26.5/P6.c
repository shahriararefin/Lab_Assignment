#include<stdio.h>

    int uppercase(char s[]){

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i]>='a' && s[i]<= 'z' && s[i]%2==0)
            {
                s[i]-=32;
            }
        
        }
        puts(s);
    
       return 0;
    }

int main(){

    char s[141];
    gets(s);

    
    uppercase(s);


    return 0;
}