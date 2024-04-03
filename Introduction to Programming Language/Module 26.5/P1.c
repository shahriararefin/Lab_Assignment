#include<stdio.h> 
int main(){

    float x,y;
    scanf("%f%f",&x,&y);

    float* a;
    float* b;

    a= &x;
    b= &y;
   
    float sum= (*a+*b)/2;

    printf("%.3f", sum);

    return 0;
}