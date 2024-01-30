#include <stdio.h>

int main()
{
    int x = 1;
    int y = 1;
    int n;
    printf("Scrivi un numero e ti dico il suo fattoriale.");
    scanf("%d", &n);
    while (x<=n)
    {
        y = y * x;
        x = x + 1;
    }
    printf("%d", y);
    return(0);
}