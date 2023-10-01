#include <stdio.h>
#include <stdlib.h>

int calcularProdutoEscalar(int *x, int *y, int n) {
    int produto = 0;
    for (int i = 0; i < n; i++) {
        produto += x[i] * y[i];
    }
    return produto;
}

int main() {
    int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    int *x = (int *)malloc(n * sizeof(int));
    int *y = (int *)malloc(n * sizeof(int));

    if (x == NULL || y == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    printf("Digite os elementos do vetor x:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    printf("Digite os elementos do vetor y:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &y[i]);
    }

    int produtoEscalar = calcularProdutoEscalar(x, y, n);

    printf("O produto escalar dos vetores x e y eh: %d\n", produtoEscalar);

    free(x);
    free(y);

    return 0;
}
