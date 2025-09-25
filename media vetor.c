#include <stdio.h>

int main() {
    float vetor[8], soma=0;

    printf("Digite 8 numeros reais:\n");
    for(int i=0; i<8; i++) {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    printf("Media: %.2f\n", soma/8);
    return 0;
}
