#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int i,j;
    int n,m;
    scanf("%d%d",&n,&m);
    
    int arr[n][m];
    

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    

    
    return 0;
}
