#include <stdio.h>
int main() {
float A, B, C;
printf("Digite os tres valores A, B e C:\n");
scanf("%f %f %f", &A, &B, &C);
float area_quadrado = A * A;
float area_triangulo = (A * B) / 2;
float area_trapezio = ((A + B) * C) / 2;
printf("Area do quadrado: %.4f\n", area_quadrado); printf("Area do triangulo: %.4f\n", area_triangulo);
printf("Area do trapezio: %.4f\n", area_trapezio);
return 0;

}
