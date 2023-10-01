#include <stdio.h>
#include <stdlib.h>

int **multiplicaM(int *A, int l1, int c1, int *B, int l2, int c2) {
    // Verificar se as dimensões das matrizes são compatíveis para multiplicação
    if (c1 != l2) {
        return NULL; // Retorna NULL se as dimensões não forem compatíveis
    }

    // Alocar memória para a matriz resultante
    int **resultado = (int **)malloc(l1 * sizeof(int *));
    if (resultado == NULL) {
        return NULL; // Retorna NULL em caso de falha na alocação de memória
    }

    for (int i = 0; i < l1; i++) {
        resultado[i] = (int *)malloc(c2 * sizeof(int));
        if (resultado[i] == NULL) {
            // Em caso de falha na alocação de memória, libera a memória alocada anteriormente e retorna NULL
            for (int j = 0; j < i; j++) {
                free(resultado[j]);
            }
            free(resultado);
            return NULL;
        }
    }

    // Inicializar a matriz resultante com zeros
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c2; j++) {
            resultado[i][j] = 0;
        }
    }

    // Realizar a multiplicação das matrizes A e B
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                resultado[i][j] += A[i * c1 + k] * B[k * c2 + j];
            }
        }
    }

    return resultado;
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int *A = (int *)malloc(n * n * sizeof(int));
    int *B = (int *)malloc(n * n * sizeof(int));

    if (A == NULL || B == NULL) {
        printf("Erro na alocação de memoria.\n");
        return 1;
    }

    printf("Digite os elementos da matriz A (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i * n + j]);
        }
    }

    printf("Digite os elementos da matriz B (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i * n + j]);
        }
    }

    int **resultado = multiplicaM(A, n, n, B, n, n);

    if (resultado == NULL) {
        printf("Dimensoes incompativeis para a multiplicacao das matrizes.\n");
        return 1;
    }

    printf("Resultado da multiplicacao das matrizes A e B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    // Liberar a memória alocada
    for (int i = 0; i < n; i++) {
        free(resultado[i]);
    }
    free(resultado);
    free(A);
    free(B);

    return 0;
}
