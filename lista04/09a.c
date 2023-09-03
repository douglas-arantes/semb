#include <stdio.h>
#include <string.h>

int main() {
    char original[81], inversa[81];

    printf("Digite uma string: ");
    fgets(original, sizeof(original), stdin);

    // Remover o caractere de nova linha (\n) da string lida pelo fgets
    original[strcspn(original, "\n")] = '\0';

    int tamanho = strlen(original);
    
    // Inverter a string e guardar em inversa
    for (int i = 0; i < tamanho; i++) {
        inversa[i] = original[tamanho - 1 - i];
    }
    
    inversa[tamanho] = '\0'; // Adicionar o caractere nulo no final da string invertida

    printf("String original: %s\n", original);
    printf("inversa: %s\n", inversa);

    return 0;
}
