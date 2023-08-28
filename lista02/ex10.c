#include <stdio.h>

int main() {
    int n;
    printf("Digite um inteiro positivo n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O número n deve ser não negativo.\n");
        return 1; // Sinalizar para o SO, que houve erro. [Aula de semb anterior ;) ]
    }

    int fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %d\n", n, fatorial);

    return 0;
}
