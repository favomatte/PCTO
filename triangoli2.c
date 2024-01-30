#include <stdio.h>

int main()
{
    int lato;
    int lato2;
    int lato3;
    printf("Inserisci le 3 lunghezze di un triangolo e io ti dirò se il triangolo da essi formato è scaleno, isoscele o equilatero!");
    scanf("%d, %d, %d.", &lato, &lato2, &lato3);
    if(lato != lato2 && lato2 != lato3 && lato != lato3)
    {
        printf("Il tuo triangolo è scaleno.");
    }
    else if((lato == lato2 && lato2 != lato3) || (lato2 == lato3 && lato3 != lato) || (lato == lato3 && lato3 != lato2))
    {
        printf("Il tuo triangolo è isoscele.");
    }
    else if(lato == lato2 && lato2 == lato3)
    {
        printf("Il tuo triangolo è equilatero.");
    }
    return(0);
}