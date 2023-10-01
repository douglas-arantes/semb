#include <stdio.h>
#include <stdlib.h>

int **somaMatriz(int *A, int l1, int c1, int *B, int l2, int c2) {
    // Verificar se as dimensões das matrizes são compatíveis para soma
    if (l1 != l2 || c1 != c2) {
        return NULL; // Retorna NULL se as dimensões não forem compatíveis
    }

    // Alocar memória para a matriz resultante
    int **resultado = (int **)malloc(l1 * sizeof(int *));
    if (resultado == NULL) {
        return NULL; // Retorna NULL em caso de falha na alocação de memória
    }

    for (int i = 0; i < l1; i++) {
        resultado[i] = (int *)malloc(c1 * sizeof(int));
        if (resultado[i] == NULL) {
            // Em caso de falha na alocação de memória, libera a memória alocada anteriormente e retorna NULL
            for (int j = 0; j < i; j++) {
                free(resultado[j]);
            }
            free(resultado);
            return NULL;
        }
    }

    // Realizar a soma das matrizes A e B
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c1; j++) {
            resultado[i][j] = A[i * c1 + j] + B[i * c1 + j];
        }
    }

    return resultado;
}

int main() {
    int l, c;

    printf("Digite o numero de linhas e colunas das matrizes: ");
    scanf("%d", &l);
    c = l;

    int *A = (int *)malloc(l * c * sizeof(int));
    int *B = (int *)malloc(l * c * sizeof(int));

    if (A == NULL || B == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    printf("Digite os elementos da matriz A (%dx%d):\n", l, c);
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i * c + j]);
        }
    }

    printf("Digite os elementos da matriz B (%dx%d):\n", l, c);
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &B[i * c + j]);
        }
    }

    int **resultado = somaMatriz(A, l, c, B, l, c);

    if (resultado == NULL) {
        printf("Dimensoes incompativeis para a soma das matrizes.\n");
        return 1;
    }

    printf("Matriz A:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", A[i * c + j]);
        }
        printf("\n");
    }

    printf("Matriz B:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", B[i * c + j]);
        }
        printf("\n");
    }

    printf("Resultado da soma das matrizes A e B:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    // Liberar a memória alocada
    for (int i = 0; i < l; i++) {
        free(resultado[i]);
    }
    free(resultado);
    free(A);
    free(B);

    return 0;
}
