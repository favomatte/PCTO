#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("Inserisci due coordinate di un punto x e y e ti dirò in che quadrante del piano cartesiano sono.");
    scanf("%d %d", &x, &y);
    if (x==0 && y==0)
    {
        printf("Il tuo punto si trova sul punto di origine O!");
    }
    else if (x>0 && y>0)
    {
        printf("Il tuo punto si trova nel primo quadrante del piano cartesiano!");
    }
    else if (x<0 && y<0)
    {
        printf("Il tuo punto si trova nel terzo quadrante del piano cartesiano!");
    } 
    else if (x>0 && y<0)
    {
        printf("Il tuo punto si trova nel quarto quadrante del piano cartesiano!");
    }
    else if (x<0 && y>0)
    {
        printf("Il tuo punto si trova nel secondo quadrante del piano cartesiano!");
    }
    else if (x==0 && (y<0 || y>0))
    {
        printf("il tuo punto si trova sull'asse delle y!");
    }
    else if ((x<0 || x>0) && y==0)
    {
        printf("Il tuo punto si trova sull'asse delle x!");
    }
}
