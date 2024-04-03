#include<stdio.h> 

int is_distinct(int n){
        int ld;
        int count_digit[10]={0,0,0,0,0,0,0,0,0};

        while (n>0)
        {
            ld=n%10;
            count_digit[ld]++;
            n/=10;
        }
        for (int i = 0; i < 10; i++)
        {
           
            printf("%d --> %d\n", i, count_digit[i]);
            
        }
        return 1;
    }

int main(){

    is_distinct(16789724);

    return 0;
}