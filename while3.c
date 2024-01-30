#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    while (x<101)
    {
        y = y + x;
        x = x + 1;
    }
    printf("%d", y);
    return(0);
}