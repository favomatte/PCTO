#include <stdio.h>

int main()
{
    int francesca;
    int eleonora;
    int andrea;
    int flavio;
    printf("inserisci l'età di Francesca.\n"); 
    scanf("%d", &francesca);
    printf("inserisci l'età di Eleonora\n");
    scanf("%d", &eleonora);
    printf("inserisci l'età di Andrea\n");
    scanf("%d", &andrea);
    printf("inserisci l'età di Flavio\n");
    scanf("%d", &flavio);
    int x = francesca + eleonora + andrea + flavio;
    printf("la somma delle età è %d\n", x );
    
    
    return(0);
}