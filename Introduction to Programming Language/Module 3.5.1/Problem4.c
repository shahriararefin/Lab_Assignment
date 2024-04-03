// Rahim has X% share, Karim has Y% share and Habib has (X*Y)% share of the company Zeta. 
// Can you tell the amount of share of Habib?
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   
    int X,Y;
    char c,d;

    scanf("%d %c", &X,&c);
    scanf("%d %c", &Y,&d);



    printf("%d%c",X*Y,c);

    return 0;
}
