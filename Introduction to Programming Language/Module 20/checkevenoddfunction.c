#include<stdio.h>

    int check();

int main(){

    int a;
    check(a);
  

    return 0;
}

int check(int a){

    printf("Enter any integer value: ");
    scanf("%d", &a);

    if (a%2==0)
    {
        printf("Given input is even!");
    }

    else
        printf("Given Input is odd!");
    

}