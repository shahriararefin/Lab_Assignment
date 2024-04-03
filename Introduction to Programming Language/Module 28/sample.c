#include<stdio.h>
void func(int* p){

    printf("%d\n", *p);

}

int main(){

    int a=5;

    func(&a);
    
    return 0;
}