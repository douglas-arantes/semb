#include <stdio.h>
#include <string.h>


void eliminarCaracteres(char *string1, char *string2) {
    int ocorrencias[256] = {0};

    // Preenche o array de ocorrências com 1 para cada caractere em string1
    for (int i = 0; string1[i] != '\0'; i++) {
        ocorrencias[(unsigned char)string1[i]] = 1;
    }

    int j = 0;

    // Percorre a segunda string copiando apenas os caracteres que não ocorrem em string1
    for (int i = 0; string2[i] != '\0'; i++) {
        if (!ocorrencias[(unsigned char)string2[i]]) {
            string2[j++] = string2[i];
        }
    }

    string2[j] = '\0'; // Define o novo final da segunda string
}

int main() {
    char string1[100], string2[100];

    printf("Digite a primeira string: ");
    scanf("%s", string1);
    printf("Digite a segunda string: ");
    scanf("%s", string2);

    eliminarCaracteres(string1, string2);

    printf("Resultado: %s\n", string2);

    return 0;
}
