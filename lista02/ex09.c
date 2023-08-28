#include <stdio.h>

int main() {
    int n;
    printf("Digite um inteiro positivo n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O número n deve ser não negativo.\n");
        return 1; // Sinalizar para o SO, que houve erro. [Aula de semb anterior ;) ]
    }

    for (int i = 0; i <= n; i++) {
        int potencia = 1;
        for (int j = 0; j < i; j++) {
            potencia *= 2;
        }
        printf("2^%d = %d\n", i, potencia);
    }

    return 0;
}