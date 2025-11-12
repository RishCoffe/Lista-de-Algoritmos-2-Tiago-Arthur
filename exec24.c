#include <stdio.h>

void triangulo_central(int n) {
    if (n <= 0) {
        printf("Valor invalido! Digite um numero maior que zero.\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
    
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

    
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    triangulo_central(n);

    return 0;
}
