#include <stdio.h>
int main() {
    int codigo, quant;
    double preco, total;
    printf("Digite o codigo do produto e a quantidade: ");
    scanf("%d %d", &codigo, &quant);
    if (codigo == 1) preco = 5.00;
    else if (codigo == 2) preco = 3.50;
    else if (codigo == 3) preco = 4.80;
    else if (codigo == 4) preco = 8.90;
    else if (codigo == 5) preco = 7.32;
    else {
        printf("Codigo invalido!\n");
        return 0;
    }
    total = preco * quant;
    printf("Total a pagar: R$ %.2lf\n", total);
    return 0;
}