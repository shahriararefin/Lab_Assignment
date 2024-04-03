#include<stdio.h>

    int f1(int n){
        int fact=1;

        for (int i = 1; i <= n; i++)
        {
            fact*=i;
        }
        
        return fact;
    }

    int  f2(int x,int y){

        int fact=1;
        
        for (int i = 1; i <= n; i++)
        {
            fact*=i;
            printf("%d", fact);
        }

    }

int main(){

    int n;
    scanf("%d", &n);

    printf("%d", f1(n));

    return 0;

}