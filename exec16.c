#include <stdio.h>

void desenha_linha(int quantidade) {
    if (quantidade <= 0) {
        printf("Valor inválido! Informe um número maior que zero.\n");
        return;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("=");
    }

    printf("\n");
}

int main() {
    int n;

    printf("Digite a quantidade de sinais de igual (=) que deseja imprimir: ");
    scanf("%d", &n);

    desenha_linha(n);

    return 0;
}
