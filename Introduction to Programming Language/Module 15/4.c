/*
To declare a string, Fahim uses the following code. What will happen in the second and the third statement. Explain.	(10)						         
	char a[10];
	a[0] = 98;
	a[1] = 97;
	a[2] = 'n';
	a[3] = 'a';
	a[4] = 'n';
	a[5] = 'a';
	a[6] = ‘\0’;



#include<stdio.h>
#include<string.h>

int main(){

    char a[10];
	a[0] = 98;
	a[1] = 97;
	a[2] = 'n';
	a[3] = 'a';
	a[4] = 'n';
	a[5] = 'a';
	a[6] = ‘\0’;

   Here second and third statement means a[0]= 98; and a[1]=97;
   As we know the 98 is an ASCII value of b and 97 is ASCII value of a.

   Those two index holds the ASCII value instead of directly mentioning it.
   As it is character data type it will be converted to its character form.


    return 0;
}
*/