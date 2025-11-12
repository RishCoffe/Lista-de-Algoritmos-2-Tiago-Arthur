#include <stdio.h>


float calcular(float num1, float num2, char operacao) {
    float resultado;

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Erro: divisão por zero!\n");
                return -1;
            }
            resultado = num1 / num2;
            break;
        default:
            printf("Símbolo inválido! Use +, -, * ou /.\n");
            return -1;
    }

    return resultado;
}

int main() {
    float a, b, res;
    char op;

    printf("Digite o primeiro número: ");
    scanf("%f", &a);

    printf("Digite o segundo número: ");
    scanf("%f", &b);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &op);

    res = calcular(a, b, op);

    if (res != -1)
        printf("Resultado: %.2f\n", res);

    return 0;
}
