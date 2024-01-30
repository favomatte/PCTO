#include <stdio.h>

int main()
{
    int n1;
    int x = 2;
    printf("Scrivi un numero e ti dico se è un numero primo.\n");
    scanf("%d", &n1);
    while(x < n1)
    {
        if(n1 % x == 0)
        {
            
            scanf("Il tuo è un numero primo!");

        }
        else
        {
            printf("Il tuo non è un numero primo.");
        }
    }
    if()
    {
        printf("il tuo numero è primo!");
    }
    else
    {
        printf("il tuo numero non è primo.");
    }
    return(0);
}