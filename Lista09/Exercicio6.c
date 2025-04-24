#include<stdio.h>

int main() {
    int matriz[2][3], transposta[3][2], soma = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++){
            printf("Digite o Valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
            transposta[j][i] = matriz[i][j];
        } 
    }

    printf("Matriz original:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz Transposta:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    printf("Soma dos elementos: %d\n", soma);
    return 0;
}