#include <stdio.h>
int main() {
char nome[100];
float valorHora, horasTrabalhadas, pagamento;
printf("Nome do funcionario: ");
scanf("%s", nome);  // ou use fgets se quiser aceitar nomes com espaços
printf("Valor por hora: ");
scanf("%f", &valorHora);
printf("Horas trabalhadas: ");
scanf("%f", &horasTrabalhadas);
pagamento = valorHora * horasTrabalhadas;
printf("Funcionario %s vai receber R$ %.2f\n", nome, pagamento);
return 0;
}
