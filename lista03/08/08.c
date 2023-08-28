#include <stdio.h>

int main() {
    int A[4][4];
    int transposta[4][4];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Achar matriz transposta > inverter linhas e colunas
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            transposta[j][i] = A[i][j];
        }
    }

    printf("Matriz original:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transposta:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
