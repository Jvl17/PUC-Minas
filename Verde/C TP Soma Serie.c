#include <stdio.h>

int main() {
    int n;
    double soma = 0.0;
    int numerador = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        soma += (double)numerador / i;
        numerador += 2;
    } 

    printf("S = %.2f\n", soma);

    return 0;
}