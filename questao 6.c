#include <stdio.h>
#define PI 3.14159
int main() {
float r, area;
printf("Digite o raio do circulo: ");
scanf("%f", &r);
area = PI * r * r;
printf("Area do circulo: %.3f\n", area);
return 0;



}