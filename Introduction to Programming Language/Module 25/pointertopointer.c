#include<stdio.h>


int main(){

    int a=12;
    int* ctg;

    ctg = &a;

    int** p;

    p= ctg;

    printf("%p\n", ctg);
    printf("%p\n", p);
    printf("%p", &a);

    return 0;
}