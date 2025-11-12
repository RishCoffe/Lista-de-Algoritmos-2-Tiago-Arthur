#include <stdio.h>

int eh_primo(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1; 
}

int contar_primos(int N) {
    int contador = 0;

    if (N <= 2)
        return 0;

    for (int i = 2; i < N; i++) {
        if (eh_primo(i))
            contador++;
    }

    return contador;
}

int main() {
    int N, quantidade;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    quantidade = contar_primos(N);

    printf("Quantidade de numeros primos abaixo de %d: %d\n", N, quantidade);

    return 0;
}
