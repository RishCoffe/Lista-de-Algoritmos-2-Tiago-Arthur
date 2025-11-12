#include <stdio.h>

void verifica_consumo(float km, float litros) {
    float consumo;

    if (litros <= 0) {
        printf("Quantidade de litros inválida!\n");
        return;
    }

    consumo = km / litros;

    printf("Consumo: %.2f Km/l\n", consumo);

    if (consumo < 8) {
        printf("Venda o carro!\n");
    } 
    else if (consumo >= 8 && consumo <= 14) {
        printf("Econômico!\n");
    } 
    else {
        printf("Super econômico!\n");
    }
}

int main() {
    float distancia, combustivel;

    printf("Digite a distância percorrida (Km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de gasolina consumida (litros): ");
    scanf("%f", &combustivel);

    verifica_consumo(distancia, combustivel);

    return 0;
}
