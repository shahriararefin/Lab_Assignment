#include<stdio.h>

struct student
{
    int roll;
    int age;
    float weight;
};

int main()
{

    struct student s;

    s.roll= 12;
    s.age= 18;
    s.weight= 53.14;

    printf("%d\n",s.roll);
    printf("%d\n",s.age);
    printf("%f\n",s.weight);

    
    return 0;
}
