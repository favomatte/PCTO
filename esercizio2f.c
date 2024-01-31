#include <stdio.h>

void numeri()
{
    float numero1;
    float numero2;
    int operazione;
    printf("Scrivi 2 numeri.");
    scanf("%f %f", &numero1, &numero2);
    printf("OK, ora indica quale operazione vuoi eseguire sui due numeri da te indicati,\n 1. addizione\n 2. sottrazione\n 3. moltiplicazione\n 4. divisione");
    scanf("%d", &operazione);
    if(operazione==1)
    {
        printf("%f è il risultato della tua addizione!", numero1+numero2);
    }
    else if(operazione==2)
    {
        printf("%f è il risultato della tua sottrazione!", numero1-numero2);
    }
    else if(operazione==3)
    {
        printf("%f è il risultato della tua moltiplicazione!", numero1*numero2);
    }
    else if(operazione==4)
    {
        printf("%f è il risultato della tua divisione!", numero1/numero2);
    }
}
int main()
{
    numeri();
}