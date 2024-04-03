/*
Suppose you want to declare an array of size 15 and the elements of the array will be in a geometric progression, the first one starting with 1 and the common ratio being 
2. For example, the first few elements of that array will be 1, 2, 4, 8, 16 , … and so on. Write a for loop to initialize the array with the  required progression.
*/
#include<stdio.h>
#include<string.h>
int main(){

    int n=15;
    int arr[n];
    arr[0] = 1;


    for(int i=1;i<n;i++){

        arr[i]=arr[i-1]*2;
    }
    for(int i=0;i<n;i++){

        printf("%d ",arr[i]);
    }


    return 0;
}