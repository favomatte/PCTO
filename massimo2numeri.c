#include <stdio.h>
float n(float n1, float n2)
{
    if(n1>n2)
    {
        printf("%2f è maggiore di %2f!", n1, n2);
    }
    else
    {
        printf("%2f è maggiore di %2f!", n2, n1);
    }
}
int main()
{
    float n1;
    float n2;
    printf("Dimmi 2 numeri e io ti dirò qual è il più grande.");
    scanf("%2f %2f", &n1, &n2);
    n(n1, n2);
    return(0);
}