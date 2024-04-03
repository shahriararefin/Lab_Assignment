#include<stdio.h>
int main(){

    char name[2193];

    fgets(name,sizeof(name),stdin);

    

    printf("%s", name);
    return 0;
}