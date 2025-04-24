#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void buscarNumero(int vetor[], int tamanho, int numero) {
    int encontrado = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            printf("Numero encontrado na posicao: %d\n", i);
            encontrado = 1;
        }
    }
    if (!encontrado)
    {
        printf("Numero %d nao encontrado no vetor. \n", numero);
    }
    
}
int main() {
    int vetor[20];
    int numero;
    srand(time(NULL));

    printf("Vetor gerado:\n");
    for (int i = 0; i < 20; i++) {
        vetor[i] = rand() % 100 + 1;
        printf("%d ", vetor[i]);
    }

    printf("\n Digite um numero para buscar: ");
    scanf("%d", &numero);

    buscarNumero(vetor, 20, numero);
    return 0;
}