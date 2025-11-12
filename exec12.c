#include <stdio.h>

int soma_algarismos(int n) {
    int soma = 0;

    if (n <= 0) {
        printf("Número inválido\n");
        return -1;
    }

    while (n > 0) {
        soma += n % 10; 
        n /= 10;
    }

    return soma;
}

int main() {
    int numero, resultado;

    printf("Digite um número inteiro maior que zero: ");
    scanf("%d", &numero);

    resultado = soma_algarismos(numero);

    if (resultado != -1)
        printf("A soma dos algarismos é: %d\n", resultado);

    return 0;
}
