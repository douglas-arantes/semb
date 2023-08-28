#include <stdio.h>

int main() {
    int n;
    printf("Digite um inteiro positivo n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O número n deve ser positivo.\n");
        return 1; // Sinalizar para o SO, que houve erro. [Aula de semb anterior ;) ]
    }

    int soma = 0;
    for (int i = 0; i < n; i++) {
        int numero;
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);
        soma += numero;
    }

    printf("A soma dos %d números é: %d\n", n, soma);

    return 0;
}