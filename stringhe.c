#include <stdio.h>

int main() 
{ 
    char frase[200]; 
    printf("Inserisci una frase in minuscolo: "); 
    scanf("%s", frase); 
    int i = 0; 
    while (frase[i] != '\0') 
    { 
        if (frase[i] >= 'a' && frase[i] <= 'z') 
        { 
            frase[i] = frase[i] - 'a' + 'A'; 
        }
        i++; 
    }
    printf("%s\n", frase);
    return 0; 
}