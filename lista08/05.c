#include <stdio.h>
#include <stdlib.h>

int *uniao(int *v1, int n1, int *v2, int n2, int *nResultado) {
    int *resultado = NULL;
    int i, j, k = 0;

    // Alocar memória para o vetor resultado
    resultado = (int *)malloc((n1 + n2) * sizeof(int));

    if (resultado == NULL) {
        // Em caso de falha na alocação de memória
        return NULL;
    }

    // Inicializar o vetor resultado com zeros
    for (i = 0; i < (n1 + n2); i++) {
        resultado[i] = 0;
    }

    // Copiar elementos do primeiro vetor para o resultado
    for (i = 0; i < n1; i++) {
        resultado[k] = v1[i];
        k++;
    }

    // Verificar se cada elemento do segundo vetor está no resultado
    for (i = 0; i < n2; i++) {
        int estaNaUniao = 0;
        for (j = 0; j < n1; j++) {
            if (v2[i] == v1[j]) {
                estaNaUniao = 1;
                break;
            }
        }
        if (!estaNaUniao) {
            resultado[k] = v2[i];
            k++;
        }
    }

    *nResultado = k; // Armazenar o tamanho real da união

    return resultado;
}

int main() {
    int n1, n2, *v1, *v2, *resultado, nResultado;

    printf("Digite o numero de elementos no primeiro vetor: ");
    scanf("%d", &n1);
    v1 = (int *)malloc(n1 * sizeof(int));
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite o numero de elementos no segundo vetor: ");
    scanf("%d", &n2);
    v2 = (int *)malloc(n2 * sizeof(int));
    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &v2[i]);
    }

    resultado = uniao(v1, n1, v2, n2, &nResultado);

    if (resultado == NULL) {
        printf("Erro na alocacao de memoria para o resultado.\n");
        return 1;
    }

    printf("Resultado da uniao dos conjuntos:\n");
    for (int i = 0; i < nResultado; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    free(v1);
    free(v2);
    free(resultado);

    return 0;
}
