#include<stdio.h>

void preencherVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o Valor da posicao %d: ", i);
        scanf("%d", (vetor + i));
    }
}

int posicaoMenorElemento(int *vetor, int tamanho) {
    int pos = 0;
    for (int i = 1; i < tamanho; i++)
    {
        if (*(vetor + i) < *(vetor + pos)) {
        pos = i;
        }
    }
    return pos;
}

void trocar(int *vetor, int posMenor) {
    int temp = *(vetor + 0);
    *(vetor + 0) = *(vetor + posMenor);
    *(vetor + posMenor) = temp;
}

void mostrarVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(vetor + i));
    }
    printf("\n");
}

int main() {
    int vetor[5];
    preencherVetor(vetor, 5);

    int posMenor = posicaoMenorElemento(vetor, 5);
    trocar(vetor, posMenor);
    
    printf("Vetor apos Troca: \n");
    mostrarVetor(vetor, 5);
    return 0;
}