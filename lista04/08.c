#include <stdio.h>
#include <string.h>

int eSubsequencia(const char *T1, const char *T2) {
    int len1 = strlen(T1);
    int len2 = strlen(T2);

    int i = 0, j = 0;

    // Percorre as strings T1 e T2 para verificar se T1 é subsequência de T2
    while (i < len1 && j < len2) {
        if (T1[i] == T2[j]) {
            i++; 
        }
        j++; 
    }

    // Se todos os caracteres de T1 foram encontrados em T2 na mesma ordem, T1 é uma subsequência
    return (i == len1);
}

int main() {
    char T1[100], T2[100];

    printf("Digite a string T1: ");
    scanf("%s", T1);

    printf("Digite a string T2: ");
    scanf("%s", T2);

    if (eSubsequencia(T1, T2)) {
        printf("T1 é subsequência de T2.\n");
    } else {
        printf("T1 não é subsequência de T2.\n");
    }

    return 0;
}
