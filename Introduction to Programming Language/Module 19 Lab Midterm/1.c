#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n,s=0;
    scanf("%d",&n);

    if (n%3==0)
    {   
        s= n/3;
        printf("%d",s);
    }

    else{
        printf("-1");
    }
    
    
    
    return 0;
}
