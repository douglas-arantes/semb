#include <stdio.h>
#include <string.h>

int main() {
    char texto[1000], padrao[100];

    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Digite o padrão a ser buscado: ");
    fgets(padrao, sizeof(padrao), stdin);

    // Remover o caractere de nova linha (\n) das strings lidas pelo fgets
    texto[strcspn(texto, "\n")] = '\0';
    padrao[strcspn(padrao, "\n")] = '\0';

    int tamTexto = strlen(texto);
    int tamPadrao = strlen(padrao);
    int encontrados = 0;

    for (int i = 0; i <= tamTexto - tamPadrao; i++) {
        int j;

        // Verificar se o padrão ocorre a partir da posição i
        for (j = 0; j < tamPadrao; j++) {
            if (texto[i + j] != padrao[j]) {
                break;
            }
        }

        if (j == tamPadrao) {
            printf("%d\n", i);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhuma ocorrência encontrada.\n");
    }

    return 0;
}
