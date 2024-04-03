#include<stdio.h>
#include<stdlib.h>

struct student
{
    int roll;
    char name[20];
    int age;
    float weight;
};


int main(){

    struct student s = { 12, "Unknown" ,17, 45.76};

    printf("Roll--> %d\n",s.roll);
    printf("Name--> %s\n",s.name);
    printf("Age--> %d\n",s.age);
    printf("Weight--> %.2f\n",s.weight);

    return 0;
}