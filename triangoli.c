#include <stdio.h>

int main()
{
    int lato1;
    int lato2;
    int lato3;
    printf("Inserisci 3 lunghezze in cm e io ti dirò se possono essere lati di un triangolo.");
    scanf("%d, %d, %d.", &lato1, &lato2, &lato3);
    if (lato1 + lato2 > lato3 && lato1 + lato3 > lato2 && lato2 + lato3 > lato1)
    {
        printf("Le tue misure possono formare 3 lati di un triangolo!");
    }
    else
    {
        printf("Le tue misure non possono formare i lati di un triangolo.");
    }
    return(0);
}