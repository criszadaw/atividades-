#include <stdio.h>
int main()
{
    double taxa;
    printf("Digite o valor da taxa de glicose: ");
    scanf("%lf", &taxa);
    if (taxa <= 100)
    {
        printf("Classificacao: Normal");
    }
    else if (taxa <= 140)
        printf("Classificacao: Elevado");
    else
    {
        printf("Classificacao: Diabetes");
    }
    return 0;
}