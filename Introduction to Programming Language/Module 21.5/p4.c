#include<stdio.h>

void alleven(int n){

    for (int i = 2; i <= n; i++)
    {
        if (i%2==0)
        {
            printf("%d ", i);
        }
        
    }

}

int main(){

    int n;
    scanf("%d", &n);

    
    alleven(n);
    
    

    return 0;
}