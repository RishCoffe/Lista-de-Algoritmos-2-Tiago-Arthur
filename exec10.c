#include <stdio.h>

float maior(float p, float s);

int main()
{   
    float p, s;

    printf("Digite os dois numeros:\n");
    scanf("%f %f", &p, &s);
    
    printf("O maior numero eh %.2f", maior(p, s));

    return 0;
}

float maior(float p, float s)
{
    if(p>s){
        return p;
    }else{
        return s;
    }
}