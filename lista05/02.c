#include <stdio.h>


int ehPrimo(int i) {
    if (i <= 1) {
        return 0; // Por definição... números menores ou iguais a 1 não são primos
    }

    // Um número para ser primo só pode ter 2 divisores {ele próprio e 1}
    for (int divisor = 2; divisor <= i / 2; divisor++) {
        if (i % divisor == 0) {
            return 0; // Logo, se achar outro divisor, ele não é primo
        }
    }

    return 1;
}

int main() {
    int n;

    printf("Digite um valor inteiro n: ");
    scanf("%d", &n);

    printf("Números primos de 1 até %d:\n", n);

    for (int i = 1; i <= n; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
