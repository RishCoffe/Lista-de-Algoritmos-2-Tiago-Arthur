#include <stdio.h>

float calcula_media(float n1, float n2, float n3, char tipo) {
    float media;

    if (tipo == 'A' || tipo == 'a') {
        media = (n1 + n2 + n3) / 3;
    } 
    else if (tipo == 'P' || tipo == 'p') {

        media = (n1 * 5 + n2 * 3 + n3 * 2) / (5 + 3 + 2);
    } 
    else {
        printf("Tipo inválido! Use 'A' para aritmética ou 'P' para ponderada.\n");
        return -1;
    }

    return media;
}

int main() {
    float nota1, nota2, nota3, resultado;
    char tipo;

    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite o tipo de média (A - aritmética / P - ponderada): ");
    scanf(" %c", &tipo);

    resultado = calcula_media(nota1, nota2, nota3, tipo);

    if (resultado != -1)
        printf("A média do aluno é: %.2f\n", resultado);

    return 0;
}