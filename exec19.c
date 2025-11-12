#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;

    if (n < 0) {
        printf("Numero invalido! Digite um valor inteiro positivo.\n");
        return -1;
    }

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int numero, resultado;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    if (resultado != -1)
        printf("O fatorial de %d e: %d\n", numero, resultado);

    return 0;
}
