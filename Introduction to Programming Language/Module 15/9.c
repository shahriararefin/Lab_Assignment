/*
Explain Bubble Sorting. Suppose you are given an array of integers 12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4. 
What will be the sequence of these integers if we run Bubble sort for only 5 iterations? 
*/

#include<stdio.h>
int main(){

    
    int t, arr[15]={12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (arr[i]>arr[i+1]) {

                t= arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
                
            }
    }

    for (int i = 0; i < 11; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    }

    
    return 0;
}