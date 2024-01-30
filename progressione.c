#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    printf("inserisci 3 numeri per verificare se si possono considerare in una progressione aritmetica:");
    scanf("%d, %d, %d", &n1, &n2, &n3);
    if(n2 - n1 == n3 - n2)
    {
        printf("i tuoi numeri sono in una progressione aritmetica!");
    }
    else
    {
        printf("i tuoi numeri non sono in una progressione aritmetica.");
    }
    return(0);
}