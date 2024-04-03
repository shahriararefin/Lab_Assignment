#include<stdio.h>

struct structarray
{
   double weight;
   int roll;
};



int main(){

    struct structarray a[12];

    for (int i = 0; i < 10; i++)
    {
        a[i].roll = 1+i;
        a[i].weight = 46+i*2;
    }
    
    
for (int i = 0; i < 10; i++)
{
    printf("%d %lf \n", a[i].roll, a[i].weight);
}

    

    return 0;
}