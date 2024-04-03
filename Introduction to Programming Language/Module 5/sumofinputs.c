#include<stdio.h>

int main(){

    int n,w,sum;
    printf("Number of passengers: ");
    scanf("%d",&n);


    printf("Input weights:\n");

    for(int i=0;i<n;i++){
        scanf("%d",&w);
        sum+=w;
     
    }

    printf("Total weight: %d",sum);
    return 0;
}