#include<stdio.h>
int main()
{
    int a=0,i=0;
    printf("4");
    for (i=0; i<5; i++)
    {
        a+=1;
        if (i==3)
            break;
    }
    printf("%d\n",a);
    return 0;
}

/* 
    first e print hoise 4 then loop e dhukse

    loop e dhukar por loop ghurse 3 porjonto i er value

    erpore loop break hoya gese

    tarpore abar last e print korse a er value 
    ar value hoitaase 4 jehetu loop ghurse 4 bar

    0 theke 3 count koren a+=1 koto hoy

    ar first e je 4 print korse oita answer chay nai
    answer chaise a er value koto
*/