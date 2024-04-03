/*
You are given an positive integer N (Here N means number of terms) . Now print the following sequence as shown
below.
For N=10 , the sequence should be
0 1 1 2 3 5 8 13 21 34
Sample Input 1: Sample Output 1:
10 0 1 1 2 3 5 8 13 21 34
Sample Input 2: Sample Output 2:
1 0
Sample Input 3: Sample Output 3:
2 0 1

Hints – Basically It’s a Fibonacci sequence. The Fibonacci sequence is a sequence where the next term is the sum of
the previous two terms. The first two terms of the Fibonacci sequence are 0 followed by 1.
>> Implement it using array.
*/

#include<stdio.h>
int main(){

    int n,t1=0,t2=1,next_t=t1+t2;
    scanf("%d",&n);

    if(n==0){
        return 0;
        }
        
        if(n==1){
            return 1;
        }

    printf("%d %d ", t1, t2);

     for (int i = 3; i <= n; ++i) {
    printf("%d ", next_t);
    t1 = t2;
    t2 = next_t;
    next_t= t1 + t2;
  }

    return 0;
}