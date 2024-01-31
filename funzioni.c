#include <stdio.h>

void stampaCubo()
{
    int numero;
    int cubo;
    printf("inserisci un numero e ti dirò il suo cubo.\n");
    scanf("%d", &numero);
    cubo = numero*numero*numero;
    printf("il cubo di %d è %d!\n", numero, cubo);
}
int main()
{
    stampaCubo();
    stampaCubo();
    stampaCubo();
    stampaCubo();
    return(0);
}