#include <stdio.h>

int main() {
    int vetor[10], num, encontrado = 0;

    printf("Digite 10 numeros:\n");
    for(int i=0; i<10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero a buscar: ");
    scanf("%d", &num);

    for(int i=0; i<10; i++) {
        if(vetor[i] == num) {
            encontrado = 1;
            break;
        }
    }

    if(encontrado) printf("Numero encontrado!\n");
    else printf("Numero nao encontrado.\n");

    return 0;
}
