#include <stdio.h>

int ehQuadradoMagico(int matriz[][100], int n) {
    int somaReferencia = 0;
    for (int i = 0; i < n; i++) {
        somaReferencia += matriz[0][i];
    }

    for (int i = 0; i < n; i++) {
        int somaLinha = 0;
        int somaColuna = 0;
        for (int j = 0; j < n; j++) {
            somaLinha += matriz[i][j];
            somaColuna += matriz[j][i];
        }
        if (somaLinha != somaReferencia || somaColuna != somaReferencia) {
            return 0;
        }
    }

    int somaDiagonalPrincipal = 0;
    for (int i = 0; i < n; i++) {
        somaDiagonalPrincipal += matriz[i][i];
    }
    if (somaDiagonalPrincipal != somaReferencia) {
        return 0;
    }

    int somaDiagonalSecundaria = 0;
    for (int i = 0; i < n; i++) {
        somaDiagonalSecundaria += matriz[i][n - i - 1];
    }
    if (somaDiagonalSecundaria != somaReferencia) {
        return 0;
    }

    return 1; // Se tudo passar, eh um quadarado magico.
}

int main() {
    int n;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);

    int matriz[100][100];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (ehQuadradoMagico(matriz, n)) {
        printf("A matriz é um quadrado mágico.\n");
    } else {
        printf("A matriz não é um quadrado mágico.\n");
    }

    return 0;
}
