#include<stdio.h>

struct Student{
    char name[50];
    int roll;
    double marks;
};


int main(){

    struct Student cls[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%s", &cls[i].name);
        scanf("%d", &cls[i].roll);
        scanf("%lf", &cls[i].marks);

    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("Name->%s\n", cls[i].name);
        printf("Roll->%d\n", cls[i].roll);
        printf("Marks->%lf\n", cls[i].marks);

    }

    return 0;
}