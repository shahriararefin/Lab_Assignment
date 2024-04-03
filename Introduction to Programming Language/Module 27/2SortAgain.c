#include<stdio.h>

    void sort(char* y){

        char temp;
        for (int i = 0; y[i] != '\0'; i++)
        {
            for (int j = 0; y[i] != '\0'; j++)
            {
                if (y[i]<y[i+1])
            {
                temp = y[i];
                y[i]= y[i+1];
                y[i+1]= temp;
            }
            }
            
            
            
        }
        puts(y);
  
    }

int main(){

    char s[144];
    gets(s);

    char*  y= s;

    sort(s);

    return 0;
}