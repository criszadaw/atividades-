#include <stdio.h>
int contarOcorrencias(int matriz[4][4], int numero) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == numero) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int matriz[4][4];
    int numero;
    
    // Preenchendo a matriz
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Solicitando o número a ser contado
    printf("Digite o número a ser contado: ");
    scanf("%d", &numero);
    // Contando e exibindo o resultado
    int ocorrencias = contarOcorrencias(matriz, numero);
    printf("O número %d aparece %d vezes na matriz.\n", numero, ocorrencias);   
    return 0;
}