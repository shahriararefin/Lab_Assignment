#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    n = 5;
    int* ptr;

    ptr = (int*) malloc(n*sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failure\n");
    }

    else
        {
            for(int i=0; i<n; i++)
            {
                scanf("%d", &ptr[i]);
            }

            for(int i=0; i<n; i++)
            {
                printf("%d ", ptr[i]);
        }
        }
    
    n= 10;
    ptr = (int*) realloc(ptr, n*sizeof(int));

    if (ptr == NULL)

    {
        printf("Memory allocation failure\n");
    }

    else
        {
            for(int i=0; i<n; i++)
            {
                scanf("%d", &ptr[i]);
            }

            for(int i=0; i<n; i++)
            {
                printf("%d ", ptr[i]);
            }
        }

    return 0;
}