#include <stdio.h>

int conversor(int h, int m, int s);

int main()
{
    int h, m, s;
    
    printf("Digite, respectivamente, as horas, os minutos e os segundos: ");
    scanf("%d %d %d", &h, &m, &s);

    printf("No total sao %d segundos", conversor(h, m, s));

    return 0;
}

int conversor(int h, int m, int s){

    int hps, mps, vt;

    hps = h*3600;
    mps = m*60;
    vt = hps+mps+s;

    return vt;

}