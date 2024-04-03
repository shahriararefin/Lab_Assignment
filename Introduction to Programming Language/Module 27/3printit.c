#include<stdio.h>
int main(){

    int x,y;
    scanf("%d %d",&x, &y);

    int* ptrX;
    int* ptrY;

    ptrX = &x;
    ptrY = &y;

    printf("ptrX: %d ptrY: %d\n", *ptrX, *ptrY);


    return 0; 

}