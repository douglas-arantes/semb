#include <stdio.h>
#include <stdlib.h>

void pares(int *M, int l, int c, int *numPares, int *numImpares) {
    printf("Indices das posicoes com numeros pares:\n");

    *numPares = 0;
    *numImpares = 0;

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            int valor = M[i * c + j];
            if (valor % 2 == 0) {
                printf("M[%d][%d]\n", i, j);
                (*numPares)++;
            } else {
                (*numImpares)++;
            }
        }
    }
}

int main() {
    int l, c, numPares, numImpares;

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

    pares(matriz, l, c, &numPares, &numImpares);

    printf("Numero total de posicoes pares: %d\n", numPares);
    printf("Numero total de posicoes impares: %d\n", numImpares);

    free(matriz);

    return 0;
}
