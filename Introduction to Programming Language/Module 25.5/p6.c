#include<stdio.h>

int sumofint(int a,int b, int c){

    return a+b+c;

}

int main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    sumofint(a,b,c);

    printf("%d", sumofint(a,b,c));


    return 0;
}