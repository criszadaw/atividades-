#include <stdio.h>

int main() {
    double preco, dinheiro, total, troco;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    total = preco * quantidade;

    if (dinheiro >= total) {
        troco = dinheiro - total;
        printf("TROCO = %.2lf\n", troco);
    } else {
        troco = total - dinheiro;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", troco);
    }

    return 0;
}
