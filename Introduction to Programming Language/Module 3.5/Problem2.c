#include<stdio.h>
int main(){

    int a,b,c;

    scanf("%d %d %d", &a,&b,&c);

    if (b>a && b>c){
        printf("B is bigger");
    }
    
   else if (a>c)
   {
    printf("A is bigger");
   }

   else if (c>a && c>b)
   {
    printf("C is bigger");
   }
   else
   {
    printf("They are equal");
   }
   
   
    return 0;
}