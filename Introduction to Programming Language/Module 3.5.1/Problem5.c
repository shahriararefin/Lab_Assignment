// Rahim was decorating the book shelf with his books. He has two bookshelves, and he wants to put equal books in each book shelf. 
// At first he put some random number of books on both shelves by guessing numbers. 
// Now he wants to know the difference between the number of books in these two shelves so that he can rearrange them. Help him!

//You will be given two integer numbers A and B , you need to print the difference between these two numbers. Remember, difference is always positive.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    


    int A,B;

    scanf("%d %d",&A,&B);

    if (A>B)
    {
        printf("%d",A-B);
    }
    
    else{
        printf("%d",B-A);
    }


    return 0;
}
