#include <stdio.h>
int main() {
int segundos, horas, minutos, resto;
printf("Digite a duracao em segundos: ");
scanf("%d", &segundos);
horas = segundos / 3600;
resto = segundos % 3600;
minutos = resto / 60;
segundos = resto % 60;
printf("Duracao: %02d:%02d:%02d\n", horas, minutos, segundos);
 return 0;
}
