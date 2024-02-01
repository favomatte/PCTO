#include <stdio.h>


float radice(float r)
{
    float temp, sqrt;
    sqrt = r / 2;
    temp = 0;
    while(sqrt != temp)
    {
        temp = sqrt;
        sqrt = ( r/temp + temp) / 2;
    }
    return sqrt;
} 

int main()
{
    float a;
    float b;
    float c;
    printf("Inserisci 3 lati di un triangolo e ti dirò la sua area e il suo perimetro!");
    scanf("%f %f %f", &a, &b, &c);
    float semiperimetro = (a+b+c)/2;
    
    float area = radice(semiperimetro*(semiperimetro - a)*(semiperimetro - b)*(semiperimetro - c));
    printf("Il perimetro del tuo triangolo è %f.", a+b+c);
    printf("L'area del tuo triangolo è %f\n", area);   
}