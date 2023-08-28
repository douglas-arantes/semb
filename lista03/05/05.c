#include <stdio.h>

int main() {
    int size1, size2;

    printf("Digite o tamanho do vetor v1: ");
    scanf("%d", &size1);

    printf("Digite o tamanho do vetor v2: ");
    scanf("%d", &size2);

    // Verificar se size1 e size2 são menores que 50
    if (size1 > 50)
    {
        printf("Tamanho de v1 maior que 50. \n");
        return -1;
    }

    if (size2 > 50)
    {
        printf("Tamanho de v2 maior que 50. \n");
        return -1;
    }

    int v1[size1];
    int v2[size2];
    
    printf("Digite os valores do vetor v1:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite os valores do vetor v2:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &v2[i]);
    }

    int v3[size1 + size2];
    int size3 = 0; 

    int i = 0, j = 0;

    for (int k = 0; k < size1 + size2; k++) {
        if (i < size1 && (j >= size2 || v1[i] < v2[j])) {
            v3[k] = v1[i];
            i++;
        } else {
            v3[k] = v2[j];
            j++;
        }
        size3++;
    }

    printf("Resultado: ");
    for (int k = 0; k < size3; k++) {
        printf("%d ", v3[k]);
    }
    printf("\n");

    return 0;
}
