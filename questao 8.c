#include <stdio.h>
int main() {
float distancia, combustivel, consumo_medio;
printf("Digite a distancia total percorrida (em km): ");
scanf("%f", &distancia);
printf("Digite o total de combustivel gasto (em litros): ");
scanf("%f", &combustivel);
consumo_medio = distancia / combustivel;
printf("Consumo medio do carro: %.3f km/l\n", consumo_medio);
return 0;
}
