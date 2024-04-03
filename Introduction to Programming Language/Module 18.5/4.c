#include<stdio.h>
#include<string.h>

int main(){
    // taking char string
    int i,j,k;
    char s[123];

    //taking input from user
    fgets(s, sizeof(s), stdin);

    //removing duplicate characters from string
   for ( i = 0; i < strlen(s); i++)
    {
        for ( j = i+1; j != '\0'; j++)
        {
            if (s[j]==s[i])
            {
                for ( k = j; k != '\0'; k++)
                {
                    s[k]=s[k+1];
                }

            }

        }

    }

    //printing after removing duplicates input
    puts(s);

    return 0;
}
