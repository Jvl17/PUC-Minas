#include<stdio.h>

void preencherValores(int X[]) {
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor da posicao %d", i);
        scanf("%d", &X[i]);
    }
}

int copiarNegativos(int X[], int negativos[]) {
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (X[i] < 0)
        {
            negativos[count] = X[i];
            count++;
        }       
    }
    return count;
}

int main() {
    int X[10], negativos[10];
    int qtdNegativos;

    preencherValores(X);
    qtdNegativos = copiarNegativos(X, negativos);

    printf("Numeros negativos encontrados:\n");
    for (int i = 0; i < qtdNegativos; i++) {
        printf("%d ", negativos[i]);
    }
    return 0;
}