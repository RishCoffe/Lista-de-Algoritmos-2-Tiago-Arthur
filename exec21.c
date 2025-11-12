#include <stdio.h>

void desenha_exclamacoes(int n) {
    if (n <= 0) {
        printf("Valor invalido! Digite um numero maior que zero.\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("!");
        }
        printf("\n");
    }
}

int main() {
    int linhas;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);

    desenha_exclamacoes(linhas);

    return 0;
}
