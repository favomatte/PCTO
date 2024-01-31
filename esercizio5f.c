#include <stdio.h>

int main()
{
    float a;
    float b;
    float c;
    printf("Inserisci 3 lati di un triangolo e ti dirò la sua area e il suo perimetro!");
    scanf("%f %f %f", a, b, c);
    printf("Il perimetro del tuo triangolo è %f.", a+b+c);
    printf("L'area del tuo triangolo è ");       
}
double my_root(double x)
{
  double guess;
  const double epsilon = 0.00001;

  guess = 1;
  while((guess * guess < x - epsilon) || (guess * guess > x + epsilon)) {
    guess = (x / guess + guess) / 2;
  }

  return guess;
}
