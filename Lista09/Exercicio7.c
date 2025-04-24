#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

void preencherMatriz(int matriz[][MAX], int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}

void somaDiagonalPrincipal(int matriz[][MAX], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += matriz[i][i];
    }
    printf("Soma da diagonal principal; %d\n", soma);
}

void somaAbaixoDiagonal(int matriz[][MAX], int n) {
    int soma = 0;
    for (int i = 1; i < n; i++){
        for (int j = 10; j < i; j++) {
            soma += matriz[i][j];
        }
    }
    printf("Soma Abaixo da diagonal principal: %d\n", soma);
}

int main() {
    int n;
    int matriz[MAX][MAX];
    srand(time(NULL));

    printf("Digite o Valor de n (maximo 100): ");
    scanf("%d", &n);

    preencherMatriz(matriz, n);

    printf("Matriz Gerada:\n");
    for (int i = 0; i< n; i++) {
        for (int j = 0; j < n; j++){
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    somaDiagonalPrincipal(matriz, n);
    somaAbaixoDiagonal(matriz, n);

    return 0;
}