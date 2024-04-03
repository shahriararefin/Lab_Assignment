#include<stdio.h>
#include<math.h>

    int p(int x);
   

int main(){

    int n,r,perm,comb;
    scanf("%d %d",&n,&r);

    perm= p(n)/p(n-r);
    comb= p(n)/p(n-r)* p(r);
    printf("%d \n%d",perm,comb);
    

    return 0;
}

int p(int x){

    int fact=1;

    for (int i = 1; i <=x; i++)
    {
        fact= fact*i;
    }

    return fact;
}


