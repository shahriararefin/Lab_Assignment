#include<stdio.h>

void pr(int n){

    int i;
    if (n>=0)
    {
        for ( i = n; i >=-n; i--){

            printf("%d ", i);
        }
        
        int ans= i;
    }

    if (n<=0)
    {
        for (int i = n; i <= -n; i++){
            
            printf("%d ", i);
        }
        
        int ans= i;
     
    }  
       
}


int main(){

    int n;
    scanf("%d", &n);

    pr(n);
    return 0;
}