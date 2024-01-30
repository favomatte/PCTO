#include <stdio.h>

int main()
{
    float C;
    printf("inserisci la temperatura attuale in gradi celsius:");
    scanf("%f", &C);
    float F = C * 9/5 + 32;
    float K = C + 273.5;
    if(C < -273.15) 
    {
        printf("error\n");
    }
    else 
    {
        printf("la temperatura attuale in fahrenheit è %f\n la temperatura attuale in kelvin è %f", F, K);
    }
    return(0);
}