#include <stdio.h>

int main() {
    int n;
    printf("Digite um número inteiro n: ");
    scanf("%d", &n);

    int somatorio = 0;
    for (int i = 1; i <= n; i++) {
        somatorio += i;
    }

    printf("O somatório de 1 até %d é: %d\n", n, somatorio);

    return 0;
}