#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char entrada[81];
    int i, j;

    printf("Digite uma string: ");
    fgets(entrada, sizeof(entrada), stdin);

    // Remover o caractere de nova linha (\n) da string lida pelo fgets
    entrada[strcspn(entrada, "\n")] = '\0';

    int tamanho = strlen(entrada);

    // Remover espaços em branco e converter para letras minúsculas
    for (i = 0, j = 0; i < tamanho; i++) {
        if (!isspace(entrada[i])) {
            entrada[j++] = tolower(entrada[i]);
        }
    }
    entrada[j] = '\0';

    // Verificar se a string é um palíndromo
    int palindromo = 1;

    for (i = 0, j = strlen(entrada) - 1; i < j; i++, j--) {
        if (entrada[i] != entrada[j]) {
            palindromo = 0; // Não é um palíndromo
            break;
        }
    }

    if (palindromo) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }

    return 0;
}
