#include<stdio.h>

   int sum(int n){

        int summ=0;

            summ+= sum(n-1);

        return summ;
    }

int main(){

    int n;
    scanf("%d", &n);

    sum(n);

    printf("%d", sum(n));
    return 0;
}