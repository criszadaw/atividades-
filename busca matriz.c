#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {10, 25, 3, 14},
        {7, 18, 55, 9},
        {30, 11, 2, 40},
        {6, 28, 19, 8}
    };
    int maior = matriz[0][0];

    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior valor: %d\n", maior);
    return 0;
}
