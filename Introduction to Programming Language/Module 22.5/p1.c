#include<stdio.h>



int main(){
    int n;
    char s[123];

    scanf("%s", s);

   // binary(n);

   // int binary(int n){

    int i;

    while (s[i]!='\0')
    {
         if(s[i]==0 && s[i]==1){

            printf("YES");
            break;
            
        }
    

    else
        printf("NO");
        break;
 
    }
    
    
       

    return 0;
}
    
    
