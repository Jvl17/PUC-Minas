#include<stdio.h>

int main() {
    float base;
    printf("Digite a Base do retangulo: \n");
    scanf("%f", &base);
    float altura;
    printf("Digite a Altura do retangulo: \n");
    scanf("%f", &altura);
    printf("A Area do Retangulo e de: %f", base * altura / 2);
    return 0;
}