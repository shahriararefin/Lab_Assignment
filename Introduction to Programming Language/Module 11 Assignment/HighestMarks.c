//https://www.hackerrank.com/contests/batch-2-course-2-lab-assignment-01/challenges/highest-marks-1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    

    int n,i,j;
    int highest,difference=0,arr[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    highest=arr[0];

    for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++){
            if (arr[i] > arr[j]){
             highest= arr[i];
            }
        }

    }

    for (int i = 0; i < n; i++)
    {
       difference = highest - arr[i];
       printf("%d ", difference);
    }
    

    return 0;
}
