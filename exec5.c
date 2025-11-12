#include <stdio.h>

void volume(float raio);

int main()
{
    float raio;

    printf("Digite o tamanho do raio: ");
    scanf("%f", &raio);

    volume(raio);

    return 0;
}

void volume(float raio)
{
    float v;

    v = (4.0/3.0)*3.14159*(raio*raio*raio);

    printf("O volume da esfera eh aproximadamente igual a %.2f", v);

    return;
}