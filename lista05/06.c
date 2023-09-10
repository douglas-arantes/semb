#include <stdio.h>


float media(float F[], int n) {
    float soma = 0.0;

    for (int i = 0; i < n; i++) {
        soma += F[i];
    }

    float media = soma / n;
    return media;
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vetor[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
    }

    float resultado = media(vetor, n);

    printf("A média dos elementos do vetor é: %.2f\n", resultado);

    return 0;
}
