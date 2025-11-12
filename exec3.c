#include <stdio.h>

void verificador(int valor);

int main()
{
    int valor;

    printf("Digite o valor a ser verificado: ");
    scanf("%d", &valor);
    verificador(valor);
    
    return 0;
}

void verificador(int valor)
{
    if(valor>1){
        printf("1\n");
    }
    else if(valor<1 && valor!=0){
        printf("-1\n");
    }
    else if(valor == 0) {
        printf("0\n");
    }
}