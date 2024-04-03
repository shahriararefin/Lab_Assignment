#include<stdio.h>
#include<math.h>

int area(int n){

    float c_area= 3.1416*pow(n,2);

    printf("%f", c_area);

}

int main(){

    int r;
    scanf("%d", &r);

    area(r);

    return 0;
}