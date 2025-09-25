#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", nome1);
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade1);

    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", nome2);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &idade2);

    media = (idade1 + idade2) / 2.0;

    printf("A idade media de %s e %s eh de %.1lf anos\n", nome1, nome2, media);

    return 0;
}