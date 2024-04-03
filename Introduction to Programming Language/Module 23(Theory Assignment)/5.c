#include<stdio.h>

int add_three_nums(int a,int b, int c){

    return a+b+c;

}

int main(){

    int a,b,c;
    scanf("%d %d", &a, &b);

    printf("%d",add_three_nums(a,b,c));
    return 0;
}