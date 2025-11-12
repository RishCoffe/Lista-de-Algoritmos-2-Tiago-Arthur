#include <stdio.h>

float F(float C);

int main()
{
    float C;
    
    printf("Escreva a temperatura, em Celsius, a ser convertida:\n");
    scanf("%f", &C);

    printf("A temperatura, em Fahrenheit, eh igual a %.2f", F(C));

    return 0;
}

float F(float C)
{
    float conv;

    conv = C*(9.0/5.0)+32.0;

    return conv;
}