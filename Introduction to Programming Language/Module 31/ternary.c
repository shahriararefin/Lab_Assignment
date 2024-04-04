#include<stdio.h>

int main(){

    int num1;
    int num2;

    printf("Enter two integer numbers: \n");

    scanf("%d %d" ,&num1, &num2);

    int max= (num1 >num2 )? num1:num2;

    printf("The max input is %d", max);

    return 0;
}