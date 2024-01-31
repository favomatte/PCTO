#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x;
    unsigned short y;
    short z = 0;
    while(x!=0)
    {
        printf("Scegli un numero e scopri se hai indovinato!\n");
        scanf("%d", &x);
        unsigned short y=rand() % 20 + 1;
        if(x==y)
        {
            printf("Bravo hai indovinato, hai guadagnato 1 punto!");
            z=z+1;
            printf("Ora hai %d punti!", z);
        }
        else if(x==0)
        {
            break;
        }
        else
        {
            printf("Mi dispiace, il numero giusto era %d\n Ritenta e sarai più fortunato, oppure clicca 0 per uscire.", y);
        }
    }
}