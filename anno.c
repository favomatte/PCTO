#include <stdio.h>

int main()
{
    int anno;
    printf("Scrivi un anno e ti dirò se è bisestile.");
    scanf("%d", &anno);
    if((anno % 4 == 0 || anno % 400 == 0) && anno % 100 != 0)
    {
        printf("L'anno da te inserito è bisestile!");
    }
    else
    {
        printf("L'anno da te inserito non è bisestile.");
    }
    return(0);
}