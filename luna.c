#include <stdio.h>

int main()
{
    int anno;
    printf("Inserisci il tuo anno di nascita.\n");
    scanf("%d", &anno);
    int dopo = anno - 1969;
    int prima = 1969 - anno;
    if(anno>1969)
    {
        printf("Wow, sei nato %d anni dopo il primo allunaggio!\n", dopo);
    }
    if(1969>anno)
    {
        printf("Wow sei nato %d anni prima del primo allunaggio!\n", prima);
    }
    if(1969==anno)
    {
        printf("Wow, sei nato lo stesso anno del primo allunaggio!\n");
    }
    return(0);
}