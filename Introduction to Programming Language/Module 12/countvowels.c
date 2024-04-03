#include<stdio.h>
int main (){

    int counter=0;
    char name[1213];
    fgets(name,sizeof(name),stdin);

    int i=0;
    while (name[i]!='\0'){
        if (name[i]=='a' || name[i]=='A')
        
            counter++;
        

        else if (name[i]=='e' || name[i]=='E')
        
            counter++;
        
        
        else if (name[i]=='i' || name[i]=='I')
        
            counter++;
        

        else if (name[i]=='o' || name[i]=='O')
        
            counter++;
        

        else if (name[i]=='u' || name[i]=='U')
        
            counter++;
        

        i++;
    }

    printf("%d", counter);
    

    return 0;
}