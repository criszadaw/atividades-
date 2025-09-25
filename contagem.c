#include <stdio.h>

int main() {
    int vetor[20], pares=0, impares=0;

    printf("Digite 20 numeros:\n");
    for(int i=0; i<20; i++) {
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0) pares++;
        else impares++;
    }

    printf("Pares: %d\nImpares: %d\n", pares, impares);
    return 0;
}
