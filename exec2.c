#include <stdio.h>

void imprime_data(int dia, int mes, int ano);

int main()
{
    int dia, mes, ano;
    printf("Digite uma data no formato DD MM AAAA: \n");
    scanf("%d%d%d", &dia, &mes, &ano);
    imprime_data(dia, mes, ano);
    return 0;
}

void imprime_data(int dia, int mes, int ano)
{
    char meses[12][20] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    printf("%d de %s de %d\n", dia, meses[mes-1], ano);
    return;
}
