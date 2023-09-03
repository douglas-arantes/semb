#include <stdio.h>
#include <string.h>
#include <ctype.h>

int saoAnagramas(const char *palavra1, const char *palavra2) {
    int contagem1[26] = {0}; // Contar as ocorrências de cada letra na primeira palavra
    int contagem2[26] = {0}; // Contar as ocorrências de cada letra na segunda palavra

    // Não são anagramas se não têm o mesmo tamanho
    if (strlen(palavra1) != strlen(palavra2)) {
        return 0;
    }

    // Conta as ocorrências de cada letra na primeira palavra
    for (int i = 0; palavra1[i] != '\0'; i++) {
        if (isalpha(palavra1[i])) {
            contagem1[tolower(palavra1[i]) - 'a']++;
        }
    }

    // Conta as ocorrências de cada letra na segunda palavra
    for (int i = 0; palavra2[i] != '\0'; i++) {
        if (isalpha(palavra2[i])) {
            contagem2[tolower(palavra2[i]) - 'a']++;
        }
    }

    // Compara as contagens das letras nas duas palavras
    for (int i = 0; i < 26; i++) {
        if (contagem1[i] != contagem2[i]) {
            return 0; // Não são anagramas
        }
    }

    return 1;
}

int main() {
    char palavra1[100], palavra2[100];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    if (saoAnagramas(palavra1, palavra2)) {
        printf("As palavras são anagramas.\n");
    } else {
        printf("As palavras não são anagramas.\n");
    }

    return 0;
}
