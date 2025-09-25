#include <stdio.h>
int main()
{
    int i, vetor[10], soma = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %do. numero: ", i + 1);
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    printf("Soma dos elementos: %d\n", soma);
    return 0;
}