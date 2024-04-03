#include<stdio.h>
int main(){

    int n,x,sum;

    scanf("%d",&n);
    x=n;

    for (int i = 0; i < n; i++)
    {   
        if (x%2==0)
        {
            sum=n/2;
            printf("%d ",sum);
            x=sum;
            if (x==1)
            {
                return 1;
            }
            
        }
        
        
        else
        {
            sum=(x*3)+1;
            printf("%d ",sum);
            x=sum;
            if (x==1)
            {
                return 1;
            }
        }
        
        
    }
}
    

