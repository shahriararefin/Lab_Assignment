#include<stdio.h>

    
    int summ(int n,int arr[]){

        int sum;

        for (int i = 0; i < n; i++)
        {
            if (i%2==0)
            {
                if (arr[i]%2==0)
                {
                    sum=i+arr[i];
                }
                
            }

            else
                if (arr[i]%2!=0)
                {
                    sum=i+arr[i];
                }
                
            
        }

        printf("%d\n",sum);
        
        return 0;
    }


int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    summ(n,arr);

    return 0;
}