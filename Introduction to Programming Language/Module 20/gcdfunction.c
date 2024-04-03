#include<stdio.h>

int gcd(int a, int b);

int main(){
    
    int a,b,ans;
    scanf("%d %d",&a,&b);

    ans = gcd(a,b);
    printf("%d", ans);

    return 0;
}

int gcd(int a, int b){


    for (int i = a; i > 1; i--)
    {
        if (i%a==0 && i%b==0)
        {
            break;
            return i;
            
        }
        
    }
   
}