#include <stdio.h>

float radiceQuadrata(float numero)
{
  if(numero<0)
  {
    return -1;
  }
  float x = numero;
  float radiceApprossimata = numero;
  float radicePrecedente;
  while(1)
  {
    radicePrecedente = radiceApprossimata;
    radiceApprossimata = 0.5 * (radiceApprossimata + x / radiceApprossimata);
    if(radicePrecedente - radiceApprossimata < 0.0001)
    {
      break;
    }
    return radiceApprossimata;
  }
}
int main()
{
    float a;
    float b;
    float c;
    printf("Inserisci 3 lati di un triangolo e ti dirò la sua area e il suo perimetro!");
    scanf("%f %f %f", &a, &b, &c);
    printf("Il perimetro del tuo triangolo è %f.", a+b+c);
    float semiperimetro = (a+b+c)/2;
    float area = radiceQuadrata(semiperimetro*(semiperimetro - a)*(semiperimetro - b)*(semiperimetro - c));
    printf("L'area del tuo triangolo è %f\n", area);       
}