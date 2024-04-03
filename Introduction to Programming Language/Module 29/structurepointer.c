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
    struct student* s_ptr;

    s.roll= 12;
    s.age= 18;
    s.weight= 53.14;

    s_ptr=&s;

    printf("%d\n",s_ptr->roll);
    printf("%d\n",s_ptr->age);
    printf("%f\n",s_ptr->weight);

    printf("%p",s_ptr);
    

    return 0;
}
    printf("%d\n",s.roll);
    printf("%d\n",s.age);
    printf("%f\n",s.weight);

    
    return 0;
}
