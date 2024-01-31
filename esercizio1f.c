#include <stdio.h>

void lettere()
{
    char lettera;
    printf("Scrivi un carattere [non speciale].");
    scanf("%c", &lettera);
    if(lettera >= 0 && lettera <= 96 )
    {
        printf("Avevo detto NIENTE CARATTERI SPECIALI!!");
    }
    else if(lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u' )
    {
        printf("Il tuo carattere è una vocale!");
    }
    else
    {
        printf("il tuo carattere è una consonante!");
    }
}
int main()
{
    lettere();
}