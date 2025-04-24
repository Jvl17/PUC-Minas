#include<stdio.h>

void subtraiVetores(int A[], int B[], int C[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
    {
        C[i] = A[i] - B[i];
    }
}

int main() {
    int A[10], B[10], C[10];

    printf("Preencha o vetor A:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("Preencha o vetor B:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }
    
    subtraiVetores(A, B, C, 10);

    printf("Vetor C (A-B):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d", C[i]);
    }
    return 0;
}