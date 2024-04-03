#include<stdio.h>
#include<string.h>

int main(){
    
    char name[123];
    

    fgets(name,sizeof(name),stdin);
    int l=strlen(name);

    printf("%d", l-1);
    
    return 0;
}