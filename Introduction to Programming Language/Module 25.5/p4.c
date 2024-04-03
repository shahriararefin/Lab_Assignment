#include<stdio.h>

    int nto1(int n){

        
        while (n!=0)
        {   
            printf("%d ",n);
            return nto1(n-1);
        }
        
        

    }

int main(){

    int n,x;
    scanf("%d", &n);

    nto1(n);

   

    return 0;
}