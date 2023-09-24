#include <stdio.h>

union int_or_float {
    int i;
    float f;
};

int main() {
    int n;

    printf("Digite o numero de elementos na sequencia: ");
    scanf("%d", &n);

    union int_or_float item;
    int soma_inteiros = 0;
    float produto_floats = 0.0;

    for (int i = 0; i < n; i++) {
        char tipo;
        printf("Elemento %d (i para inteiro, f para float): ", i + 1);
        scanf(" %c", &tipo);

        if (tipo == 'i') {
            // Lê um número inteiro
            scanf("%d", &item.i);
            soma_inteiros += item.i;
        } else if (tipo == 'f') {
            // Lê um número em ponto flutuante
            scanf("%f", &item.f);
            if (produto_floats == 0.0) {
                produto_floats = item.f;
            } else {
                produto_floats *= item.f;
            }
        } else {
            printf("Tipo desconhecido. Use 'i' para inteiro ou 'f' para float.\n");
            i--;
        }
    }

    printf("Soma dos inteiros: %d\n", soma_inteiros);
    printf("Produto dos floats: %.2f\n", produto_floats);

    return 0;
}
