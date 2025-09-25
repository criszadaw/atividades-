#include <stdio.h>
int main() {
    int v1[5], v2[5];
    int i, produto = 0;

    printf("Digite 5 numeros para o primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite 5 numeros para o segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &v2[i]);
    }

    // calcula produto escalar
    for (i = 0; i < 5; i++) {
        produto += v1[i] * v2[i];
    }

    printf("\nProduto escalar = %d\n", produto);

    return 0;
}