#include <stdio.h>


int forma_triangulo(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0)
        return 0;
    if (a < b + c && b < a + c && c < a + b)
        return 1;
    else
        return 0;
}

void tipo_triangulo(float a, float b, float c) {
    if (a == b && b == c)
        printf("Triângulo equilátero\n");
    else if (a == b || a == c || b == c)
        printf("Triângulo isósceles\n");
    else
        printf("Triângulo escaleno\n");
}

int main() {
    float x, y, z;

    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &x, &y, &z);

    if (forma_triangulo(x, y, z)) {
        printf("Os lados formam um triângulo.\n");
        tipo_triangulo(x, y, z);
    } else {
        printf("Os lados NÃO formam um triângulo.\n");
    }

    return 0;
}
