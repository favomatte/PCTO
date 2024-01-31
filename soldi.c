#include <stdio.h>

int main()
{
    float x = 5;
    float y;
    float z;
    while(y>0)
    {   
        printf("Inserisci il numero di prodotti che vuoi acquistare\n");
        scanf("%f", &y);
        if(y<0)
        {
            printf("seleziona un numero intero di prodotti!");
            break;
        }
        else if(y<30 && y>0)
        {
            z = y*x;
            printf("Il costo dei %f prodotti da te selezionati è di %f $\n", y, z);
        }
        else if(y>=30 && y<50)
        {
            z = y * (x - 0.5);
            printf("il costo dei %f prodotti da te selezionati è di %f, è stato applicato uno sconto!", y, z);
        }
        else
        {
            z = y * (x - 0.75);
            printf("il costo dei %f prodotti da te selezionati è %f, è stato applicato uno sconto!", y, z);
        }
    }   
}