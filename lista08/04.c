#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite a dimensao n do vetor: ");
    scanf("%d", &n);

    double *vetor1 = (double *)malloc(n * sizeof(double));
    double *vetor2 = (double *)malloc(n * sizeof(double));

    if (vetor1 == NULL || vetor2 == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &vetor2[i]);
    }

    //Soma dos elementos dos 2 vetores na mesma posição.
    //OBS: O enunciado ficou ambíguo sobre o que seria a soma dos 2 vetores. Escolhi essa abordagem.
    printf("Resultado da soma dos vetores - interpretacao 1:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2lf\n", vetor1[i] + vetor2[i]);
    }

    //Outra interpretação seria:
    // Soma de todos os elementos dos vetores
    double somaTotal = 0.0;
    for (int i = 0; i < n; i++) {
        somaTotal += vetor1[i] + vetor2[i];
    }

    // Impressão do resultado
    printf("Resultado da soma de todos os elementos dos vetores - interpretacao 2: %.2lf\n", somaTotal);

    free(vetor1);
    free(vetor2);

    return 0;
}
