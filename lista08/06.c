#include <stdio.h>
#include <stdlib.h>

int triangular(int *M, int l, int c) {
    // Verificar se a matriz não é vazia
    if (l <= 0 || c <= 0) {
        return 0;
    }

    // Verificar se a matriz é quadrada (número de linhas igual ao número de colunas)
    if (l != c) {
        return 0;
    }

    // Verificar se todos os elementos acima da diagonal principal são iguais a zero
    for (int i = 0; i < l; i++) {
        for (int j = i + 1; j < c; j++) {
            if (M[i * c + j] != 0) {
                return 0;
            }
        }
    }

    // Se todas as verificações passaram, a matriz é triangular inferior
    return 1;
}

int main() {
    int l, c;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &c);

    int *matriz = (int *)malloc(l * c * sizeof(int));

    if (matriz == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        return 1;
    }

    printf("Digite os elementos da matriz (%dx%d):\n", l, c);
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matriz[i * c + j]);
        }
    }

    int resultado = triangular(matriz, l, c);

    if (resultado) {
        printf("A matriz e triangular inferior.\n");
    } else {
        printf("A matriz nao e triangular inferior.\n");
    }

    free(matriz);

    return 0;
}
