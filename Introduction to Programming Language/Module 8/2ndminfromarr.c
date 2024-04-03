/*
#include<stdio.h>
int main(){

    int n=6,i;
    int arr[]={12,7,19,26,11,6};


    int min=arr[0];

    for (i = 0; i < n; i++) {

        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    
    int smin= arr[i]>min;
    
    printf("The second min value is: %d",smin);
   

    return 0;
}
*/

#include<stdio.h>

int main()
{

    int arr[5],i,sum=0;
    for(i=1; i<=5; i+=1)
    {
        arr[i-1]=i-1;
    }
    for(i=0; i<5; i+=1)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}