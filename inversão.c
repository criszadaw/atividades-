#include <stdio.h>
int main() {
    int vetor[10];
    int i;
    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("\nVetor invertido:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
