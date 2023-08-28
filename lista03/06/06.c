#include <stdio.h>

int main() {
    int m, n;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &n);

    int matriz[m][n];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int frequency[101] = {0}; // Array para contar a frequência dos números de 0 a 100

    // Contagem da frequência dos números na matriz
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            frequency[matriz[i][j]]++;
        }
    }

    int minFrequency = m * n + 1; // Valor máximo inicial para encontrar o mínimo
    int maxFrequency = 0; // Valor mínimo inicial para encontrar o máximo

    // Encontrar a menor e maior frequência
    for (int num = 0; num <= 100; num++) {
        if (frequency[num] > 0) {
            if (frequency[num] < minFrequency) {
                minFrequency = frequency[num];
            }
            if (frequency[num] > maxFrequency) {
                maxFrequency = frequency[num];
            }
        }
    }

    printf("Elementos com menor frequência (%d ocorrências):\n", minFrequency);
    for (int num = 0; num <= 100; num++) {
        if (frequency[num] == minFrequency) {
            printf("%d ", num);
        }
    }
    printf("\n");

    printf("Elementos com maior frequência (%d ocorrências):\n", maxFrequency);
    for (int num = 0; num <= 100; num++) {
        if (frequency[num] == maxFrequency) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
