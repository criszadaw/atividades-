#include <stdio.h>

int main() {
    int v1[5], v2[5], v3[10];
    int i, j = 0;

    printf("Digite 5 numeros para o primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite 5 numeros para o segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &v2[i]);
    }
    for (i = 0; i < 5; i++) {
        v3[j++] = v1[i];
        v3[j++] = v2[i];
    }

    printf("\nVetor intercalado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}
