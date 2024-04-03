#include<stdio.h>

int main(){

    int i=0;
    while(i<10)
{
	printf("I am inside the loop\n");

    i++;
}


    return 0;
}

/*
2.
int i=0;
while(i<10)
{
	printf(“I am inside the loop”);
}

In this one, the loop will go on forever as it said in the printf function. There’s nothing wrong if we want to make the loop ongoing. But if I need to stop the loop at some point we need to write this way to stop after a couple of times.




   int i=0;
    while(i<10)
{
    printf("I am inside the loop\n");
 
    i++;
}

This i++ will increase the value of i after printing the statement and it will stop when the value of i matches with the condition of while.

*/