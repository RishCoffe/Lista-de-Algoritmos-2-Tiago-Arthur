#include <stdio.h>

int soma_intervalo(int n1, int n2) {
    int soma = 0;

    if (n1 <= 0 || n2 <= 0) {
        printf("Os números devem ser positivos!\n");
        return -1;
    }

    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for (int i = n1 + 1; i < n2; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    int a, b, resultado;

    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &a, &b);

    resultado = soma_intervalo(a, b);

    if (resultado != -1)
        printf("A soma dos números entre %d e %d é: %d\n", a, b, resultado);

    return 0;
}
