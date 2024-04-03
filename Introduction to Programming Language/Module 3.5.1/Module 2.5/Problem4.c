#include<stdio.h>
int main(){

    int a,b;

    scanf("%d %d", &a,&b);

    int sum=a+b;
    int sub=a-b;
    int multi=a*b;

    printf("%d %d %d", sum,sub,multi);
    return 0;
}