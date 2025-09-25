#include <stdio.h>
int main() {
    char escala;
    double temp, conv;
    printf("Digite a escala de origem (C/F): ");
    scanf(" %c", &escala);
    printf("Digite a temperatura: ");
    scanf("%lf", &temp);
    if (escala == 'C' || escala == 'c') {
        conv = (temp * 9 / 5) + 32;
        printf("Temperatura em Fahrenheit = %.2lf\n", conv);
    } else if (escala == 'F' || escala == 'f') {
        conv = (temp - 32) * 5 / 9;
        printf("Temperatura em Celsius = %.2lf\n", conv);
    } else {
        printf("Escala invalida!\n");
    }
    return 0;
}