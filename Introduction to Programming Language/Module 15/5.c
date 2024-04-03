/*
char a[10];
		char ch = ‘a’;
		for(int i = 0; i<8;i++)
		{
			a[i] = ch+8-i;
		}
		a[8] = ‘\0’;
What will be stored in the given character array ‘a’ of the question after the execution of the block of code?

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

     char a[10];
    char ch = 'a';
    for(int i = 0; i<8;i++)
    {
        a[i] = ch+8-i;
    }
    a[8] = 'a';

   
    printf("%s ",a);

    return 0;

}