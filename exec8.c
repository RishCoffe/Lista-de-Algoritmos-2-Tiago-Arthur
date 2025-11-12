#include <stdio.h>
#include <math.h>  

double Hipotenusa(double a, double b);

int main() {
    double a, b;

    printf("Digite o valor do cateto a: ");
    scanf("%lf", &a);

    printf("Digite o valor do cateto b: ");
    scanf("%lf", &b);

    double h = Hipotenusa(a, b);

    printf("O valor da hipotenusa eh: %.2lf\n", h);

    return 0;
}
 double Hipotenusa(double a, double b)
{
    return sqrt(a * a + b * b);
}