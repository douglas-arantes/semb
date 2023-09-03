#include <stdio.h>

int main() {
    char input[81]; // Considera uma string de até 80 caracteres + o caractere nulo '\0'
    //\0 para servir de ponto de parada no loop
    
    printf("Digite uma string: ");
    fgets(input, sizeof(input), stdin);

    // Itera pela string e converte letras maiúsculas em minúsculas
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = input[i] + 32;
        }
    }

    printf("%s\n", input);

    return 0;
}
