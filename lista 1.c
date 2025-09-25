#include <stdio.h>
int main() {
    double largura, comprimento, valor_m2, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor_m2);

    area = largura * comprimento;
    preco = area * valor_m2;

    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf\n", preco);

    return 0;
}



#include <math.h>
int main() {
    double base, altura, area, perimetro, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%lf", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(base * base + altura * altura);

    printf("Area = %.4lf\n", area);
    printf("Perimetro = %.4lf\n", perimetro);
    printf("Diagonal = %.4lf\n", diagonal);

    return 0;
}


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

#include <stdio.h>
int main() {
    int x, y, soma;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    soma = x + y;

    printf("SOMA = %d\n", soma);

    return 0;
}


#include <stdio.h>
int main() {
    double preco, dinheiro, troco;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - (preco * quantidade);

    printf("TROCO = %.2lf\n", troco);

    return 0;
}


