#include <stdio.h>
int main() {
    int matriz[3][3];
    int somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;
    // Preenchendo a matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Calculando a soma das diagonais
    for (int i = 0; i < 3; i++) {
        somaDiagonalPrincipal += matriz[i][i]; // Diagonal principal
        somaDiagonalSecundaria += matriz[i][2 - i]; // Diagonal secundária
    }    // Exibindo o resultado
    printf("Soma da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma da diagonal secundária: %d\n", somaDiagonalSecundaria);
    return 0;
}