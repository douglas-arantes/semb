#include <stdio.h>

void inverte(int A[], int n) {
    int i, j;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        // Inverte as posições A[i] e A[j]
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    inverte(vetor, n);

    printf("Vetor invertido:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
