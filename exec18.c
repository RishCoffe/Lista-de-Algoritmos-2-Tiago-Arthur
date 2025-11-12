#include <stdio.h>

int potencia(int x, int z) {
    int resultado = 1;

    if (z < 0) {
        printf("Expoente invalido! Use um valor inteiro nao negativo.\n");
        return -1;
    }

    for (int i = 0; i < z; i++) {
        resultado *= x;
    }

    return resultado;
}

int main() {
    int base, expoente, resultado;

    printf("Digite a base (x): ");
    scanf("%d", &base);

    printf("Digite o expoente (z): ");
    scanf("%d", &expoente);

    resultado = potencia(base, expoente);

    if (resultado != -1)
        printf("%d elevado a %d = %d\n", base, expoente, resultado);

    return 0;
}
