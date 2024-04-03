#include<stdio.h>

int div3(int a, int b[]){

    int count=0;
    for (int i = 0; i < a; i++)
    {
        if (b[i]%3== 0)
        
            count++;

            else if(b[i]%5==0){

                div5(a,b);
            }
                
    }


        return count;
    }

    int div5(int a, int b[]){

        int count=0;
        for (int i = 0; i < a; i++)
        {
            if (b[i]%5== 0)
            {
                count++;
        }

        else
            return -1;

    }
    return count;


    }

int main(){

    int n;
    scanf("%d", &n);

    int array[n];
    for(int i=0;i<n;i++){

        scanf("%d", &array[i]);

    }

    div3(n, array);
    div5(n, array);

    return 0;
}