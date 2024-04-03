#include<stdio.h>

    void func(int x,int y,int* p,int* q) {

        *p = x>y? x:y;
        *q = x<y? x:y;
    }
int main(){

    int a=5, b=7;
    int large, small;

    func(a,b,&large,&small);

    printf("%d\n",large);
    printf("%d\n",small);

    return 0;
}