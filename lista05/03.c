#include <stdio.h>

int somaDivisoresProprios(int num) {
    int soma = 0;

    // Calcular divisores próprios de num 
    for (int i = 1; i < num; i++) {
        
        // Verifica se i é divisor de num
        if (num % i == 0) {
            soma += i;
        }
    }

    return soma;
}

int saoAmigos(int a, int b) {
    return (somaDivisoresProprios(a) == b && somaDivisoresProprios(b) == a);
}

void imprimirResultado(int a, int b) {
    if (saoAmigos(a, b)) {
        printf("%d e %d são números amigos.\n", a, b);
    } else {
        printf("%d e %d não são números amigos.\n", a, b);
    }
}

int main() {
    int num1, num2;

    printf("Digite dois números inteiros positivos a e b: ");
    scanf("%d %d", &num1, &num2);

    imprimirResultado(num1, num2);

    return 0;
}
