#include<stdio.h>

void preencherVetor(int *vetor, int tamanho) {
    int num = 1, count = 0;

    while (count < tamanho)
    {
        if (num % 6 != 0 && num % 10 != 6) {
            *(vetor + count) = num;
            count++;
        }
        num++;
    }
}

int main() {
    int vetor[100];
    preencherVetor(vetor, 100);

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", *(vetor + i));
    }
    return 0;    
}