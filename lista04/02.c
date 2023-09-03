#include <stdio.h>
#include <string.h>

void removerEspacosExtras(char *frase) {
    int i, j = 0;
    int len = strlen(frase);
    int espacoExtra = 0;

    if (len > 80) {
        printf("A frase tem mais que 80 caracteres.\n");
        return;
    }

    // Manter espaços extras no início da frase
    while (frase[j] == ' ') {
        j++;
    }

    // Remover espaços extras entre as palavras da frase
    for (i = j; i < len; i++) {
        if (frase[i] == ' ') {
            if (espacoExtra == 0) {
                frase[j++] = ' ';
                espacoExtra = 1;
            }
        } else {
            frase[j++] = frase[i];
            espacoExtra = 0;
        }
    }

    // Manter espaços extras no final da frase
    while (j > 0 && frase[j - 1] == ' ') {
        j--;
    }

    frase[j] = '\0';
}

int main() {
    char frase[81]; // Declare a string com tamanho máximo de 80 caracteres

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Remova o caractere de nova linha se presente tiver
    int len = strlen(frase);
    if (len > 0 && frase[len - 1] == '\n') {
        frase[len - 1] = '\0';
    }

    printf("%s\n", frase);

    removerEspacosExtras(frase);

    printf("%s\n", frase);

    return 0;
}
