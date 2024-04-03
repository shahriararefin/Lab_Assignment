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

    //designated initialisation
    struct student s = { .age = 17,.roll = 12, .name = "Unknown" , .weight 45.76};

    printf("Roll--> %d\n",s.roll);
    printf("Name--> %s\n",s.name);
    printf("Age--> %d\n",s.age);
    printf("Weight--> %.2f\n",s.weight);

    return 0;
}