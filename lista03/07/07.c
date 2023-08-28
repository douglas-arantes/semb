#include <stdio.h>

int main() {
    int m, n;

    printf("Digite o número de linhas (m) da matriz: ");
    scanf("%d", &m);

    printf("Digite o número de colunas (n) da matriz: ");
    scanf("%d", &n);

    float matriz[m][n];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    int foundDuplicate = 0;
    int visited[m * n + 1];

    // Inicialização do array visited com zeros
    for (int i = 0; i < m * n + 1; i++) {
        visited[i] = 0;
    }

    // Verificação de repetições
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int value = (int)matriz[i][j];
            if (visited[value]) {
                foundDuplicate = 1;
                break;
            }
            visited[value] = 1;
        }
        if (foundDuplicate) {
            break;
        }
    }

    if (foundDuplicate) {
        printf("Existem elementos repetidos na matriz.\n");
    } else {
        printf("Não existem elementos repetidos na matriz.\n");
    }

    return 0;
}
