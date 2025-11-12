#include <stdio.h>

int QP (int n);

int main()
{   
    int n;

    printf("Digite o numero: ");
    scanf("%d", &n);

    if(QP(n)){
        printf("Eh um quadrado perfeito\n");
    }else{
        printf("Nao eh um quadrado perfeito\n");
    }
    
    return 0;
}

int QP(int n)
{   
    int i=0;

    if(n<0){
        return 0;
    }

    while(i*i<=n)
    {
        if(i*i==n){
            return 1;
        }
        i++;
    }

    return 0;

}