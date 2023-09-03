#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100], string3[100], result[300];

    printf("Digite a primeira string: ");
    scanf("%s", string1);
    printf("Digite a segunda string: ");
    scanf("%s", string2);
    printf("Digite a terceira string: ");
    scanf("%s", string3);

    // Armazena as três strings em um array de strings
    char *strings[] = {string1, string2, string3};
    int numStrings = sizeof(strings) / sizeof(strings[0]);

    // Ordena as strings em ordem alfabética
    for (int i = 0; i < numStrings - 1; i++) {
        for (int j = i + 1; j < numStrings; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                char *temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }

    // Concatena as strings ordenadas
    strcpy(result, strings[0]);
    strcat(result, strings[1]);
    strcat(result, strings[2]);

    printf("Resultado concatenado e ordenado: %s\n", result);

    return 0;
}
