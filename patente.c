#include <stdio.h>

int main()
{
    int n;
    printf("Scrivi la tua età:\n");
    scanf("%d", &n);

    if(n>=18)
    {
        printf("Lieti di annunciarti che hai l'età idonea per prendere la patente B in Italia!\n");
    }
    
    else
    {
        printf("Mi dispiace, ma non hai l'età idonea per prendere la patente B in Italia.\n");
    }
    return(0);
}