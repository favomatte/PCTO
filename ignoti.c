#include <stdio.h>

int main()
{
    float n;
    float y = 0;
    float x = 0;
    while(n>=0)
    {
        printf("Inserisci un numero.");
        scanf("%f", &n);
        if(n<0)
        {
            printf("errore.");
            break;
        }
        y = y + 1;
        x = x + n;
        printf("la media è %f.", x/y);
    }
}