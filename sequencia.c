#include <stdio.h>
int main() {
    int n, i;
    int a = 0, b = 1, c;
    printf("Quantos termos da sequencia de Fibonacci voce deseja? ");
    scanf("%d", &n);
    printf("\nSequencia de Fibonacci:\n");
    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", a);
        } else if (i == 1) {
            printf("%d ", b);
        } else {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
    printf("\n");
    return 0;
}