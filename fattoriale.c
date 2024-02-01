#include <stdio.h>
float fattoriale(float n)
{
    float n1=1;
    float n2=1;
    while (n1<=n)
    {
        n2 = n2 * n1;
        n1 = n1 + 1;
    }
    return(n2);
}
int main()
{
    float n;
    printf("Inserisci un numero e ti dirò il suo fattoriale.");
    scanf("%f", &n);
    printf("Il fattoriiale del tuo numero è %f", fattoriale(n));
    return(0);
}