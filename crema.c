#include <stdio.h>

int main()
{
    int n;
    printf("Scrivi un numero:\n");
    scanf("%d", &n);
    printf("scrivi un altro numero:\n");
    scanf("%d", &n1);
    if(n>n1)
    {
        printf("il primo numero da te inserito è maggiore del secondo!\n");
    }
    
    else
    {
        printf("il secondo numero da te inserito è maggiore del primo!\n");
    }
    return(0);
}