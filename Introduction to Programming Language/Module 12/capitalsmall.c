#include<stdio.h>
int main(){

    char name[12312];
    fgets(name,sizeof(name),stdin);

    for (int i = 0; name[i]!='\0'; i++)
    {
        if (name[i]>='a' && name[i]<='z')
        {
            name[i]-= 32;
        }
        
        
    }
    

    puts(name);

    return 0;
    
}