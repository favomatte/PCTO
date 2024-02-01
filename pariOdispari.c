#include <stdio.h>
int numero(int x)
{
     if(x%2==0)
    {
        printf("Il tuo numero è pari!\n");
    }
    else
    {
        printf("Il tuo numero è dispari!\n");
    } 
}
int main()
{
    int x;
    printf("Inserisci un numero e ti dirò se è pari o dispari!\n");
    scanf("%d", &x);
    numero(x);
    return(0);
}