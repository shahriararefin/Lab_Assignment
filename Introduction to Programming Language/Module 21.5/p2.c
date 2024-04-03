#include<stdio.h>

void star(int n){

    int i,j;

    for ( i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j++)
        {
           printf(" * "); 
        }
        printf("\n");
    }
    
}

int main(){

    int N;
    scanf("%d",&N);

    int p=N-1;
    int q=(N*2)-1;
/*
    for(int i=N; i>=1; i--)
    {
        for(int j=1; j<=p; j++)
        {
            printf(" ");
        }
        for(int j=q-(p*2); j>=1 ; j--)
        {
            if(i%2==0)
            {
                printf("*");
            }
            else
                printf("^");

        }
        for(int j=1;j<=p;j++)
        {
            printf(" ");
        }
        printf("\n");
        p--;
    }

}

*/

for (int i = 0; i < N; i++)
{
    for (int j = 0; j < p; j++)
    {
        printf("*");
    }
    printf("\n");

}
}