#include <stdio.h>

void somarMatrizes(int matriz1[3][3], int matriz2[3][3], int resultado[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int matriz1[3][3], matriz2[3][3], resultado[3][3];
    
    // Preenchendo a primeira matriz
    printf("Digite os elementos da primeira matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }
    // Preenchendo a segunda matriz
    printf("Digite os elementos da segunda matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }
    // Somando as matrizes
    somarMatrizes(matriz1, matriz2, resultado);
    // Imprimindo o resultado
    printf("\nResultado da soma das matrizes:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }   
    return 0;
}